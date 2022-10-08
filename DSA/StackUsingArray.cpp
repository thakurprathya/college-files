#include<iostream>
#include<stdlib.h>
using namespace std;

struct stack{
    int stacksize,top;  
    int *arr;
};

int isempty(struct stack *p){
    if(p->top==-1){return 1;}
    else{return 0;}
}
int isfull(struct stack *p){
    if(p->top==(p->stacksize - 1)){return 1;}
    else{return 0;}
}
void stacktraversal(struct stack *p){
    if(isempty(p)){printf("stack is empty( underflow )\n");}
    else{
        int i=0;  printf("\nstack is;\t");
        while(i!=(p->top+1)){printf("%d\t",p->arr[i]);  i++;} printf("\n\n");}
}
void push(struct stack *p, int element){
    if(isfull(p)){printf("stack is full( overflow )\n");}
    else{
        p->arr[p->top+1]= element;  p->top++;
        printf("element pushed in stack successfully\n");}
}
void pop(struct stack *p){
    if(isempty(p)){printf("stack is empty( underflow )\n");}
    else{
        int value=p->arr[p->top];  p->top--;
        printf("\nelement %d poped from the stack successfully\n",value);}
}
int peek(struct stack *p, int position){  //this funct will start counting elements from 1 only not from 0.
    if((p->top)-position+1<0){printf("\ninvalid position!!!\n");  return -1;}
    else return p->arr[(p->top)-position+1];}
int stacktop(struct stack *p){
    return p->arr[p->top];}
int stackbottom(struct stack *p){
    return p->arr[0];}

int main(){
    struct stack stack1;
    stack1.stacksize=5;
    stack1.top=-1;
    stack1.arr=(int *)malloc(stack1.stacksize*sizeof(int));  //creating an dynamic array of integers of size stack1.stacksize
    struct stack *p=&stack1;  //creating a pointer to stack1

    isempty(p);
    push(p,11);   push(p,22);   push(p,33);   push(p,44);   push(p,55);
    stacktraversal(p);
    push(p,0);
    pop(p);
    push(p,0);
    stacktraversal(p);
    int i=1;
    printf("element present at position%d is %d\n",i,peek(p,i));
    printf("the top most element of the stack is %d\n",stacktop(p));
    printf("the bottom most element of the stack is %d\n",stackbottom(p));
    return 0;
}