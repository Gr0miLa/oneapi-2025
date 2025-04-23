#ifndef __JACOBI_DEV_ONEAPI_H
#define __JACOBI_DEV_ONEAPI_H

#include <sycl/sycl.hpp>
#include <vector>

#define ITERATIONS 1024

std::vector<float> JacobiDevONEAPI(const std::vector<float> a, const std::vector<float> b, float eps, sycl::device dev);

#endif  // __JACOBI_DEV_ONEAPI_H
