//Write a program to read two numbers and then divide first number by second number and raise an exception if second number is zero.
#include<iostream>
using namespace std;

int main(){
    float a,b;
    char c='n';
    while(c=='n' || c=='N'){
        try{
            cout<<"Enter first Number: "; cin>>a;
            cout<<"Enter second Number: "; cin>>b;
            if(b==0){ throw b; }
            cout<<"A/B : "<<a/b<<endl<<endl;
        }
        catch(float){
            cout<<"Exception Occured - denominator cannot be 0"<<endl<<endl;
        }
        cout<<"Exit?? "; cin>>c; cout<<endl;
    }
    return 0;
}