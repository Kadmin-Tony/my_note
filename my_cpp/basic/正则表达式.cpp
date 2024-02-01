#include <iostream>
#include <regex>
using namespace std;

// regex_match(str, reg) 判断字符串是否符合
// s = regex_replace(str, reg, "***") 返回替换后的字符串

int main()
{
    string str0 = "I love you, you love me, 1234567";
    regex reg("l.*\\d?");
    if(regex_match(str0, regex("I.*\\d"))){                 
        string str1 = regex_replace(str0, reg, "f**k");
        cout << str1 << endl;
    }

    smatch s;
    regex_search(str0, s, reg);
    cout << s[0] << endl;

    system("pause");
    return 0;
}