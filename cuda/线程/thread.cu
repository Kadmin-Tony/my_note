#include <stdio.h>
#include <stdlib.h>

__global__ void print(int t)
{
    int n = blockDim.x * blockIdx.x + threadIdx.x;
    if( n < t )
        printf("%d\n", n);
}

int main()
{
    // 一个线程块最多有1024个线程
    print<<<3, 4>>>(10);
    cudaDeviceSynchronize();

    system("pause");
    return 0;
}