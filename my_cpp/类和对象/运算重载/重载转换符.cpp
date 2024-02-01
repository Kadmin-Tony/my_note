#include <iostream>
using namespace std;

// 强制转换符只能重载为成员函数
// 无需指定返回类型，因为是确定的

class Complex
{
public:
    float real, imag;
    Complex(float a, float b) : real(a), imag(b){};
    operator float(){
        return real;
    }
};

int main()
{
    Complex c1(1.1, 2.2);

    cout << float(c1) << endl;

    system("pause");
    return 0;
}