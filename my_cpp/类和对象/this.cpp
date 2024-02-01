#include <iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        this -> age = age;
    }
    int age;

    // 返回自身引用
    Person& add_age(int num)
    {
        this -> age = this -> age + num;
        return *this;
    }
};

int main()
{
    Person p(20);
    cout << p.age <<endl;

    //将返回的引用再次调用函数
    p.add_age(10).add_age(20);
    cout << p.age <<endl;

    system("pause");
    return 0;
}