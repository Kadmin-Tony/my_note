#include <iostream>
using namespace std;

int main()
{
    string a("hello, world");
    string b = a.substr(1, 3);  // 返回a[1]到a[3] 

    cout << b << endl;    

    system("pause");
    return 0;
}