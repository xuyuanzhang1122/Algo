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
    L = (LNode *)malloc(sizeof(LNode)); //申请新内存
    if(L == NULL){
        return false;   //代码健壮性
    }
    L->next = L;    //让链表的尾指针指向表头
    return true;
}
/*判断链表是否为空*/
bool Empty(LinkList L){
    if(L->next == L){   //如果尾指针指向表头
        return true;
    }else{
        return false;
    }
}
/*判断P节点下一个节点是否为尾节点*/
bool isTail(LinkList L, LNode *p){
    if(p->next == L){   //如果P（当前）指针指向表头
        return true;
    }
    else{
        return false;
    }
}
