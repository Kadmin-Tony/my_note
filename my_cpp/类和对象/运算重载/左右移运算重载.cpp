#include <iostream>
using namespace std;

class C
{
public:
    string name;
};

// 需要返回cout的引用以追加<<
// os的值为 ostream::cout
ostream & operator<<(ostream & os, C &c)
{
    os << c.name;
    return os;
}

istream & operator>>(istream & is, C & c)
{
    string s;
    is >> s;
    c.name = s;

    return is;
}

int main()
{
    C c1;
    cin >> c1;
    cout << c1 << endl;

    system("pause");
    return 0;
}