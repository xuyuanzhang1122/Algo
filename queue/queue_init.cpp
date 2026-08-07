#include <stdio.h>
#include <stdbool.h>    
#include <stdlib.h> 

#define Maxsize 10
typedef int Elemtype;
typedef struct {
    Elemtype data[Maxsize]; //这一片内存大小为 Maxsize*sizeof(Elemtpye)
    int front, rear;
}SqQueue;

/*
*队列的性质：
FIFO(First in First Out)先进先出原则
*/
void InitQueue(SqQueue &Q){
    /*
    *初始化队列
    */
    Q.rear = Q.front = 0;
}
