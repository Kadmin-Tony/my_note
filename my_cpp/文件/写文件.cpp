#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream ofs;
    ofs.open("C:\\Users\\Administrator\\Desktop\\program\\my_cpp\\文件\\123.txt", ios::out);
    // 也可以
    // ofstream ofs("C:\\Users\\Administrator\\Desktop\\program\\my_cpp\\文件\\123.txt", ios::out);
    
    ofs << "hello world" << endl;
    ofs.close();

    system("pause");
    return 0;
}