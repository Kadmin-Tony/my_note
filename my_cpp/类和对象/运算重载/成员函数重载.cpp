#include <iostream>
using namespace std;
// 还有operator== != < > () 等方法

class C
{
public:
    // c3 = c1.operator+(c2)
    C operator+(C &c)
    {
        C c1;
        c1.n1 = this -> n1 + c.n1;
        c1.n2 = this -> n2 + c.n2;
        return c1;
    }
    int n1, n2;
};

int main()
{
    C c1, c2;
    c1.n1 = 1, c1.n2 = 2, c2.n1 = 3, c2.n2 = 4;
    // c3 = c1.operator+(c2)
    C c3 = c1 + c2;

    cout << c3.n1 << endl;
    cout << c3.n2 << endl;

    system("pause");
    return 0;
}