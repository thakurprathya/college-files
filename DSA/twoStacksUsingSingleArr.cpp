//write a program to implement to stacks using a sigle array.
#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct twoStacks{
    int *arr;
	int size, topStack1, topStack2;
}twoStacks;

twoStacks *createStacks(int sizeofArr){
    twoStacks *node = (twoStacks*)malloc(sizeof(twoStacks));
    node->size=sizeofArr;
    node->arr= (int*)malloc(sizeof(int));
    node->topStack1= sizeofArr/2 +1;
    node->topStack2= sizeofArr/2;
    return node; 
}
void pushStack1(twoStacks *node, int x){
    if(node->topStack1 > 0){ node->topStack1--;  node->arr[node->topStack1]=x; }
    else{ cout<<"Stack Overflow"<<endl;  return; }
}
void pushStack2(twoStacks *node, int x){
    if(node->topStack1 < node->size -1){ node->topStack2++;  node->arr[node->topStack2]=x; }
    else{ cout<<"Stack Overflow"<<endl;  return; }
}
int popStack1(twoStacks *node){
    if(node->topStack1 <= node->size/2){
        int x= node->arr[node->topStack1];  node->topStack1++;
        return x;
    }
    else{ cout<<"Stack Underflow"<<endl; return -1; }
}
int popStack2(twoStacks *node){
    if(node->topStack2 >= node->size/2 +1){
        int x= node->arr[node->topStack2];  node->topStack2--;
        return x;
    }
    else{ cout<<"Stack Underflow"<<endl; return -1; }
}

int main(){
	twoStacks *obj1= createStacks(5); 

	pushStack1(obj1, 5);
    pushStack2(obj1, 10);
    pushStack2(obj1, 15);
    pushStack1(obj1, 20);
    pushStack2(obj1, 25);

	cout<<"Popped element from stack1 is :"<<popStack1(obj1)<<endl;
	cout<<"Popped element from stack2 is :"<<popStack2(obj1)<<endl;
	return 0;
}
