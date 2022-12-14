//Write a program to sort a array using Insertion sort.
#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    cout<<"array is: ";
    for(int i=0; i<n; i++){ cout<<arr[i]<<" "; }cout<<endl;
}
void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++){   //condition similar to i<=n-1; //here also no. of passes req is 1 less than no. of elements
        key= arr[i];
        j= i-1;
        while(j >= 0 && arr[j] > key){ arr[j+1]=arr[j]; j--; }  //Moving elements of arr[0..i-1], that are greater than key, to one position ahead of their current position */
        arr[j+1] = key;
    }
}

int main(){
    int n; cout<<"Enter no. of elements in the array : "; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){ cout<<"Enter arr["<<i<<"] = "; cin>>arr[i]; }cout<<endl;
    printarray(arr,n);
    insertionSort(arr,n);  cout<<"after insertion sort ";
    printarray(arr,n);
    return 0;
}