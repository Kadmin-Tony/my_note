#include <iostream>
#include <fstream>
using namespace std;

void f1(ifstream & ifs, string s)
{
    // 类似于cin>>写入，fin >> s遇到EOF（end of file）会返回false，跳出while循环
    // 遇空格会换行
    while(ifs >> s){
        cout << s << endl;
    }
}

void f2(ifstream & ifs, string s)
{
    #include <string>
    while( getline(ifs, s) ){
        cout << s << endl;
    }
}

int main()
{
    ifstream ifs;
    ifs.open("C:\\Users\\Administrator\\Desktop\\program\\my_cpp\\文件\\参数.txt", ios::in);
    if( ! ifs.is_open() ){
        cout << "文件打开失败" << endl;
    }else{
        string s;
        f2(ifs, s);
    }

    ifs.close();

    system("pause");
    return 0;
}