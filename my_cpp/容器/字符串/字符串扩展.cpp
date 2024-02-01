#include <iostream>
using namespace std;

int main()
{
    string a("hello");
    a += ",";
    a.append("world");

    cout << a << endl;

    system("pause");
    return 0;
}

