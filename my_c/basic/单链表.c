#include<stdio.h>
#include <stdlib.h>
#include <string.h>

// 创建
struct NodeList{
    int data;
    struct NodeList * next;
};

// 在节点1与节点2间添加新节点
void insert_new_node(struct NodeList *HeadNode, int data)
{   
    // 创建结构体指针并为其分配内存
    struct NodeList * Next = malloc(sizeof(struct NodeList));
    // 如果结构体指针在未分配空间的情况下进行赋值，则会报错
    Next->data = data;

    // 新节点又指向原节点2
    Next->next = HeadNode->next;
    // 节点1又指向新节点
    HeadNode->next = Next;
}


void print_list(struct NodeList *List)
{   
    List = List->next;
    while(List){
        printf("%d\n", List->data);
        List = List->next;
    }
}


int main()
{
    struct NodeList HeadNode;
    HeadNode.next = NULL;

    insert_new_node(&HeadNode, 1);
    insert_new_node(&HeadNode, 2);
    insert_new_node(&HeadNode, 3);
    insert_new_node(&HeadNode, 4);
    
    print_list(&HeadNode);

    system("pause");
    return 0;
}


