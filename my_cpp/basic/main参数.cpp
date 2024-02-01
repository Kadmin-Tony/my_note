#include<iostream>
using namespace std;

// argc : 参数数量 >= 1
// argv : 字符串列表
// 默认有一个参数为可执行文件(.exe文件)地址

int main(int argc, char **argv)
{
    cout << argc << endl;
    for(int i = 0; i < argc; i++){
        cout << argv[i] << endl;
    }
    system("pause");
    return 0;
}