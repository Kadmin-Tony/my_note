#include <stdio.h>

__global__
void print(int a)
{
    printf("%d\n", 100 / a);
}

int main()
{
    print<<<1, 1025>>>(4);
    cudaError_t err = cudaGetLastError();
    printf("%s\n", cudaGetErrorString(err));

    err = cudaDeviceSynchronize();
    printf("%s\n", cudaGetErrorString(err));
    
    return 0;
}