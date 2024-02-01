#include <iostream>
using namespace std;

template <class T>
void my_swap(T & a, T & b)
{
    T c;
    c = a, a = b, b = c;
}

int main()
{
    int a = 10, b = 20;
    my_swap(a, b);
    cout << a << endl << b << endl;

    system("pause");
    return 0;
}