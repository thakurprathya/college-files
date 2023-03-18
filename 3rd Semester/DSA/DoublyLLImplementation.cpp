#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct doublylinkedlistnode{
    int data;
    struct doublylinkedlistnode *prev,*next;
}doublyll;
void listTraversal(doublyll *head){
   doublyll *p=head, *q=head;
    printf("List is; ");
    while(p->next!=NULL){cout<<p->data<<" ";  p=p->next;  q=q->next;}  
    cout<<p->data<<endl;
    printf("List in reverse order is; ");
    while(q!=NULL){cout<<q->data<<" ";  q=q->prev;}
    cout<<endl<<endl;
}
doublyll* createNode(int data){
    doublyll *ptr=(doublyll *)malloc(sizeof(doublyll));
    ptr->data=data; ptr->next=NULL; ptr->prev=NULL;
    return ptr;
}
//Insertion
doublyll *insertAtStart(doublyll *head, int data){
    doublyll *ptr= createNode(data);
    ptr->next=head;  head->prev=ptr;
    head=ptr;
    return ptr;
}
doublyll *insertAtEnd(doublyll *head, int data){
    doublyll *ptr= createNode(data);
    doublyll *p=head;
    while(p->next!=NULL){p=p->next;}
    p->next=ptr;  ptr->prev=p;
    return head;
}
doublyll* insertAfterNode(doublyll *head, int data, int dataPrevNode){ //cannot insert at start or end
    doublyll *ptr= createNode(data);
    doublyll *prevnode= head;
    while(prevnode->data != dataPrevNode){ prevnode=prevnode->next; }
    ptr->next=prevnode->next;
    prevnode->next->prev= ptr;
    prevnode->next=ptr;
    ptr->prev= prevnode;
    return head; 
}
//Deletion
doublyll *deleteAtStart(doublyll *head){
    doublyll *ptr= head;
    head=head->next;
    head->prev=NULL;
    free(ptr);
    return head;
}
doublyll *deleteAtEnd(doublyll *head){
    doublyll *p=head, *q=head->next;
    while(q->next!=NULL){p=p->next;  q=q->next;}
    p->next=NULL;  free(q);
    return head;
}
doublyll *deleteParticularNode(doublyll *head, int value){
    doublyll *p=head, *q=head->next;
    while(q->data!=value && q->next!=NULL){p=p->next;  q=q->next;}
    if(q->data==value){ p->next=q->next; q->next->prev=p; free(q); }
    return head;
}

int main(){
    doublyll* head= createNode(1);
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