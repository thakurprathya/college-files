//Create Circular Linked list, write functions for inserting a node at the end of the list & deleting a node
//from the start
#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct CircularLL{
    int data;
    struct CircularLL *next;
}cllist;

cllist *createNode(int d){
    cllist *node=(cllist*)malloc(sizeof(cllist));
    node->data=d;
    node->next=NULL;
    return node;
}
void traverseList(cllist *head){
    if(head->next==NULL){ cout<<head->data<<endl; }
    else{
        cllist *temp=head;
        cout<<temp->data<<" ";
        temp=temp->next;
        while(temp!=head){
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }
}
void insertAtEnd(cllist *head, int d){
    cllist *node= createNode(d);
    if(head->next==NULL){ head->next=node; node->next=head; }
    else{
        cllist *temp=head;
        while(temp->next!=head){ temp=temp->next; }
        temp->next=node;
        node->next=head;
    }
}
cllist * deleteAtStart(cllist *head){
    if(head->next==NULL){ free(head);  return NULL; }
    else{
        cllist *temp=head, *temp1=head;
        while(temp->next!=head){ temp=temp->next; }
        head=head->next;
        temp->next=head;
        free(temp1);
        return head;
    }
}

int main(){
    cllist *head=createNode(1);
    traverseList(head);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    traverseList(head);
    head=deleteAtStart(head);
    traverseList(head);
    return 0;
}