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
bool QueueEmpty(SqQueue Q){
    /*
    *判断队列是否为空
    */
    if (Q.front == Q.rear)  return true;
    else return false;
}
//插入元素
bool EnQueue(SqQueue &Q, Elemtype x){
    if ((Q.rear + 1) % Maxsize == Q.front){ //通过判断下一个指针如果是Q.front，说明队列已满
        return false;
    }
    Q.data[Q.rear] = x; //目前理解的意思为将 x 这个值存放到数组Q.data中下标为Q.rear的位置
    Q.rear = (Q.rear + 1) % Maxsize;
    return true;
}

//出队操作
bool DeQueue(SqQueue &Q, Elemtype x){
    if (Q.rear == Q.front)  return false;
    x = Q.data[Q.front];
    Q.front = (Q.front + 1) % Maxsize;
    return true;
}

//获取对头元素的值，用x返回
bool GetHead(SqQueue Q, Elemtype x){
    if (Q.front == Q.rear) return false;
    x = Q.data[Q.front];
    return true;
}