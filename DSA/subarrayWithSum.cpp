#include<iostream>
using namespace std;

void subArraySum(int arr[], int n, int sum){  //O(n^2) time
    int found=0;
    for(int i = 0; i < n; i++) {
        int currentSum = arr[i];
        for(int j = i + 1; j < n; j++){
            currentSum += arr[j];
            if(currentSum == sum){
                found=1;
                cout<<"Sum = "<<sum<<" found between indexes ("<<i<<","<<j<<")"<<endl;
            }
        }
    }
    if(!found){ cout << "No subarray found"; }
}

int main(){
    int arr[]={1,-1,2,-2,3,-3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    subArraySum(arr,n, 0);
    return 0;
}