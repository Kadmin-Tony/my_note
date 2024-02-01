#include<stdio.h>
// cudaMallocManaged()后，cpu或显卡访问内存时，若数据在显卡或cpu上时
// 则会产生页错误，发生内存迁移，占用大量时间
// 若已知即将发生页错误，可使用cudaMemPrefetchAsync提前进行 异步 内存迁移

int deviceId;
cudaGetDevice(&deviceId);                                         // The ID of the currently active GPU device.

cudaMemPrefetchAsync(pointerToSomeUMData, size, deviceId);        // Prefetch to GPU device.
cudaMemPrefetchAsync(pointerToSomeUMData, size, cudaCpuDeviceId); // Prefetch to host. `cudaCpuDeviceId` is a
                                                                  // built-in CUDA variable.

// 将统一内存sum拷贝到主机内存h_sum上
cudaMemcpy(h_sum, sum, size * sizeof(int), cudaMemcpyDeviceToHost); 