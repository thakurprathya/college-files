//Create a binary tree & calculate its height.
#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct treenode{
    int data;
    struct treenode *left;
    struct treenode *right;
}treenode;

treenode *createnode(int data){
    treenode *n=(treenode *)malloc(sizeof(treenode));
    n->left=NULL;  n->right=NULL;
    n->data=data;
    return n;
}
int max(int a, int b){ if(a>b){return a;} return b; }
int heightofBT(treenode *root){
    if(root==NULL){ return 0; }
    else{
        return max(heightofBT(root->left), heightofBT(root->right)) +1;
    }
}

int main(){
    treenode *root= createnode(0);
    root->left= createnode(1);
    root->right= createnode(2);
    root->left->left= createnode(3);
    root->left->right= createnode(4);
    root->right->right= createnode(5);
    root->right->right->right= createnode(6);
    
    cout<<"Height of given binary tree is: "<<heightofBT(root)<<endl;
    return 0;
}