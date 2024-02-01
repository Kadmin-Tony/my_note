#include <iostream>
using namespace std;

class Person
{
public:
    Person(int a, int b, int c) : p_a(a), p_b(b), p_c(c) {};

    int p_a, p_b, p_c;
};

int main()
{
    Person p(1, 2, 3);
    cout << p.p_b << endl;

    system("pause");
    return 0;
}