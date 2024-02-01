#include <iostream>
using namespace std;

class C
{
public:
    int n1, n2;
};

// 需写在类的外面
// c3 = c1 + c2
C operator+(C &c1, C &c2)
    {
        C c3;
        c3.n1 = c1.n1 + c2.n1;
        c3.n2 = c1.n2 + c2.n2;
        return c3;
    }

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