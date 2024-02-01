#include <iostream>
using namespace std;

int main()
{
    string a("hello, world");

    int pos_of_e = a.find('e');                     // 返回下标，从1开始
    int pos_of_a = a.find('a');                     // 没有则返回-1
    int pos_of_l_began_from_5 = a.find('l', 5);     // 从某一位开始找
    int pos_of_last_o = a.rfind('o');               // 从右开始

    cout << pos_of_a << endl;
    cout << pos_of_e << endl;
    cout << pos_of_l_began_from_5 << endl;
    cout << pos_of_last_o << endl;

    system("pause");
    return 0;
}