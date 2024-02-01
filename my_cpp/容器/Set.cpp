#include <iostream>
#include <set>
using namespace std;

// 集合，可去重，排序
// 二叉树实现

// insert 插入
// 使用interator遍历
// size() 返回容器大小
// empty() 判断是否为空
// erase() 删除某元素，使用数值或迭代器
// find(elem) 查找元素，返回该元素的迭代器或set.end()
// count(elem) 统计个数(对于set只有0、1)

// 排序(必须在插入之前)
// 需使用函数对象(仿函数)(重载())
// 需要两个值，返回false则调换 例如return s1 > s2; 从大到小排序
// 使用set<int,MyCompare>进行创建

// pair返回值
// insert会返回pair<set<int>::iterator, bool>的值
// pair<set<int>::iterator, bool> s = set.insert(elem);
// 可使用s.second判断是否插入成功
// 插入重复数据即会失败

// set容器中还有一个multiset的类
// multiset可重复插入

int main()
{}