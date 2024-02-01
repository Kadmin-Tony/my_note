#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex m;

void f(int & a)
{
    for (int i = 0; i < 10000; i++) 
    {
        m.lock();
        a++;
        m.unlock();
    }
}

int main()
{
    int a = 0;
    // ref 用于传递引用类型变量
    thread t1(f, ref(a));
    thread t2(f, ref(a));

    t1.join();
    t2.join();

    cout << a << endl;

    system("pause");
    return 0;
}