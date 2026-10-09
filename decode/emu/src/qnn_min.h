// Minimal QNN C API declarations (2.x layout), written from the public API
// shape and checked against the 17U libQnnHtp.so interface table order.
#pragma once
#include <stdint.h>

typedef void* Qnn_Handle_t;
typedef Qnn_Handle_t Qnn_BackendHandle_t, Qnn_ContextHandle_t, Qnn_GraphHandle_t,
    Qnn_LogHandle_t, Qnn_DeviceHandle_t, Qnn_ProfileHandle_t, Qnn_MemHandle_t;
typedef uint64_t Qnn_ErrorHandle_t;

typedef enum {
  QNN_DATATYPE_INT_8 = 0x0008, QNN_DATATYPE_INT_16 = 0x0016, QNN_DATATYPE_INT_32 = 0x0032,
  QNN_DATATYPE_UINT_8 = 0x0108, QNN_DATATYPE_UINT_16 = 0x0116, QNN_DATATYPE_UINT_32 = 0x0132,
  QNN_DATATYPE_FLOAT_16 = 0x0216, QNN_DATATYPE_FLOAT_32 = 0x0232,
  QNN_DATATYPE_SFIXED_POINT_8 = 0x0308, QNN_DATATYPE_SFIXED_POINT_16 = 0x0316,
  QNN_DATATYPE_SFIXED_POINT_32 = 0x0332,
  QNN_DATATYPE_UFIXED_POINT_8 = 0x0408, QNN_DATATYPE_UFIXED_POINT_16 = 0x0416,
  QNN_DATATYPE_UFIXED_POINT_32 = 0x0432, QNN_DATATYPE_BOOL_8 = 0x0508,
  QNN_DATATYPE_UNDEFINED = 0x7FFFFFFF
} Qnn_DataType_t;

typedef enum { QNN_DEFINITION_IMPL_GENERATED = 0, QNN_DEFINITION_DEFINED = 1,
               QNN_DEFINITION_UNDEFINED = 0x7FFFFFFF } Qnn_Definition_t;
typedef enum {
  QNN_QUANTIZATION_ENCODING_SCALE_OFFSET = 0, QNN_QUANTIZATION_ENCODING_AXIS_SCALE_OFFSET = 1,
  QNN_QUANTIZATION_ENCODING_UNDEFINED = 0x7FFFFFFF
} Qnn_QuantizationEncoding_t;
typedef struct { float scale; int32_t offset; } Qnn_ScaleOffset_t;
typedef struct { int32_t axis; uint32_t numScaleOffsets; Qnn_ScaleOffset_t* scaleOffset; } Qnn_AxisScaleOffset_t;
typedef struct {
  Qnn_Definition_t encodingDefinition;
  Qnn_QuantizationEncoding_t quantizationEncoding;
  union {
    Qnn_ScaleOffset_t scaleOffsetEncoding;
    Qnn_AxisScaleOffset_t axisScaleOffsetEncoding;
    uint8_t _pad[32];  // other encodings; sizeof(QuantizeParams)=40 (verified: Qnn_Tensor_t stride 0x90)
  };
} Qnn_QuantizeParams_t;

typedef enum { QNN_TENSOR_TYPE_APP_WRITE = 0, QNN_TENSOR_TYPE_APP_READ = 1,
               QNN_TENSOR_TYPE_APP_READWRITE = 2, QNN_TENSOR_TYPE_NATIVE = 3,
               QNN_TENSOR_TYPE_STATIC = 4, QNN_TENSOR_TYPE_NULL = 5 } Qnn_TensorType_t;
typedef enum { QNN_TENSOR_DATA_FORMAT_FLAT_BUFFER = 0 } Qnn_TensorDataFormat_t;
typedef enum { QNN_TENSORMEMTYPE_RAW = 0, QNN_TENSORMEMTYPE_MEMHANDLE = 1 } Qnn_TensorMemType_t;
typedef struct { void* data; uint32_t dataSize; } Qnn_ClientBuffer_t;

typedef struct {
  uint32_t id;
  const char* name;
  Qnn_TensorType_t type;
  Qnn_TensorDataFormat_t dataFormat;
  Qnn_DataType_t dataType;
  Qnn_QuantizeParams_t quantizeParams;
  uint32_t rank;
  uint32_t* dimensions;
  Qnn_TensorMemType_t memType;
  union { Qnn_ClientBuffer_t clientBuf; Qnn_MemHandle_t memHandle; };
} Qnn_TensorV1_t;

typedef enum { QNN_TENSOR_VERSION_1 = 1, QNN_TENSOR_VERSION_2 = 2 } Qnn_TensorVersion_t;
typedef struct { Qnn_TensorVersion_t version; union { Qnn_TensorV1_t v1; uint8_t _v2pad[136]; }; } Qnn_Tensor_t;

typedef struct {
  Qnn_DataType_t dataType;
  union { float floatValue; double doubleValue; uint32_t uint32Value; int32_t int32Value; uint8_t bool8Value; };
} Qnn_Scalar_t;
typedef enum { QNN_PARAMTYPE_SCALAR = 0, QNN_PARAMTYPE_TENSOR = 1 } Qnn_ParamType_t;
typedef struct {
  Qnn_ParamType_t paramType;
  const char* name;
  union { Qnn_Scalar_t scalarParam; Qnn_Tensor_t tensorParam; };
} Qnn_Param_t;

typedef struct {
  const char* name; const char* packageName; const char* typeName;
  uint32_t numOfParams; Qnn_Param_t* params;
  uint32_t numOfInputs; Qnn_Tensor_t* inputTensors;
  uint32_t numOfOutputs; Qnn_Tensor_t* outputTensors;
} Qnn_OpConfigV1_t;
typedef enum { QNN_OPCONFIG_VERSION_1 = 1 } Qnn_OpConfigVersion_t;
typedef struct { Qnn_OpConfigVersion_t version; union { Qnn_OpConfigV1_t v1; }; } Qnn_OpConfig_t;

#include <stdarg.h>
typedef void (*QnnLog_Callback_t)(const char* fmt, int level, uint64_t ts, va_list args);

// Interface function table (indices verified against libQnnHtp.so strings)
typedef struct {
  void* propertyHasCapability;                                                       // 0
  Qnn_ErrorHandle_t (*backendCreate)(Qnn_LogHandle_t, const void**, Qnn_BackendHandle_t*);  // 1
  void* backendSetConfig, *backendGetApiVersion, *backendGetBuildId, *backendRegisterOpPackage,
      *backendGetSupportedOperations, *backendValidateOpConfig;                       // 2..7
  Qnn_ErrorHandle_t (*backendFree)(Qnn_BackendHandle_t);                               // 8
  Qnn_ErrorHandle_t (*contextCreate)(Qnn_BackendHandle_t, Qnn_DeviceHandle_t, const void**,
                                     Qnn_ContextHandle_t*);                           // 9
  void* contextSetConfig;                                                            // 10
  Qnn_ErrorHandle_t (*contextGetBinarySize)(Qnn_ContextHandle_t, uint64_t*);          // 11
  Qnn_ErrorHandle_t (*contextGetBinary)(Qnn_ContextHandle_t, void*, uint64_t, uint64_t*);  // 12
  void* contextCreateFromBinary;                                                     // 13
  Qnn_ErrorHandle_t (*contextFree)(Qnn_ContextHandle_t, Qnn_ProfileHandle_t);          // 14
  Qnn_ErrorHandle_t (*graphCreate)(Qnn_ContextHandle_t, const char*, const void**,
                                   Qnn_GraphHandle_t*);                               // 15
  void* graphCreateSubgraph, *graphSetConfig;                                        // 16,17
  Qnn_ErrorHandle_t (*graphAddNode)(Qnn_GraphHandle_t, Qnn_OpConfig_t);                // 18
  Qnn_ErrorHandle_t (*graphFinalize)(Qnn_GraphHandle_t, Qnn_ProfileHandle_t, void*);   // 19
  void* graphRetrieve, *graphExecute, *graphExecuteAsync;                            // 20..22
  void* tensorCreateContextTensor;                                                   // 23
  Qnn_ErrorHandle_t (*tensorCreateGraphTensor)(Qnn_GraphHandle_t, Qnn_Tensor_t*);      // 24
  Qnn_ErrorHandle_t (*logCreate)(QnnLog_Callback_t, int, Qnn_LogHandle_t*);           // 25
  void* logSetLogLevel, *logFree;                                                    // 26,27
  void* _profile[7];                                                                 // 28..34
  void* memRegister, *memDeRegister;                                                 // 35,36
  void* deviceGetPlatformInfo, *deviceFreePlatformInfo, *deviceGetInfrastructure;     // 37..39
  Qnn_ErrorHandle_t (*deviceCreate)(Qnn_LogHandle_t, const void**, Qnn_DeviceHandle_t*);  // 40
  void* deviceSetConfig, *deviceGetInfo, *deviceFree;                                // 41..43
  void* _signal[4];                                                                  // 44..47
  void* errorGetMessage, *errorGetVerboseMessage, *errorFreeVerboseMessage;          // 48..50
} QnnFns_t;

typedef struct { uint32_t major, minor, patch; } Qnn_Version_t;
typedef struct { Qnn_Version_t coreApiVersion; Qnn_Version_t backendApiVersion; } Qnn_ApiVersion_t;
typedef struct {
  uint32_t backendId;
  const char* providerName;
  Qnn_ApiVersion_t apiVersion;
  QnnFns_t fn;
} QnnInterface_t;
