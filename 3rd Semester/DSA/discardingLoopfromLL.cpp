/*Remove loop(last node pointer pointing to some node not NULL) from the linked list, and print the elements that are 
not the part of the loop*/
#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct LList{
    int data;
    LList *next;
}ListNode;

ListNode *createNode(int d){
    ListNode *node = (ListNode*)malloc(sizeof(ListNode));
    node->data=d;  node->next=NULL;
    return node;
}
ListNode *detectCycle(ListNode *head){
    ListNode *slow=head, *fast=head, *meetNode=NULL;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){ meetNode=slow; break; }
    }
    
    slow=head;
    if(meetNode==NULL){ return NULL; }
    else{
        while(slow!=meetNode){
            slow=slow->next;
            meetNode=meetNode->next;
        }
        return slow;
    }
}
void listTraversal(ListNode *ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }cout<<endl;
}

int main(){
    ListNode *head= createNode(1);
    ListNode *second= createNode(2);
    ListNode *third= createNode(3);
    ListNode *fourth= createNode(4);
    ListNode *fifth= createNode(5);
    ListNode *sixth= createNode(6);
    ListNode *seventh= createNode(7);
    
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    
    seventh->next=fifth;  //creating loopNode
    
    ListNode *loopnode= detectCycle(head);
    int loopdata= loopnode->data;
    loopnode= loopnode->next;
    while(loopnode->data != loopdata){
        ListNode *temp= loopnode;
        loopnode=loopnode->next;
        free(temp);
    }
    loopnode->next=NULL;
    
    listTraversal(head);
    return 0;
}