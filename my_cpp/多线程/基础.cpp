#include <iostream>
#include <thread>
using namespace std;

void f(int a)
{
    for (int i = 0; i < 10; i++)
        cout << a << endl;
}

int main()
{
    thread t1(f, 1);
    // 同样支持lambda表达式
    thread t2([](int a){for (int i = 0; i < 10; i++)cout << a << endl;}, 2);

    t1.join();
    t2.join();

    system("pause");
    return 0;
}