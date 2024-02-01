#include <iostream>
using namespace std;

// 返回值会当成左值进行使用

int t;

int & set()
{
    return t;
}

int main()
{
    t = 0;
    set() = 100;

    cout << t << endl;

    system("pause");
    return 0;
}
