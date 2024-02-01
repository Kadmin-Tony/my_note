#include <iostream>
#include <queue>
using namespace std;

// 特性: 先进先出

int main()
{
    queue<int>q;

    for(int i = 0; i < 10; i++){
        q.push(i * 2);
    }

    while(! q.empty()){
        cout << "队列的头元素: " << q.front() << endl;
        cout << "队列的尾元素: " << q.back() << endl;
        q.pop();
    }

    system("pause");
    return 0;
}