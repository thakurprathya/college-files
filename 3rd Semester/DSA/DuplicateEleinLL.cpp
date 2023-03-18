//Identify Duplicate elements in a linked list.
#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct node{
    int data;
    struct node *next;
}node;

void listTraversal(node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }cout<<endl;
}
node* createNode(int data){
    node *ptr=(node *)malloc(sizeof(node));
    ptr->data=data; ptr->next=NULL;
    return ptr;
}
node *insertAtEnd(node *head, int data){
    struct node *ptr= createNode(data);
    struct node *p=head;
    while(p->next!=NULL){p=p->next;}
    p->next=ptr;
    return head;
}
void DuplicateEle(node *head){
    cout<<"Elemets occuring more than once in the list are: ";
    node *ptr1=head, *ptr2=head;
    while(ptr1->next!=NULL){
        ptr2=ptr1->next;
        while(ptr2!=NULL){
            if(ptr1->data==ptr2->data){ cout<<ptr1->data<<" "; }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
    cout<<endl;
}

int main(){
    node *head= createNode(1);
    head= insertAtEnd(head, 2);
    head= insertAtEnd(head, 3);
    head= insertAtEnd(head, 4);
    head= insertAtEnd(head, 2);
    head= insertAtEnd(head, 4);
    head= insertAtEnd(head, 1);
    head= insertAtEnd(head, 8);

    listTraversal(head);
    DuplicateEle(head);
    return 0;
}