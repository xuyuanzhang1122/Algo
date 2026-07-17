#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MaxSize 10
typedef int ElemType;
typedef struct{
    ElemType data;
    int next;
}SLinkList[MaxSize];

/*
*上面的代码等同于
struct Node{
    ElemType data;
    int next;
};
typedef struct Node SLinkList[MaxSize];
*/
void TestSLinkList(){
    SLinkList a;    //等同于声明了一个a的数组，大小为MaxSize
    /*struct Node a[MaxSize];*/
    /*后续代码*/
}