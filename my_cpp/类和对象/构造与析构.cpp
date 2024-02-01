#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    void introduce()
    {
        cout << name << endl;
    }
    // 构造函数:实例化时调用,可以有参
    Person()
    {
        name = "Kadmin";
        introduce();
    }
    // 析构函数:结束时调用，无参
    ~Person()
    {
        cout << "さようなら" << endl;
    }
};

void test()
{
    Person p1;
    p1.name = "Tony";
    p1.introduce();
}

int main()
{
    test();
    system("pause");
    return 0;
}