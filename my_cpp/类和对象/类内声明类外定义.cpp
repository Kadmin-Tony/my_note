#include <iostream>
using namespace std;

class C
{
public:
    // 类内声明
    void print();
    int m = 1;
};

// 类外定义
void C::print()
{
    cout << this -> m << endl;
}

int main()
{
    C c;
    c.print();

    system("pause");
    return 0;
}