#include <iostream>
using namespace std;

int main()
{
    // 用new在内存中创建一片空间
    int *p = new int(10);
    cout << *p << endl;
    // 使用delete进行删除
    delete p;
    cout << *p << endl;

    cout << "\n***** 以下为数组 *****\n" << endl;

    //创建数组
    int *a = new int[10];
    for(int i=0; i<10; i++){
        a[i] = (i + 5) * i;
    }
    for(int i=0; i<10; i++){
        cout << a[i] << endl;
    }
    // 删除数组
    cout << "\n***** 删除数组 *****\n" << endl;
    delete a;
    for(int i=0; i<10; i++){
        cout << a[i] << endl;
    }


    system("pause");
    return 0;
}
