#include <iostream>
using namespace std;

class Person
{
// 类内声明
public:
    static int a;
    // 静态函数只可以访问静态变量
    static void print()
    {
        a += 1;
        cout << a << endl;
    }
};

// 静态变量需要类外进行定义
int Person::a;

int main()
{
    Person p1;
    p1.a = 2;

    Person::print();

    Person::print();

    p1.print();

    system("pause");
    return 0;
}