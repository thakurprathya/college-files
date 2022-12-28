//Write a program to define the function template for calculating square of given numbers with different datatype.
#include<iostream>
#include <typeinfo>
using namespace std;

template <class T> void calcSquare(T a){
    cout<<"Square of given "<<typeid(a).name()<<" is: "<<a*a<<endl;
}

int main(){
   int c;
    while(1){
        cout<<"\n##### 1. Square of integer ######"<<endl;
        cout<<"##### 2. Square of floating point number #####"<<endl;
        cout<<"##### 3. Exit #####"<<endl;
        cout<<"Enter your choice: "; cin>>c;
        if(c==1){
           int a; cout<<"Enter the integer whose square you want to calc: "; cin>>a;
           calcSquare(a);
        }
        else if(c==2){
            float a; cout<<"Enter the float num whose square you want to calc: "; cin>>a;
            calcSquare(a);
        }
        else if(c==3){ exit(1); }
        else{ cout<<"Wrong choice! Try again"<<endl; }
    }
    return 0;
}