#include <stdio.h>
#include <stdbool.h>    //用来解决bool，true，flase不兼容

typedef struct LNode
{
    //ElemType data;
    int data;
    struct LNode *next;
}LNode,*LinkList; //LNode = struct LNode, *LinkList = struct LNode *

typedef int ElemType;   //声明ElemType的类型为int

/*按值按位查找*/
LNode * locateItem(LinkList L,ElemType e){
    LNode *p = L->next;
    while(p != NULL && p->data != e){
        p = p->next;
    }
    return p;
}

/*求表长*/
int length(LinkList L){
    int len = 0;
    LNode *p = L;
    while(p->next->data != NULL){
        p = p->next;
        len++;
    }
    return len;
}