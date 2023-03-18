//Kadane's Algorithm : assessment Question 1.
//return the max sum of continuous subarray from a given array.
#include<iostream>
using namespace std;

int kadanesAlgo(int a[], int n){
    int maxsum=0, currentsum=0;
    for(int i=0; i<n; i++){
        currentsum+=a[i];
        if(currentsum>maxsum){ maxsum=currentsum; }
        else if(currentsum<0){ currentsum=0; }
    }
    return maxsum;
}

int main(){
    // int arr[]={5,-4,-2,6,-1};
    // int n=sizeof(arr)/sizeof(arr[0]);
    int n; cout<<"Enter the no. of elements you want to enter: "; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){ cout<<"Enter ele"<<i<<" : "; cin>>arr[i]; }
    cout<<endl<<"max sum of subarray of array arr is; "<<kadanesAlgo(arr,n)<<endl;
    return 0;
}