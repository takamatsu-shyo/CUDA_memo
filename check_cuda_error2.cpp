//#define CUDA_CHECK(ans)                                                                                                \
//  {                                                                                                                  \
//      gpuAssert((ans), __FILE__, __LINE__);                                                                          \
//  }
//
//inline void gpuAssert(cudaError_t code, const char* file, int line)
//{
//  if (code != cudaSuccess)
//  {
//      fprintf(stderr, "%s:%d: CUDA error: %d %s\n", file, line, code, cudaGetErrorString(code));
//
//      exit(code);
//  }
//}

