#include <iostream>
#include <vector>
using namespace std;

void PrintVector(vector<int> t){
    for(vector<int>::iterator it = t.begin(); it < t.end(); it++){
        cout << *it << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    for(int i = 0; i < 10; i++){
        v1.push_back(i);
    }
    PrintVector(v1);

    cout << "删除末尾元素:" << endl;
    v1.pop_back();
    PrintVector(v1);

    cout << "插入:" << endl;
    v1.insert(v1.begin()+2, 100);
    PrintVector(v1);

    cout << "插入多个数据(2个3):" << endl;
    v1.insert(v1.begin(), 2, 3);
    PrintVector(v1);

    cout << "删除:" << endl;
    v1.erase(v1.begin());
    PrintVector(v1);

    cout << "删除多个数据:" << endl;
    v1.erase(v1.begin(), v1.begin()+3);
    PrintVector(v1);

    // 清空
    v1.clear();

    system("pause");
    return 0;
}