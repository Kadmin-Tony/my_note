#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// sort(begin, end) 默认升序排序
// sort(begin, end, greater<int>()) // 改为降序

// random_shuffle(begin, end) 打乱顺序

int main()
{
    vector<int>v1;

    for(int i = 0; i < 20; i++){
        v1.push_back(i * 2);
    }

    srand(time(nullptr));
    random_shuffle(v1.begin(), v1.end());

    for(auto a:v1){
        cout << a << endl;
    }

    system("pause");
    return 0;
}