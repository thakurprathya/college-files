#include<iostream>
using namespace std;

void subArraySum(int arr[], int n, int sum){  //O(n^2) time
    for(int i = 0; i < n; i++) {
        int currentSum = arr[i];
        if(currentSum == sum){ cout<<"Sum found between indexes (0,"<<i<<")"<<endl; return;  }
        else{
            for(int j = i + 1; j < n; j++){
                currentSum += arr[j];
                if(currentSum == sum){
                    cout<<"Sum found between indexes ("<<i<<","<<j<<")"<<endl;
                    return;
                }
            }
        }
    }
    cout << "No subarray found";
    return;
}

int main(){
    int arr[]={1,-1,2,-3,33,-3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    subArraySum(arr,n, 0);
    return 0;
}