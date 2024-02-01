#include <iostream>
using namespace std;

// 实例对象做值传入函数时，也会调用拷贝函数

class Person
{
public:
    string name;
    Person(string n){name = n;}
    Person(const Person & p) // 将一实例的引用传入，同时防止其被修改
    {
        name = p.name;
    }
};

int main()
{
    Person p1("Kadmin");
    Person p2(p1);
    cout << p2.name << endl;

    system("pause");
    return 0;
}