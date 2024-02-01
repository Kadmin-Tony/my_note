#include <iostream>
using namespace std;

class A
{
public:
    virtual void hello(){cout << "A" << endl;}
    A(){hello();}
};

class B: public A
{
public:
    void hello(){cout << "B" << endl;}
};

int main()
{
    B b;
    b.hello();

    system("pause");
    return 0;
}