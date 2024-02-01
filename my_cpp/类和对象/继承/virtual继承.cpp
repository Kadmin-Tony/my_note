#include <iostream>
using namespace std;

// 第二层的virtual使第三层可以更改继承而来的内容

class Base
{
public:
    int a = 100;
};

class VB1: virtual public Base
{
};

class VB2: virtual public Base
{
};

class Son: public VB1, public VB2
{
};

int main()
{
    Son s;
    s.VB1::a = 100;
    s.VB2::a = 300;
    cout << s.a << endl;

    system("pause");
    return 0;
}