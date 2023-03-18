//Write a program to reverse a doubly Linked list.
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
void insertAtEnd(doublyll *head, int data){
    doublyll *ptr= createNode(data);
    while(head->next!=NULL){head=head->next;}
    head->next=ptr;  ptr->prev=head;
}
doublyll *reverseDoublyLL(doublyll *head){
    doublyll *temp= NULL, *current=head;
    while(current!=NULL){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if(temp!=NULL){ head= temp->prev; }
    return temp->prev;
}

int main(){
    doublyll* head= createNode(1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    listTraversal(head);
    
    head=reverseDoublyLL(head);
    listTraversal(head);
    return 0;
}