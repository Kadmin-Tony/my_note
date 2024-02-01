#include <iostream>
using namespace std;

int main(int args, char ** argv)
{
    int a; string b;
    // 读取一个字符但不会将该字符从流中取走
    a = cin.peek();
    cin >> b;
    cout.put(a);
    cout << endl << "b: " << b << endl;

    freopen("C:\\Users\\Administrator\\Desktop\\program\\my_cpp\\输入输出流\\cout重定向.txt", "r", stdin);
    char s[10];
    // 读取到\n或前4个字符
    cin.getline(s, 5);
    cout << s << endl;

    system("pause");
    return 0;
}