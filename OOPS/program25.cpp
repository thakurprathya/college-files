//Write a program to illustrate how to define and declare a class template for reading two data items from keyboard and calculate their sum.
#include<iostream>
using namespace std;

template <class T1, class T2> class test{
    T1 d1;
    T2 d2;
    public:
        void getData(){
            cout<<"Enter first number: "; cin>>d1;
            cout<<"Enter second number: "; cin>>d2;
        }
        void sum(){ cout<<"Sum of Numbers: "<<d1+d2<<endl;  }
};

int main(){
    int c;
    while(1){
        cout<<"\n##### 1. Sum of Integers ######"<<endl;
        cout<<"##### 2. Sum of Decimals #####"<<endl;
        cout<<"##### 3. Sum of Integer and Decimal #####"<<endl;
        cout<<"##### 4. Exit #####"<<endl;
        cout<<"Enter your choice: "; cin>>c;
        if(c==1){
            test<int, int> obj;
            obj.getData(); obj.sum();
        }
        else if(c==2){
            test<float, float> obj;
            obj.getData(); obj.sum();
        }
        else if(c==3){
            test<int, float> obj;
            obj.getData(); obj.sum();
        }
        else if(c==4){ exit(1); }
        else{ cout<<"Wrong choice! Try again"<<endl; }
    }
    return 0;
}