#include <iostream>
using namespace std;

int main()
{
    // 字符串
    string c = "123.321";
    // 布尔
    bool d = true;
    // 数据转换
    int e = int(d);
    float f = atof(c);

    int a[10] = {2, 3, 3, 56, 1, 6, 1, 67, 23, 453};
    for(int i : a){
        cout << i << ' ';
    }

    cout << endl;

    system("pause");
    return 0;
}