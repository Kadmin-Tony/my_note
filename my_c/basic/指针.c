// https://blog.csdn.net/weibo1230123/article/details/81503135
#include<stdio.h>
#include<stdlib.h>

int main(){
    // 因为·alloc返回的是void*类型，因此要用(int*)将其转化
    int *p1 = (int *)malloc(20*sizeof(int));  // m一个值, 不初始化
    int *p2 = (int *)calloc(20, sizeof(int));  // c两个值, 会初始化

    // realloc 可对指针进行扩容
    const int size = 200;
    int *p3 = (int *)realloc(p1, size*sizeof(int));
    // realloc(p, 0) 相当于 free(p).
}