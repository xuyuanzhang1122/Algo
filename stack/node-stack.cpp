#include <stdio.h>
#include <stdbool.h>    //用来解决bool，true，flase不兼容
#include <stdlib.h> //引入free

//初始化结构体
typedef int ElemType;
typedef struct LinkNode{
    ElemType date;
    struct LinkNode *next;
} *LiStack;

