#include <iostream>
using namespace std;

int main()
{
    cout << "out" << endl;  // 只有cout可以重定向
    cerr << "err" << endl;
    clog << "log" << endl;

    freopen("C:\\Users\\Administrator\\Desktop\\program\\my_cpp\\输入输出流\\cout重定向.txt", "w", stdout);
    cout << 123.0/321 << endl;

    // 重定向cin
    freopen("C:\\Users\\Administrator\\Desktop\\program\\my_cpp\\输入输出流\\cout重定向.txt", "r", stdin);
    char s[20];
    cin >> s;

    cout << atof(s) + 300 << endl;
    cout << "hello, world" << endl;

    return 0;
}