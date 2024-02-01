#include <iostream>
#include <list>
using namespace std;

// list是链表
// empty,size,resize
// push_back,push_front
// pop_back,pop_front
// insert(pos, elem) 插入
// clear() 清空
// erase(beg, end) 移除区间
// erase(pos) 移除相应位置
// remove(elem) 移除匹配的元素
// unique() 删除所有和前一个元素相等的元素
// merge(list2) 合并两个链表
// reverse() 反转链表
// sort(f) 排序，默认升序，可传入函数（两个值，返回false则交换）

int main()
{
    list<int> l;
    l.push_back(12);
    l.push_back(13);
    l.push_back(15);

    list<int>::iterator it = l.begin();
    cout << *it << endl;

    system("pause");
    return 0;
}