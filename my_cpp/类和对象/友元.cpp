#include <iostream>
using namespace std;

class Person
{
// 使外部函数可以调用私有属性
// 除了函数，类也可以作为友元
friend void print(Person p);

public:
    Person(int n)
    {
        this -> a = n;
    }
private:
    int a;
};

void print(Person p)
{
    cout << p.a << endl;
}

int main()
{
    Person p(3);
    print(p);

    system("pause");
    return 0;
}