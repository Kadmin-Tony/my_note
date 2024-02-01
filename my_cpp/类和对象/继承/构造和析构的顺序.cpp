#include <iostream>
using namespace std;

class Base
{
public:
    Base(){
        cout << "现在调用Base构造函数" << endl;
    }

    ~Base(){
        cout << "现在调用Base析构函数" << endl;
    }
};

class Son : public Base
{
public:
    Son(){
        cout << "现在调用Son构造函数" << endl;
    }

    ~Son(){
        cout << "现在调用Son析构函数" << endl;
    }
};

void f()
{
    Son s;
}

int main()
{
    f();

    system("pause");
    return 0;
}