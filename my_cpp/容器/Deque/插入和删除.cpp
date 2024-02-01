#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int>d;
    // 插入
    d.push_back(100);
    d.push_front(10);

    for(deque<int>::iterator it = d.begin(); it < d.end(); it++){
        cout << *it << endl;
    }

    // 删除
    d.pop_back();
    d.pop_front();

    system("pause");
    return 0;
}