//Segregate Even numbers and Odd numbers from a given linked list (values needed to be checked).
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
void segregateEvenOdd(node **head){
    node *initialEnd = *head, *prevNode = NULL, *current = *head;
    while(initialEnd->next != NULL){ initialEnd= initialEnd->next; }
    node *updatedEnd = initialEnd;
 
    while(current->data%2==0 && current!=initialEnd){ //for even
        updatedEnd->next = current;
        current = current->next;
        updatedEnd->next->next = NULL;
        updatedEnd = updatedEnd->next;
    }
 
    if(current->data%2){ //for first odd
        *head = current; //making it head
        while(current!=initialEnd){ //checking furthur list
            if(current->data%2){ prevNode = current; current = current->next; }
            else{
                prevNode->next = current->next;
                current->next = NULL;
                updatedEnd->next = current;
                updatedEnd = current;
                current = prevNode->next;
            }
        }
    }
    else{ prevNode = current; }

    if(initialEnd->data%2==0 && updatedEnd != initialEnd){ //checking initial last ele
        prevNode->next = initialEnd->next;
        initialEnd->next = NULL;
        updatedEnd->next = initialEnd;
    }
}

int main(){
    node *head= createNode(1);
    head= insertAtEnd(head, 2);
    head= insertAtEnd(head, 3);
    head= insertAtEnd(head, 4);
    head= insertAtEnd(head, 5);
    head= insertAtEnd(head, 6);
    head= insertAtEnd(head, 7);
    head= insertAtEnd(head, 8);

    listTraversal(head);
    segregateEvenOdd(&head);
    listTraversal(head);
    return 0;
}