//write a program to create a graph and perform dfs and bfs
#include<iostream> 
#include<stdlib.h>
using namespace std;

typedef struct queue{
    int queuesize;
    int front,rear; 
    int *arr;
}queue;

int isempty(queue *q){
    if(q->front==q->rear){return 1;}
    else{return 0;}}
int isfull(queue *q){
    if(q->rear==q->queuesize-1){return 1;}
    else{return 0;}}
void enqueue(queue *q, int value){
    if(isfull(q)){}
    else{q->rear=q->rear+1;   q->arr[q->rear]=value;}
}
int dequeue(queue *q){
    if(isempty(q)){}
    else{q->front++;  return q->arr[q->front];}
}
void queuetraversal(queue *q){
    q->front++;
    printf("\nqueue is;\t");
    while(q->front!=q->rear+1){printf("%d\t",q->arr[q->front]);  q->front++;}
    q->front=-1;
}
void BFS(queue *q1, int n, int *visited, int *a){
    int i=1;  cout<<"Enter source node: "; cin>>i;
    cout<<"Rechable nodes are: ";
    cout<<i<<" ";
    visited[i]=1;
    enqueue(q1, i);
    while(!isempty(q1)){
        int node=dequeue(q1);
        for(int j=0; j<7; j++){
            if(*((a+node)+j)==1 && visited[j]==0){ 
                cout<<j<<" ";
                visited[j]=1;
                enqueue(q1,j);
            }
        }
    }cout<<endl;
}
int DFS(int i, int n, int *visited, int *a){
    cout<<"Rechable nodes are: ";
    int j;
    cout<<i<<" ";
    visited[i]=1;
    for(int j=0; j<n; j++){
        if(*((a+i)+j)==1 && !visited[j]){   //!visited same as visited==0
            DFS(j, n, visited, a);
        }
    }cout<<endl;
}

int main(){
    queue *q1=(queue *)malloc(sizeof(queue));
    q1->queuesize=100;  q1->front=0;  q1->rear=0;
    q1->arr=(int *)malloc(q1->queuesize*sizeof(int)); 

    int n; cout<<"Enter no. of vertices: "; cin>>n;
    int visited[n];
    int a[n][n]; //adjency matrix representation
    for(int i=0; i<n; i++){ visited[i]=0; }
    for(int i=0; i<n; i++){ for(int j=0; j<n; j++){ a[i][j]=0; } }

    cout<<"Enter the graph in adjency matrix: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){  cin>>a[i][j]; }
    }
    int *v= visited;
    int *arr= a[0];
    BFS(q1, n, v, arr);
    int i=1; cout<<"Enter source node: "; cin>>i;
    DFS(i, n, v, arr);
    return 0;
}