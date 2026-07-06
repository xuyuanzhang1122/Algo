/**
 * 本文件不引用任何头文件
 * 不涉及可编译
 */
/* 链表节点结构体 */
#include <stdio.h>
typedef struct ListNode {
    int val;               // 节点值
    struct ListNode *next; // 指向下一节点的指针
} LNode;

/* 构造函数 */
LNode *newListNode(int val) {
    LNode *node;
    node = (LNode *) malloc(sizeof(LNode));
    node->val = val;
    node->next = NULL;
    return node;
}


/*插入节点*/
void insert(LNode *n0, LNode *P){
    LNode *n1 = n0 -> next;
    P->next = n1;
    n0->next = P;
}