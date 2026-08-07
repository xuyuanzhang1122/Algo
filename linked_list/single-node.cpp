#include <stdio.h>
#include <stdbool.h>    //用来解决bool，true，flase不兼容
#include <stdlib.h> //引入free

typedef struct LNode
{
    //ElemType data;
    int data;
    struct LNode *next;
}LNode,*LinkList; //LNode = struct LNode, *LinkList = struct LNode *

typedef int ElemType;   //声明ElemType的类型为int

//头插法建立单链表
bool InsertNextNode(LNode *p, ElemType e){
    if (p == NULL){
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}
