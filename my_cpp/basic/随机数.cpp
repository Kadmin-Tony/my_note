#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand( int(time(nullptr)) );

    for(int i = 0; i < 10; i++)
    cout << rand() << endl;

    system("pause");
    return 0;
}