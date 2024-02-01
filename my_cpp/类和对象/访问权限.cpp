#include <iostream>
using namespace std;

// 公共权限 public      类外可访问
// 保护权限 protected   子类可访问
// 私有权限 private     仅自己可访问
// 默认为私有权限

// 继承:class       子类 : 继承方式 父类
// public           父类权限不改变
// protected        父类public变protected
// private          父类权限都变为private

class Person
{
public:
    string name;
    void show()
    {
        cout << name << endl;
    }
protected:
    int property;
private:
    string password;
};
 
int main()
{
    Person p1;
    p1.name = "Kadmin";
    p1.show();

    system("pause");
    return 0;
}