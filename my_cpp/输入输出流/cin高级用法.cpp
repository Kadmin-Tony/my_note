#include <iostream>
using namespace std;

int main(int args, char ** argv)
{
    string s;
    cin >> s;
    cout << s << endl;

    // 终端输入 g++ -o 123.exe
    // 123 < cout重定向.txt
    // 等效于reopen("cout重定向.txt", "r", stdin);

    system("pause");
    return 0;
}
