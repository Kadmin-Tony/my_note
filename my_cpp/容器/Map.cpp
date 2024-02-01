#include <iostream>
#include <map>

// 所有元素都是pair
// pair中的第一个元素为key第二个为value
// 其中key不能重复

// m.size() 大小
// m.empty() 判断是否为空
// m.swap(m2) 交换

// 插入: 
//      map<int, int> m;
//      m.insert(pair<int, int>(1, 10));
//      m.insert(make_pair(2, 20));
//      m.insert(map<int, int>::value_type(3, 30))
//      m[3] = 30;

// 读取:
// 使用迭代器即可，默认按key排序
// 可使用函数对象排序 map<int, int, MyCompare>m; 同set
//      m.find(key) 返回一个迭代器,如果没找到,返回m.end()
//      m.count(key) 查找key的数量,只有0或1

// 删除:
//      m.erase(m.begin());
//      m.erase(key);
//      m.erase(m.begin(), m.end());

// 清空:
//      m.clear()