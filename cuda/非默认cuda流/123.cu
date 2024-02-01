#include <stdio.h>
// 使用得默认cuda流可使多个核函数并发执行

__global__ void printNumber(int number)
{
    int n = 0;
    for(int i = 0; i < number+10; i++){
        n += i;
        printf("%d ", n);
    }
    printf("---%d\n", number);
}

int main()
{
  for (int i = 0; i < 20; ++i)
  {
    cudaStream_t stream;
    cudaStreamCreate(&stream);

    printNumber<<<1, 1, 0, stream>>>(i);
    cudaStreamDestroy(stream);
  }
  cudaDeviceSynchronize();
}