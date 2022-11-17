//assessment Question 2
//from a given linked list Delete nodes which have a greater value on right side
#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct Listnode{
    int data;
    struct Listnode *next;
}node;

void listTraversal(node *ptr){
    cout<<"List is: ";
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }cout<<endl;
}
node* createNode(int data){
    node *ptr = (node *)malloc(sizeof(node));
    ptr->data=data; ptr->next=NULL;
    return ptr;
}
node *insertAtEnd(node *head, int data){
    node *ptr= createNode(data);
    if(head != NULL){
        node *p=head;
        while(p->next != NULL){ p=p->next; }
        p->next=ptr;
    }
    else{ head=ptr; }
    return head;
}
node *reverseList(node *list){
    node *curr = list;
    node *prev = NULL, *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    list = prev;
    return list;
}
node *removeGreaterEle(node *list){
    list= reverseList(list);
    node *curr=list, *max=list, *temp;
  
    while(curr->next != NULL) {
        if(curr->next->data < max->data){
            temp = curr->next;
            curr->next = temp->next;
            free(temp);
        }
        else{ curr = curr->next; max = curr; }
    }
    list= reverseList(list);
    return list;
}

int main(){
    node *head= NULL;
    int n; cout<<"Enter the no. of elements you want to enter: "; cin>>n;
    for(int i=0; i<n; i++){
        int a; cout<<"enter ele to append in list: ";  cin>>a;
        head= insertAtEnd(head, a);
    }
    
    listTraversal(head);
    head= removeGreaterEle(head);
    listTraversal(head);

    return 0;
}