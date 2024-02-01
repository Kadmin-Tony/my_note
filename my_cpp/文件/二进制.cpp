#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("C:\\Users\\Administrator\\Desktop\\唯美图片\\00028.png", ios::binary | ios::in);

    // 改变光标位置，0是偏移量off，即移动到end+off的位置
    ifs.seekg(0, ifs.end);
    // 获取光标的位置，返回整型
    int length = ifs.tellg();
    // 将光标的位置变回开头
    ifs.seekg(0, ifs.beg);

    // 不能使用char c[length] 数字太大会报错
    char * c = new char[length];

    ifs.read(c, length);
    ifs.close();

    ofstream ofs;
    ofs.open("C:\\Users\\Administrator\\Desktop\\program\\my_cpp\\文件\\1.png", ios::binary | ios::out);
    // 不能使用sizeof(c),因为此时c是指针而不是纯数组
    ofs.write(c, length);
    ofs.close();

    delete [] c;

    system("pause");
    return 0;
}