#include <vector>

#define CUDA_DBL_MIN        2.2250738585072014e-308
#define CUDA_DBL_EPSILON    2.2204460492503131e-16

enum class GPU_Type {
    HALF = 16,
    FLOAT = sizeof(float),
    DOUBLE = sizeof(double)
};

void betapdf_cuda(const double *x, double *y, const double alpha, const double beta, unsigned long size);

void betapdf_cuda(const float *x, float *y, const float alpha, const float beta, unsigned long size);

void betacdf_cuda(const double *x, double *y, const double alpha, const double beta, unsigned long size);