#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = 2;

    int * const p1 = &a;
    // p1 不可修改
    // 错误: p1 = &b;

    const int * p2 = &b;
    // *p2 不可修改
    // 错误: *p2 = 100;
}