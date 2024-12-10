#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 10

struct CQueue
{
    int rear;
    int front;
    int ITEM[MAXQUEUE];
};
struct CQueue CQ;

void Intialise()
{
    CQ.front=MAXQUEUE-1;
    CQ.rear=MAXQUEUE-1;
}

int IsEmpty()
{
    if(CQ.rear==CQ.front) return 1;
    else return 0;
}

void EnQueue(int x)
{
    if((CQ.rear+1)%MAXQUEUE==CQ.front)
    {
        printf("overflow");
        exit(1);
    }
    else
    {
        CQ.rear=(CQ.rear+1)%MAXQUEUE;
        CQ.ITEM[CQ.rear]=x;
    }
}

int DeQueue()
{
    if(IsEmpty()){
      printf("underflow");
      exit(1);  
    }
    else{
        CQ.front=(CQ.front+1)%MAXQUEUE;
        int x=CQ.ITEM[CQ.front];
       
        return x;
    }
}

void main()
{
    Intialise();
    EnQueue(5);
    EnQueue(7);
    EnQueue(1);
    EnQueue(8);
    for(int i=0;i<10;i++)
    {
        printf("%d\n",DeQueue());
    }

}
//
