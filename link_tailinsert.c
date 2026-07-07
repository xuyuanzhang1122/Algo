#include <stdio.h>
#include <stdbool.h>    //用来解决bool，true，flase不兼容

typedef struct LNode
{
    //ElemType data;
    int data;
    struct LNode *next;
}LNode,*LinkList; //LNode = struct LNode, *LinkList = struct LNode *

typedef int ElemType;   //声明ElemType的类型为int

/*尾插法*/
LinkList List_TailInsert(LinkList *L){
    int x;
    L = (LinkList *)malloc(sizeof(LNode));
    LNode *s, *r = L;
    scanf("%s", &x);
    while(x != 9999){
        s = (LinkList *)malloc(sizeof(LNode));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%s", &x);
    }
    r->next = NULL;
    return L;
}