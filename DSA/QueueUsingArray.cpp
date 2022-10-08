#include<iostream>
#include<stdlib.h>

typedef struct queue{
    int queuesize, front, rear;
    int *arr;
}queue;

int isempty(queue *q){
    if(q->front==q->rear){return 1;}
    else{return 0;}}
int isfull(queue *q){
    if(q->rear==q->queuesize-1){return 1;}
    else{return 0;}}
void enqueue(queue *q, int value){
    if(isfull(q)){printf("\nqueue overflow\n");  }
    else{q->rear++;   q->arr[q->rear]=value;  printf("\nelement enqueued in queue is %d\n",value);}
}
int dequeue(queue *q){
    if(isempty(q)){printf("\nqueue underflow\n");  }
    else{q->front++;  printf("\nelement dequeued from the queue is %d\n",q->arr[q->front]);  return q->arr[q->front];}
}
void queuetraversal(queue *q){
    q->front++;
    printf("\nqueue is;\t");
    while(q->front!=q->rear+1){printf("%d\t",q->arr[q->front]);  q->front++;}
    q->front=-1;
}

int main(){
    queue *q1=(queue *)malloc(sizeof(queue));
    q1->queuesize=5;  q1->front=-1;  q1->rear=-1;
    q1->arr=(int *)malloc(q1->queuesize*sizeof(int));

    enqueue(q1,1);
    enqueue(q1,2);
    enqueue(q1,3);
    queuetraversal(q1);
    dequeue(q1);
    queuetraversal(q1);
    return 0;
