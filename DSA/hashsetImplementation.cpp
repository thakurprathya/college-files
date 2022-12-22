//Write a program to implement searching using hashing method.
#include<iostream>
#include<stdlib.h>
using namespace std;
 
typedef struct Hashnode {
	int key;
	struct Hashnode *next;
}node;
typedef struct list{
	struct Hashnode *head, *tail;
}list;


int hashFunction(int x, int MAX){ return (x % MAX); }
void initializeList(list* lst, int MAX){
	for(int i=0; i<MAX; i++){ lst[i].head = NULL; lst[i].tail = NULL; }
}
int find(node *list, int key){
	int index = 0;
	node *temp = list;
	while(temp != NULL){
		if(temp->key == key){ return index; }
  		temp = temp->next; index++;
	}
	return -1;
}
node* getElement(node *list, int findIndex){
	int i = 0;
	node *temp = list;
	while(i != findIndex){	temp = temp->next; i++; }
	return temp;
}
void display(list* lst, int MAX){
	for(int i=0; i<MAX; i++){
		node *temp = lst[i].head;
		if (temp == NULL){ cout<<i<<" -> "<<endl; }
        else{
            cout<<i<<" -> ";
			while(temp != NULL){
			    cout<<temp->key<<" ";
				temp = temp->next;
			}cout<<endl;
		}
	}
}
void insertEle(int key, list* lst, int MAX, int size){
  	float loadFactor= 0.0;
	int index = hashFunction(key, MAX);  
	node *list = (node*) lst[index].head;  //extracting linked list at given index
 
	node *item = (node*) malloc(sizeof(node));
	item->key = key; item->next = NULL;
	if(list == NULL){
		lst[index].head = item;
		lst[index].tail = item;
		size++;
	}
    else {
		int findIndex = find(list, key); 
		lst[index].tail->next = item;
		lst[index].tail = item;
		size++;
	}
	loadFactor = float(size/MAX);
	if(loadFactor >= 0.95){ cout<<"Size Overloading needs to rehash"<<endl;	}
}
void removeEle(int key, list* lst, int MAX){
	int index = hashFunction(key, MAX);
	node *list = (node*) lst[index].head; //extracting linked list at given index
	if(list == NULL){ cout<<"key does not exists"<<endl; }
    else{
		int findIndex = find(list, key);
		if (findIndex == -1){ cout<<"key does not exists"<<endl; }
        else{
 			node *temp = list;
			if(temp->key == key){
  				lst[index].head = temp->next;
  				cout<<"element deleted"<<endl; return; 
			}
			while(temp->next->key != key){	temp = temp->next; }
  			if(lst[index].tail == temp->next){ temp->next = NULL; lst[index].tail = temp; }
            else{ temp->next = temp->next->next; }
            cout<<"element deleted"<<endl;
		}
	}
}
 
 
int main(){
	int size=0, MAX=5;
	cout<<"enter the number for which you want to calculate hashFunction: "; cin>>MAX;
	list* lst = (list*)malloc(MAX * sizeof(list));
	initializeList(lst, MAX);
 
    int n; cout<<"enter the no. of elements you want to insert in hashtable: "; cin>>n;
    for(int i=0; i<n; i++){
        int a; cout<<"enter element: "; cin>>a;
        insertEle(a, lst, MAX, size);
    }
    display(lst, MAX);

    int a; cout<<"enter the element you want to remove from the hashTable: "; cin>>a;
    removeEle(a, lst, MAX);
    display(lst, MAX);

    cout<<"enter the element you want to search: "; cin>>a;
    int index= hashFunction(a, MAX);
    node *list = (node*) lst[index].head;  //extracting linked list at given index
    find(list, a)==-1 ? cout<<"element not present"<<endl : 
    cout<<"element present in list:"<<index<<" at index: "<<find(list, a)<<endl;
	return 0;
}