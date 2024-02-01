#include <iostream>
using namespace std;

int main(int args, char ** argv)
{
    // ignore跳过前5个字符或直接读取'A'后面的字符(取决于谁先被满足)
    cin.ignore(5, 'A');
    string s;
    cin >> s;
    cout << s << endl;

    system("pause");

    int c;
    freopen("C:\\Users\\Administrator\\Desktop\\program\\my_cpp\\输入输出流\\cout重定向.txt", "r", stdin);
    // cin.get() 获取一个字符
    while((c = cin.get()) != EOF){
        cout.put(c);
    }
    cout << endl;

    system("pause");
    return 0;
}