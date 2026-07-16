#include <stdio.h>
#include <stdbool.h>    //用来解决bool，true，flase不兼容

typedef struct DNode
{
    //ElemType data;
    int data;
    struct DNode *next,*prior ;
}DNode,*LinkList; //LNode = struct LNode, *LinkList = struct LNode *

typedef int ElemType;   //声明ElemType的类型为int

/*插入后继节点*/
bool InsertNextNode(DNode *p, DNode *s){
    if(p == NULL && s == NULL){
        return false;
    }
    s->next = p->next;
    if(p->next != NULL){
        p->next->prior = s;
    }
    s->prior = p;
    p->next = s;
    return true;
}
/*删除后继节点*/
bool DeleteNextNode(DNode *p, DNode *q){
    if(p == NULL)   return false;
    DNode *p = p->next;
    if(q == NULL)   retrun false;
    p->next = q->next;
    if(q->next != NULL){
        q->next->prior = p;
    }
    free(q);
    return true;
}
/*销毁L*/