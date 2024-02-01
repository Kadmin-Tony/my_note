#include <iostream>
using namespace std;

enum week { 周日,周一,周二,周三,周四,周五,周六 = 100 };

int main()
{
    week today;
    today = 周二;
    cout << today << endl;

    week w = 周六;
    if(w == 100)
    cout << w << endl;

    system("pause");
    return 0;
}