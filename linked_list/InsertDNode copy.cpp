#include <stdio.h>
#include <stdbool.h>    //用来解决bool，true，flase不兼容
#include <stdlib.h> //引入free

typedef struct DNode
{
    //ElemType data;
    int data;
    struct DNode *next,*prior ;
}DNode,*DLinkList; //LNode = struct LNode, *LinkList = struct LNode *

typedef int ElemType;   //声明ElemType的类型为int

/*插入后继节点*/
bool InsertNextNode(DNode *p, DNode *s){
    if (p == NULL || s == NULL){
        return false;
    }
    s->next = p->next;
    if (p->next != NULL){
        p->next->prior = s;
    }
    s->prior = p;
    p->next = s;
    return true;
}
/*删除后继节点*/
bool DeleteNextNode(DNode *p){
    DNode *q = p->next; //目的是为了找到也就是确认p的后继节点是q
    if (p == NULL || q == NULL){
        return false;
    }
    p->next = q->next;
    if (q->next != NULL){
        q->next->prior = p;
    }
    free(q);
    return true;
}

/*销毁L*/
void DestoryList(DLinkList &L){
    //循环释放掉L的节点
    while(L->next != NULL){
        DeleteNextNode(L);
    }
    free(L);
    L == NULL;
}