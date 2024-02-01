#include <iostream>
using namespace std;

template <class Name, class Age>
class Person
{
public:
    Person(Name name, Age age){
        this -> name = name;
        this -> age = age;
    }
    Name name;
    Age age;
};

int main()
{
    Person<string, int> p("Kadmin", 19);

    cout << p.name << endl << p.age << endl;

    system("pause");
    return 0;
}