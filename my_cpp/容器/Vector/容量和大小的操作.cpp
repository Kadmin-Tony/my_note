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

    // 判断是否为空
    if(v1.empty()){
        cout << "emepty" << endl;
    }else{
        cout << "not emepyt" << endl;
    }

    cout << "容量:" << v1.capacity() << endl;
    cout << "大小:" << v1.size() << endl;

    // 重新指定大小,用99进行填充,默认为0
    v1.resize(17, 99);
    PrintVector(v1);
    cout << "容量:" << v1.capacity() << endl;

    v1.resize(7);
    PrintVector(v1);
    cout << "容量:" << v1.capacity() << endl;

    system("pause");
    return 0;
}