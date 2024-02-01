#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    while(a <= 1024){
        a <<= 1;  // 左移一位扩大2倍
        printf("%d\n", a);
    }

    a = 999;
    while(a > 0){
        a >>= 1;  // 奇数时a = (a - 1) / 2
        printf("%d\n", a);
    }

    system("pause");
    return 0;
}