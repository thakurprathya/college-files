//Write a program to sort a array using Selection Sort.
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
void selectionsort(int arr[], int n){
    int min_index;
    for(int i=0; i<n-1; i++){  //for n-1 paases
        min_index=i;
        for(int j=i+1; j<n; j++){  //moving from index i+1 till the last element (running this loop for finding index of min element)
            if(arr[j]<arr[min_index]){ min_index=j; }
        }
        swap(&arr[i], &arr[min_index]);
    }
}

int main(){
    int n; cout<<"Enter no. of elements in the array : "; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){ cout<<"Enter arr["<<i<<"] = "; cin>>arr[i]; }cout<<endl;
    printarray(arr,n);
    selectionsort(arr,n);  cout<<"after selection sort ";
    printarray(arr,n);
    return 0;
}