#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // begin()为第一个元素
    // end()为末尾是空,类似'\0'
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    // 第一个元素与最后一个元素
    cout << v.front() << ' ' << v.back() << endl;

    system("pause");
    return 0;
}