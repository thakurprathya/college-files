//Write a program to sort a array using Merge sort.
#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    cout<<"array is: ";
    for(int i=0; i<n; i++){ cout<<arr[i]<<" "; }cout<<endl;
}
void merge(int arr[], int low, int mid, int high){ //this function merges both the parts left and right about mid, merges them in a manner explained in func
    int i,j,k,b[high-low+1];
    i=low;  j=mid+1;  k=low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){b[k]=arr[i];  i++;  k++;}
        else{b[k]=arr[j];  j++;  k++;}
    }
    while(i<=mid){b[k]=arr[i]; i++;  k++;}
    while(j<=high){b[k]=arr[j]; j++;  k++;}
    
    for(int l=low; l<=high; l++){arr[l]=b[l];} //for loop is for copying elements from b array to the main array
}
void mergesort(int arr[], int low, int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main(){
    int n; cout<<"Enter no. of elements in the array : "; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){ cout<<"Enter arr["<<i<<"] = "; cin>>a[i]; }cout<<endl;
    printarray(a,n);
    mergesort(a,0,n-1);  cout<<"after merge sort ";
    printarray(a,n);
    return 0;
}