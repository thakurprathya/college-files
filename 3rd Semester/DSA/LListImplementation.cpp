#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void listTraversal(struct node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }cout<<endl;
}
struct node* createNode(int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data; ptr->next=NULL;
    return ptr;
}

//Insertion
struct node *insertAtStart(struct node *head, int data){
    struct node *ptr= createNode(data);
    ptr->next=head;
    head=ptr;
    return ptr;
}
struct node *insertAtEnd(struct node *head, int data){
    struct node *ptr= createNode(data);
    struct node *p=head;
    while(p->next!=NULL){p=p->next;}
    p->next=ptr;
    return head;
}
struct node* insertAfterNode(struct node *head, int data, int dataPrevNode){ //cannot insert at start or end
    struct node *ptr= createNode(data);
    struct node *prevnode= head;
    while(prevnode->data != dataPrevNode){ prevnode=prevnode->next; }
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head; 
}

//Deletion
struct node *deleteAtStart(struct node *head){
    struct node *ptr= head;
    head=head->next;
    free(ptr);
    return head;
}
struct node *deleteAtEnd(struct node *head){
    struct node *p=head, *q=head->next;
    while(q->next!=NULL){p=p->next;  q=q->next;}
    p->next=NULL;  free(q);
    return head;
}
struct node *deleteParticularNode(struct node *head, int value){
    struct node *p=head, *q=head->next;
    while(q->data!=value && q->next!=NULL){p=p->next;  q=q->next;}
    if(q->data==value){ p->next=q->next;  free(q); }
    return head;
}

int main(){
    struct node* head= createNode(1);
    head= insertAtStart(head, 2);
    listTraversal(head);
    head= insertAtEnd(head, 3);
    listTraversal(head);
    head= insertAfterNode(head, 4, 1);
    listTraversal(head);

    head= deleteParticularNode(head, 4);
    listTraversal(head);
    head= deleteAtStart(head);
    listTraversal(head);
    head= deleteAtEnd(head);
    listTraversal(head);
    return 0;
}