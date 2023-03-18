//Write a program to raise an exception if any attempt is made to refer to an element whose index is beyond the array size.
#include<iostream>
using namespace std;

int main(){
    int n; cout<<"Enter size of array: "; cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements : ";
    for(int i=0; i<n; i++){ cin>>arr[i]; }
    char c='n';
    while(c=='n' || c=='N'){
        try{
            int i; cout<<"Enter the index you want to search in the array: "; cin>>i;
            if(i>=n){ throw "exception"; }
            cout<<"Element at index-"<<i<<" is : "<<arr[i]<<endl<<endl; 
        }
        catch(char const*){
            cout<<"Exception Occured - index is beyond the scope of array"<<endl<<endl;
        }
        cout<<"Exit?? "; cin>>c; cout<<endl;
    }
    return 0;
}