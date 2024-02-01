#include <iostream>
using namespace std;

struct Student{
        string name;
        int age;
        int score;
}s;

// struct 可省略
// 加入const后不可修改其内容
void print(const Student *s)
{
    cout << s->name << s->age << s->score << endl;
}

int main()
{
    
    s.name = "Tony";
    s.age = 18;
    s.score = 90;

    print(&s);


    system("pause");
    return 0;
}