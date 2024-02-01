#include <iostream>
using namespace std;

// 对组:成对的数据
// 无需include

int main()
{
    pair<string, int>p("hello world", 10);
    pair<string, int>p2 = make_pair("hello", 2);
    
    p.first;
    p.second;
}