#include <iostream>
using namespace std;

int main()
{
    char a[] = "123";
    int b;

    // 遇到空格或换行结束
    cin >> a >> b;

    cout << "this is a: " << a << endl;
    cout << "this is b: " << b << endl;

    system("pause");
    return 0;
}