// Build a tiny QNN HTP graph with fully known parameters and dump its context
// binary. Used as a "Rosetta stone" for the HTP serialisation format.
//
// usage: gen_conv out.bin cin cout k per_channel(0/1) relu(0/1) si so so_off
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "qnn_min.h"

static void logcb(const char* fmt, int level, uint64_t ts, va_list args) {
  static int all = -1; if (all < 0) all = getenv("QLOG") != NULL;
  if (all || level <= 2) { fprintf(stderr, "[qnn %d] ", level); vfprintf(stderr, fmt, args); fprintf(stderr, "\n"); }
}

static Qnn_Tensor_t mk(const char* name, Qnn_TensorType_t type, Qnn_DataType_t dt, uint32_t rank,
                       uint32_t* dims, float scale, int32_t offset, void* data, uint32_t bytes) {
  Qnn_Tensor_t t;
  memset(&t, 0, sizeof t);
  t.version = QNN_TENSOR_VERSION_1;
  t.v1.name = name;
  t.v1.type = type;
  t.v1.dataFormat = QNN_TENSOR_DATA_FORMAT_FLAT_BUFFER;
  t.v1.dataType = dt;
  if (scale > 0) {
    t.v1.quantizeParams.encodingDefinition = QNN_DEFINITION_DEFINED;
    t.v1.quantizeParams.quantizationEncoding = QNN_QUANTIZATION_ENCODING_SCALE_OFFSET;
    t.v1.quantizeParams.scaleOffsetEncoding.scale = scale;
    t.v1.quantizeParams.scaleOffsetEncoding.offset = offset;
  } else {
    t.v1.quantizeParams.encodingDefinition = QNN_DEFINITION_UNDEFINED;
    t.v1.quantizeParams.quantizationEncoding = QNN_QUANTIZATION_ENCODING_UNDEFINED;
  }
  t.v1.rank = rank;
  t.v1.dimensions = dims;
  t.v1.memType = QNN_TENSORMEMTYPE_RAW;
  t.v1.clientBuf.data = data;
  t.v1.clientBuf.dataSize = bytes;
  return t;
}

#define CHECK(x) do { Qnn_ErrorHandle_t _e = (x); if (_e) { fprintf(stderr, "%s failed: %llu\n", #x, (unsigned long long)_e); return 1; } } while (0)

int main(int argc, char** argv) {
  if (argc < 10) { fprintf(stderr, "usage: out cin cout k per_channel relu si so so_off\n"); return 2; }
  const char* out = argv[1];
  uint32_t cin = atoi(argv[2]), cout = atoi(argv[3]), k = atoi(argv[4]);
  int perch = atoi(argv[5]), relu = atoi(argv[6]);
  float si = atof(argv[7]), so = atof(argv[8]);
  int32_t so_off = atoi(argv[9]);
  const uint32_t H = 16, W = 16;

  void* h = dlopen("libQnnHtp.so", RTLD_NOW | RTLD_LOCAL);
  if (!h) { fprintf(stderr, "dlopen: %s\n", dlerror()); return 1; }
  int (*gp)(const QnnInterface_t***, uint32_t*) = dlsym(h, "QnnInterface_getProviders");
  const QnnInterface_t** list; uint32_t n;
  CHECK(gp(&list, &n));
  const QnnFns_t* q = &list[0]->fn;

  Qnn_LogHandle_t log = 0; Qnn_BackendHandle_t be = 0; Qnn_ContextHandle_t ctx = 0; Qnn_GraphHandle_t g = 0;
  CHECK(q->logCreate(logcb, 2, &log));
  CHECK(q->backendCreate(log, NULL, &be));
  CHECK(q->contextCreate(be, NULL, NULL, &ctx));
  CHECK(q->graphCreate(ctx, "probe", NULL, &g));

  // weights: int8 with a decodable pattern; per-output-channel max is 127
  uint32_t wd[4] = {k, k, cin, cout};
  int8_t* w = malloc(k * k * cin * cout);
  for (uint32_t ky = 0; ky < k; ky++)
    for (uint32_t kx = 0; kx < k; kx++)
      for (uint32_t ci = 0; ci < cin; ci++)
        for (uint32_t co = 0; co < cout; co++) {
          int v = ((co * 37 + ci * 11 + ky * 5 + kx * 3) % 251) - 125;
          w[((ky * k + kx) * cin + ci) * cout + co] = (int8_t)v;
        }
  float sw = 0.01f;
  Qnn_ScaleOffset_t* chs = malloc(sizeof(Qnn_ScaleOffset_t) * cout);
  for (uint32_t co = 0; co < cout; co++) { chs[co].scale = sw * (1.0f + 0.01f * co); chs[co].offset = 0; }
  Qnn_Tensor_t tw = mk("W", QNN_TENSOR_TYPE_STATIC, QNN_DATATYPE_SFIXED_POINT_8, 4, wd, sw, 0, w, k * k * cin * cout);
  if (perch) {
    tw.v1.quantizeParams.quantizationEncoding = QNN_QUANTIZATION_ENCODING_AXIS_SCALE_OFFSET;
    tw.v1.quantizeParams.axisScaleOffsetEncoding.axis = 3;
    tw.v1.quantizeParams.axisScaleOffsetEncoding.numScaleOffsets = cout;
    tw.v1.quantizeParams.axisScaleOffsetEncoding.scaleOffset = chs;
  }
  uint32_t bd[1] = {cout};
  int32_t* b = malloc(4 * cout);
  for (uint32_t co = 0; co < cout; co++) b[co] = 1000 * (int)co - 5000;
  Qnn_Tensor_t tb = mk("B", QNN_TENSOR_TYPE_STATIC, QNN_DATATYPE_SFIXED_POINT_32, 1, bd, si * sw, 0, b, 4 * cout);

  uint32_t xd[4] = {1, H, W, cin}, yd[4] = {1, H, W, cout};
  Qnn_Tensor_t tx = mk("x", QNN_TENSOR_TYPE_APP_WRITE, QNN_DATATYPE_UFIXED_POINT_16, 4, xd, si, 0, NULL, 0);
  Qnn_Tensor_t tc = mk(relu ? "c" : "y", relu ? QNN_TENSOR_TYPE_NATIVE : QNN_TENSOR_TYPE_APP_READ,
                       QNN_DATATYPE_UFIXED_POINT_16, 4, yd, so, so_off, NULL, 0);
  Qnn_Tensor_t ty = mk("y", QNN_TENSOR_TYPE_APP_READ, QNN_DATATYPE_UFIXED_POINT_16, 4, yd, so, 0, NULL, 0);
  CHECK(q->tensorCreateGraphTensor(g, &tx));
  CHECK(q->tensorCreateGraphTensor(g, &tw));
  CHECK(q->tensorCreateGraphTensor(g, &tb));
  CHECK(q->tensorCreateGraphTensor(g, &tc));
  if (relu) CHECK(q->tensorCreateGraphTensor(g, &ty));

  uint32_t two[1] = {2}, pd[2] = {2, 2};
  uint32_t stride[2] = {1, 1}, dil[2] = {1, 1}, pad[4] = {k / 2, k / 2, k / 2, k / 2};
  Qnn_Param_t ps[4];
  memset(ps, 0, sizeof ps);
  ps[0].paramType = QNN_PARAMTYPE_TENSOR; ps[0].name = "stride";
  ps[0].tensorParam = mk("stride", QNN_TENSOR_TYPE_STATIC, QNN_DATATYPE_UINT_32, 1, two, 0, 0, stride, 8);
  ps[1].paramType = QNN_PARAMTYPE_TENSOR; ps[1].name = "pad_amount";
  ps[1].tensorParam = mk("pad_amount", QNN_TENSOR_TYPE_STATIC, QNN_DATATYPE_UINT_32, 2, pd, 0, 0, pad, 16);
  ps[2].paramType = QNN_PARAMTYPE_TENSOR; ps[2].name = "dilation";
  ps[2].tensorParam = mk("dilation", QNN_TENSOR_TYPE_STATIC, QNN_DATATYPE_UINT_32, 1, two, 0, 0, dil, 8);
  ps[3].paramType = QNN_PARAMTYPE_SCALAR; ps[3].name = "group";
  ps[3].scalarParam.dataType = QNN_DATATYPE_UINT_32; ps[3].scalarParam.uint32Value = 1;

  Qnn_Tensor_t ins[3] = {tx, tw, tb};
  Qnn_OpConfig_t op;
  memset(&op, 0, sizeof op);
  op.version = QNN_OPCONFIG_VERSION_1;
  op.v1.name = "conv"; op.v1.packageName = "qti.aisw"; op.v1.typeName = "Conv2d";
  op.v1.numOfParams = 4; op.v1.params = ps;
  op.v1.numOfInputs = 3; op.v1.inputTensors = ins;
  op.v1.numOfOutputs = 1; op.v1.outputTensors = &tc;
  CHECK(q->graphAddNode(g, op));
  if (relu) {
    Qnn_OpConfig_t r;
    memset(&r, 0, sizeof r);
    r.version = QNN_OPCONFIG_VERSION_1;
    r.v1.name = "relu"; r.v1.packageName = "qti.aisw"; r.v1.typeName = "Relu";
    r.v1.numOfInputs = 1; r.v1.inputTensors = &tc;
    r.v1.numOfOutputs = 1; r.v1.outputTensors = &ty;
    CHECK(q->graphAddNode(g, r));
  }
  CHECK(q->graphFinalize(g, NULL, NULL));

  uint64_t sz = 0, wr = 0;
  CHECK(q->contextGetBinarySize(ctx, &sz));
  void* buf = malloc(sz);
  CHECK(q->contextGetBinary(ctx, buf, sz, &wr));
  FILE* f = fopen(out, "wb");
  fwrite(buf, 1, wr, f);
  fclose(f);
  printf("wrote %s (%llu bytes)\n", out, (unsigned long long)wr);
  q->contextFree(ctx, NULL);
  q->backendFree(be);
  return 0;
}
