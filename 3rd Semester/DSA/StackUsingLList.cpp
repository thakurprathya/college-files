#include<iostream>
#include<stdlib.h>

struct stacknode{
    int data;
    struct stacknode *next;
};

int isempty(struct stacknode *top){
    if(top==NULL){printf("\nstack underflow, stack is empty.\n");  return 1;}
    else{return 0;}
}
int isfull(struct stacknode *top){
    struct stacknode *ptr=(struct stacknode *)malloc(sizeof(struct stacknode));
    if(ptr==NULL){printf("\nstack overflow, stack is full.\n");  return 1;}  //not able to allocate memory
    else{return 0;}
}
void stacktraversal(struct stacknode *top){
    if(isempty(top)){}
    else{  
        printf("\nstack is\t");
        while(top!=NULL){
            printf("%d\t",top->data);  top=top->next;
        }
        printf("\n");}
}
struct stacknode *push(struct stacknode *top, int element){
    if(isfull(top)){}
    else{
        struct stacknode *p=(struct stacknode *)malloc(sizeof(struct stacknode));
        p->data=element;
        p->next=top;  top=p;  printf("element pushed succesfully\n");
        return top;
    }
}
struct stacknode *pop(struct stacknode *top){  //creating a function of struct stacknode * datatype
    if(isempty(top)){}
    else{
        struct stacknode *p=top;  int value=top->data;
        top=top->next;  free(p);
        printf("\npoped element is %d\n",value);
        return top;
    }
}
int peek(struct stacknode *top, int position){  //this funct will start counting elements from 1 only not from 0.
    int i=1;
    while(i!=position){top=top->next;  i++;}
    return top->data;
}
void stacktop(struct stacknode *top){
    printf("\ntopmost element of the stack is %d\n",top->data);}
void stackbottom(struct stacknode *top){
    while(top->next!=NULL){top=top->next;}
    printf("\nbottomost element of the stack is %d\n",top->data);}

int main(){
    struct stacknode *top=NULL;
    top=push(top,11);
    top=push(top,12);
    top=push(top,13);
    stacktraversal(top);
    top=pop(top);
    top=push(top,10);
    top=push(top,9);
    top=push(top,8);
    top=push(top,7);
    stacktraversal(top);
    int d=4;
    printf("\ndata present at position%d is %d\n",d,peek(top,d));
    stacktop(top);  stackbottom(top);
    return 0;
}