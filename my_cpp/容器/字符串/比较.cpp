#include <iostream>
using namespace std;

int main()
{
    string a("hello");
    string b("aello");
    string c("hello");
    string d("zello");

    cout << a.compare(b) << endl;
    cout << a.compare(c) << endl;
    cout << a.compare(d) << endl;

    system("pause");
    return 0;
}