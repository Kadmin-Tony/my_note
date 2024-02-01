#include <iostream>
using namespace std;

// virtual: 放于父类使子类可以更改父类的内容
// C++中父类指针可以指向子类
// 目的是为了让接口更丰富,称为多态
// 因此要在父类定义接口，子类写功能

class Base
{
    public:Base(){}
public:
    void print1(){cout << "Base" << endl;}
    virtual void print2(){cout << "Base" << endl;}


    virtual void f() = 0;  // 纯虚函数
    virtual ~Base(){}  // 虚析构
};


class Derived:public Base
{
public:Derived(){}
public:
    void print1(){cout << "Derived" << endl;}
    void print2(){cout << "Derived" << endl;}
    void cry(){cout << "wuwuwu" << endl;}
};


int main()
{
    Base * p = new Derived();
    p -> print1();
    p -> print2();
    // p -> cry();  报错,父类中没有定义接口

    system("pause");
    return 0;
}