#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode
{
    ElemType data;
    struct LNode *next;
}LNode, *LinkList;
/*初始化链表*/
bool InitList(LinkList &L){
    L = (LNode *)malloc(sizeof(LNode));
    if(L == NULL){
        return false;
    }
    L->next = L;
    return true;
}
/*判断链表是否为空*/
bool Empty(LinkList L){
    if(L->next == L){
        return true;
    }else{
        return false;
    }
}