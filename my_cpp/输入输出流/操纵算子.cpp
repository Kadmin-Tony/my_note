#include <iostream>
using namespace std;

// dec 十进制
// hex 十六进制
// oct 八进制
// setbase(n) 设置输出进制 

// fixed 小数(末尾添加0)
// scientific 科学计数法
// setprecision(n) 设置有效数字

// setw(n) 仅打印前n个字符

// boolapha 把true和false输出为字符串

// cout成员函数
// cout.precision(n) == setprecision(n)
// cout.width(n) == setw(n)

int main()
{
    cout << hex << 20 << endl;
    cout << fixed << 19.90 << ", " << 5.1 << endl;

    system("pause");
    return 0;
}