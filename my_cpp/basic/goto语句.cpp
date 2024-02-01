#include <iostream>
using namespace std;

int main()
{
    cout << 1 << endl;

    goto A;

    B:

    cout << 2 << endl;

    system("pause");
    return 0;

    A:

    cout << 3 << endl;

    goto B; 
}