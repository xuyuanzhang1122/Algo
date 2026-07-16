#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef int ElemType;

typedef struct DNode{
    ElemType data;
    struct DNode *prior, *next;
}DNode, *DLinkList;

bool InitDLinkList(DLinkList &L){
    L = (DNode *)malloc(sizeof(DNode));
    if(L == NULL){
        return false;
    }
    L->prior = L;
    L->next = L;
}

bool Empty(DLinkList L){
    if(L->next == L){
        return true;
    }
    else{
        return false;
    }
}

bool isTail(DLinkList L, DNode *p){
    if(p->next == L){
        return true;
    }
    else{
        return false;
    }
}

bool InsertNextNode(DNode *p, DNode *s){
    s->next = p->next;
    p->next->prior = s;
    s->prior = p;
    p->next = s;
}

bool DeleteNextNode(DNode *p, DNode *q){
    p->next = q->next;
    q->next->prior = p;
    free(q);
}