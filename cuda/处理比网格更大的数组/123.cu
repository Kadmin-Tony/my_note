#include <stdio.h>

// blockDim.x: 一个线程块有多少个线程
// gridDim.x: 一共有多少个线程块

__global__ void init(int * a, int n)
{
    // 第q个线程
    int q = threadIdx.x + blockDim.x * blockIdx.x; 
    // 总共的线程数 
    int w = gridDim.x * blockDim.x;  
    for(int i = q; i < n; i += w){
        a[i] = i;
    }
}

__global__ void print(int * a, int n)
{
    for(int i = 0; i < 1024; i++){
        printf("%d\n", a[i]);
    }
}

int main()
{
    int *a;
    cudaMallocManaged(&a, 1145 * sizeof(int));

    init<<<100, 20>>>(a, 1145);
    print<<<1, 1>>>(a, 1145);

    cudaFree(a);
    cudaDeviceSynchronize();
}