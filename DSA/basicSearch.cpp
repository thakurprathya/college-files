#include<iostream>
using namespace std;

int search(int n, int arr[], int ele){
    for(int i=0; i<n; i++){
        if(arr[i]==ele){ return 1; }
    }
    return 0;
}

int main(){
    int arr[]={33,6,26,63,1,32,2349,3,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<(search(n,arr,8)?"element present":"element not present")<<endl;
    return 0;
}