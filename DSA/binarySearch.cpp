#include<iostream>
using namespace std;

int max_element(int arr[], int n){
    int max=INT_MIN;
    for(int i=0; i<n; i++){ if(arr[i]>max){ max=arr[i]; } }
    return max;
}
void countsort(int arr[], int n){ //time complexity: o(n+m), space complexity: o(n); where m is range of input
    int i,j;
    int max=max_element(arr,n);
    int *countt=(int *)calloc((max+1),sizeof(int));  //dynamically creating an array of size 1 greater than max, using calloc because also want to initialize each element to 0.
    
    for(i=0; i<n; i++){ countt[arr[i]]++; }
    i=0,j=0;
    while(i<=max){
        if(countt[i]>0){arr[j]=i;  countt[i]--;  j++;}
        else{i++;}
    }
}

int binarySearch(int n, int arr[], int ele){
    countsort(arr,n);
    int low=0, high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(ele==arr[mid]){ return 1; }
        else if(ele<arr[mid]){ high=mid-1;}
        else if(ele>arr[mid]){ low=mid+1; }
    }
    return 0;
}

int main(){
    int arr[]={33,6,26,63,1,32,2349,3,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<(binarySearch(n,arr,8)?"element present":"element not present")<<endl;
    return 0;
}