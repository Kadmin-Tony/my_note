#include <iostream>
using namespace std;

int main()
{
    string a("hello, world");

    a.replace(7,2,"C++"); // 从7开始将2个字符替换为C++
    cout << a << endl;

    a.erase(7, 3);
    cout << a << endl;

    a.insert(7, "wo");
    cout << a << endl;

    system("pause");
    return 0;
}