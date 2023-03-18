//Write a program to sort an array using Bubble sort.
#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    cout<<"array is: ";
    for(int i=0; i<n; i++){ cout<<arr[i]<<" "; }cout<<endl;
}
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;  *y=temp;
}
void bubblesortadaptive(int arr[], int n){
    int issorted=0;
    for(int i=0; i<n-1; i++){  //this loop is represeting no. of passes. which should be 1 less than no. of elements
        issorted=1;
        for(int j=0; j<n-i-1; j++){  //leaving last element after each pass as it sort largest element to the end.
            if(arr[j]>arr[j+1]){  swap(&arr[j],&arr[j+1]);   issorted=0;}
        }
        if(issorted){ return; }
    }
}

int main(){
    int n; cout<<"Enter no. of elements in the array : "; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){ cout<<"Enter arr["<<i<<"] = "; cin>>arr[i]; }cout<<endl;
    printarray(arr,n);
    bubblesortadaptive(arr,n);  cout<<"after bubble sorting ";
    printarray(arr,n);
    return 0;
}