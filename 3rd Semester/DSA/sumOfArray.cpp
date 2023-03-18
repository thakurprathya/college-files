#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: "; cin>>n; cout<<endl;
    int arr[n], sum=0;
    for(int i=0; i<n; i++){ 
        cout<<"Enter ele: "; 
        cin>>arr[i];
        sum+=arr[i]; }
    cout<<"\nSum of all the elements of the array is: "<<sum<<endl;
    return 0;
}