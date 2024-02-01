#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

    // begin()为第一个元素
    // end()为末尾是空,类似'\0'
    for(deque<int>::iterator it = d.begin(); it != d.end(); it++){
        cout << *it << endl;
    }

    for(int i = 0; i < d.size(); i++){
        cout << d[i] << endl;
    }

    // 第一个元素与最后一个元素
    cout << d.front() << ' ' << d.back() << endl;

    system("pause");
    return 0;
}