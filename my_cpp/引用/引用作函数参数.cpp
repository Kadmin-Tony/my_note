#include <iostream>
using namespace std;

// int a = b : a的值与b相同
// int *a = b : a为b的地址
// int &a = b : a为b的别名

// 由于引用是起别名，因此必须初始化且不能用常量，必须用变量

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int A = 10, B = 20;
    swap(A, B); // a与A,b与B为同一物,函数内ab调换，即AB调换

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    system("pause");
    return 0;
}