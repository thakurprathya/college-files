//Write a program to demonstrate the use of friend function with inline assignment (getdata and display)
#include<iostream>
using namespace std;

class A{
    int data;
    public:
        A(){ data=0; }
        A(int x){ data=x; }
        friend inline void display(A);
};
inline void display(A obj){ cout<<"Value of class object is: "<<obj.data<<endl; }

int main(){
    A obj(99);
    display(obj);
    return 0;
}