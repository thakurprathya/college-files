#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter size for arr1; "; cin>>n;
    cout<<"Enter size for arr2; "; cin>>m; cout<<endl;
    int arr1[n+m-1];
    for(int i=0; i<n; i++){
        cout<<"Enter ele"<<i+1<<" for arr1; "; cin>>arr1[i]; }
        cout<<endl;
    for(int i=0; i<m; i++){
        cout<<"Enter ele"<<i+1<<" for arr2; "; cin>>arr1[i+n]; }
        cout<<endl;
    cout<<"Merged array is:"<<endl;
    for(int i=0; i<n+m; i++){
        cout<<arr1[i]<<" ";
    }cout<<endl;
    return 0;
}