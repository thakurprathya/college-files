//Write a program to define a function template for swapping two items of various datatypes such as integers, float and characters.
#include<iostream>
using namespace std;

template <class T> void swapValues(T &a, T &b){
    T temp = a;  a = b;  b = temp;
}

int main(){
    int c;
    while(1){
        cout<<"\n##### 1. Swaping integer ######"<<endl;
        cout<<"##### 2. Swaping floating point number #####"<<endl;
        cout<<"##### 3. Swaping strings #####"<<endl;
        cout<<"##### 4. Exit #####"<<endl;
        cout<<"Enter your choice: "; cin>>c;
        if(c==1){
           int a,b; 
           cout<<"Enter value1: "; cin>>a;
           cout<<"Enter value2: "; cin>>b;
           cout<<"(value1, value2): before swapping -> ("<<a<<","<<b<<")"<<endl;
           swapValues(a, b);
           cout<<"(value1, value2): after swapping -> ("<<a<<","<<b<<")"<<endl;
        }
        else if(c==2){
            float a,b;
            cout<<"Enter value1: "; cin>>a;
            cout<<"Enter value2: "; cin>>b;
            cout<<"(value1, value2): before swapping -> ("<<a<<","<<b<<")"<<endl;
            swapValues(a, b);
            cout<<"(value1, value2): after swapping -> ("<<a<<","<<b<<")"<<endl;
        }
        else if(c==3){
            string a,b;
            cout<<"Enter value1: "; cin>>a;
            cout<<"Enter value2: "; cin>>b;
            cout<<"(value1, value2): before swapping -> ("<<a<<","<<b<<")"<<endl;
            swapValues(a, b);
            cout<<"(value1, value2): after swapping -> ("<<a<<","<<b<<")"<<endl;   
        }
        else if(c==4){ exit(1); }
        else{ cout<<"Wrong choice! Try again"<<endl; }
    }
    return 0;
}