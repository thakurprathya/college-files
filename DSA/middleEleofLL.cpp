//Write a program to calculate middle element of a linked list.
#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct listnode{
    int data;
    struct listnode *next;
}node;

void listTraversal(node *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }cout<<endl;
}
node *createNode(int d){
    node *p= (node *)malloc(sizeof(node));
    p->data= d; p->next=NULL;
    return p;
}
void insertAtEnd(node *head, int d){
    node *p= createNode(d);
    while(head->next!=NULL){ head=head->next; }
    head->next= p;
}
node *middleEle(node *head){
    int totalEle=0;
    node *temp=head;
    while(temp!=NULL){ temp=temp->next; totalEle++; }
    int i=0;
    while(i<totalEle/2){ head=head->next;  i++; }
    return head;
}

int main(){
    node *head= createNode(1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    listTraversal(head);
    cout<<"middle ele of the given list is: "<<middleEle(head)->data<<endl;
    return 0;
}