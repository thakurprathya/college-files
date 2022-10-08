#include<iostream>
#include<stdlib.h> 

typedef struct node{
    int data;
    struct node *next;
}node;

node *front=NULL;
node *rear=NULL;

int isempty(node *n){
    if(front==NULL){printf("Queue underflow!!\n");  return 1;}
    else{return 0;}
}
int isfull(node *n){
    node *n1=(node *)malloc(sizeof(node));
    if(n1==NULL){printf("Queue overflow!!\n");  return 1;}
    else{return 0;}
}
void enqueue(int value){
    node *n=(node *)malloc(sizeof(node));
    if(isfull(n)){}
    else{
        n->data=value;  n->next=NULL;
        if(isempty(n)){front=rear=n;} //handeling exception case when both front rear are NULL i.e empty queue
        else{rear->next=n;  rear=n;}
        printf("element %d enqueued in the queue\n",value);
    }
}
int dequeue(){
    int removed_element=-1;
    node *n=front;
    if(isempty(n)){}
    else{
        front=front->next;   removed_element=n->data;   free(n);
        printf("element %d dequeued from the queue\n",removed_element);
        return removed_element;
    }
}
void queue_traversal(node *n){
    if(isempty(n)){}
    else{
        printf("\nqueue is;\t");
        while(n!=NULL){  printf("%d\t",n->data);  n=n->next;}
    }printf("\n");
}

int main(){
    queue_traversal(front);
    enqueue(33);
    enqueue(5);
    enqueue(1);
    queue_traversal(front);
    dequeue();
    dequeue();
    queue_traversal(front);
    dequeue();
    dequeue();
    return 0;
}