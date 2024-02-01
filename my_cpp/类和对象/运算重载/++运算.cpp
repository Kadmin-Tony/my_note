#include <iostream>
using namespace std;

class MyInt
{
public:
    int num = 0;

    // 前置++
    MyInt & operator++(){
        num++;
        return *this;
    }

    // 后置++(由于返回局部变量，因此不能使用&)
    MyInt operator++(int){
        MyInt mi;
        mi.num = this -> num;
        num++;
        return mi;
    }
};

int main()
{
    MyInt num;
    ((++num)++)++;
    cout << num.num << endl;

    system("pause");
    return 0;
}