#include <iostream>
using namespace std;

template <class T>
void f(T a, T b)
{
    cout << "正在调用模板" << endl;
}

void f(int a, int b)
{
    cout << "正在调用函数" << endl;
}

int main()
{
    f(1, 2);
    f(1.0, 2.0);

    // 强制调用模板
    f<>(1,2);

    system("pause");
    return 0;
}