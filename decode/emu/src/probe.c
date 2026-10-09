// Probe QnnInterface_getProviders of 17U libQnnHtp.so under qemu.
#include <dlfcn.h>
#include <stdint.h>
#include <stdio.h>

typedef struct { uint32_t major, minor, patch; } Qnn_Version_t;
typedef struct { Qnn_Version_t coreApiVersion; Qnn_Version_t backendApiVersion; } Qnn_ApiVersion_t;
typedef struct {
  uint32_t backendId;
  const char* providerName;
  Qnn_ApiVersion_t apiVersion;
  void* fn[96];  // function table (union of versioned structs)
} QnnInterface_t;
typedef int (*GetProviders)(const QnnInterface_t*** list, uint32_t* n);

int main(int argc, char** argv) {
  const char* lib = argc > 1 ? argv[1] : "libQnnHtp.so";
  void* h = dlopen(lib, RTLD_NOW | RTLD_LOCAL);
  if (!h) { printf("dlopen failed: %s\n", dlerror()); return 1; }
  GetProviders gp = (GetProviders)dlsym(h, argc > 2 ? argv[2] : "QnnInterface_getProviders");
  const QnnInterface_t** list = 0; uint32_t n = 0;
  int rc = gp(&list, &n);
  printf("rc=%d n=%u\n", rc, n);
  Dl_info di; dladdr((void*)gp, &di);
  uintptr_t base = (uintptr_t)di.dli_fbase;
  for (uint32_t i = 0; i < n; i++) {
    const QnnInterface_t* p = list[i];
    printf("backendId=%u name=%s core=%u.%u.%u backend=%u.%u.%u\n", p->backendId, p->providerName,
           p->apiVersion.coreApiVersion.major, p->apiVersion.coreApiVersion.minor, p->apiVersion.coreApiVersion.patch,
           p->apiVersion.backendApiVersion.major, p->apiVersion.backendApiVersion.minor, p->apiVersion.backendApiVersion.patch);
    for (int k = 0; k < 96; k++) {
      uintptr_t f = (uintptr_t)p->fn[k];
      printf("  fn[%2d] = %#lx (off %#lx)\n", k, (unsigned long)f, (unsigned long)(f ? f - base : 0));
    }
  }
  return 0;
}
