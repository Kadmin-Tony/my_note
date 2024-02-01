#include <stdio.h>

// maloc分配的内存cuda无法使用

__global__ void print(int *a, int* b)
{
    a[0] = 1;
    printf("%d", a[0]);
    b[0] = 2;
    printf("%d", b[0]);
}

int main()
{
    int *a, *b;
    size_t size = 100 * sizeof(int);

    cudaMallocManaged(&a, size);
    b = (int*) malloc(size);

    print<<<1, 1>>>(a, b);

    cudaFree(a);
    free(b);

    cudaDeviceSynchronize();
}