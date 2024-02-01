#include <iostream>
#include <stack>
using namespace std;

// 特性: 先进后出

int main()
{
    stack<int>s;

    s.push(1);
    s.push(2);
    s.push(3);

    while(! s.empty()){
        cout << "栈顶元素: " << s.top() << endl;
        cout << "栈的大小: " << s.size() << endl;
        s.pop();
    }

    system("pause");
    return 0;
}