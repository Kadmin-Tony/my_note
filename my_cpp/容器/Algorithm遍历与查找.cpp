#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    // find(begin, end, value)查找元素,返回迭代器(仅返回第一个),如果没有查到则返回end()
    // 如果是自定义数据类型，则需重载==符号

    // find_if(begin, end, MyCompare())  返回迭代器(仅返回第一个)
    // MyCompare 是函数对象 或lambda

    // count(begin, end, value) 返回数据的个数
    // 如果是自定义数据类型，则需重载==符号

    // count_if(begin, end, MyCompare())  返回满足要求的数据的个数
    // MyCompare 是函数对象 或lambda

    // adjacent_find(begin, end)  查找相邻重复元素并返回第一个的迭代器

    // binary_search(begin, end, value) 二分法查找元素, 返回bool, 必须是有序数列

int main()
{
    vector<int>v1;
    for(int i = 0; i < 10; i++){
        v1.push_back(i * 2);
    }

    // for_each(begin, end, func)读取地址之间的数据
    for_each(v1.begin(), v1.end(), [](int i){cout << i << ' ';}); 

    system("pause");
    return 0;
}