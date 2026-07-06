#include <stdio.h>
#include <stdbool.h>    //用来解决bool，true，flase不兼容

typedef struct LNode
{
    //ElemType data;
    int data;
    struct LNode *next;
}LNode,*LinkList; //LNode = struct LNode, *LinkList = struct LNode *

typedef int ElemType;   //声明ElemType的类型为int

/*按序插入节点，没有头节点*/
bool ListInsert(LinkList *L, int i, ElemType e){
    if(i < 1){ 
        return false;
    }
    if(i == 1){
        LNode *s = (LNode *)malloc(sizeof(LNode));
        s->data = e;
        s->next = L;
        L = s;
        return true;
    }
    LNode *p;   //指针P指向当前的节点
    int j = 1;  //于有头节点不一样的另一处
    p = L;  //让指针P指向头结点L
    while(p != NULL && j < i - 1){  //当P不为空值且当J满足节点前一个时
        p = p->next;    //p向前移动，j增加，循环到不满足条件也就是i - 1时
        j++;
    }
    if(p == NULL){
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode));  //用malloc申请出一块LNode大小的新内存
    s->data = e;    //先给新内存写值e
    s->next = p->next;  //让S的下一个节点先指向P原来的下一个节点
    p->next = s;    //在让P本身指向S
    return true;
}