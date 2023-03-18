//Write a program to sort a array using Quick sort.
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
int partition(int arr[], int low, int high){
    int pivot=arr[low];  int i=low+1,j=high;
    do{
        while(arr[i]<=pivot){i++;}  //searching first element greater than pivot in the array
        while(arr[j]>pivot){j--;}  //searching first element lower than pivot in the array from the last
        if(i<j){ swap(&arr[i],&arr[j]); }
    }while(i<j);
    swap(&arr[low],&arr[j]);
    return j;
}
void quicksort(int arr[], int low, int high){
    int partition_index;  //index of pivot after partition
    if(low<high){
        partition_index=partition(arr,low,high);
        quicksort(arr,low,partition_index-1);  //sorting left subarray
        quicksort(arr,partition_index+1,high);  //sorting right subarray
    }
}

int main(){
    int n; cout<<"Enter no. of elements in the array : "; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){ cout<<"Enter arr["<<i<<"] = "; cin>>a[i]; }cout<<endl;
    printarray(a,n);
    quicksort(a,0,n-1);  cout<<"after quick sort ";
    printarray(a,n);
    return 0;
}