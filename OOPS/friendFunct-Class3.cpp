//write a program to find the sum of two numbers declared in a class and display the number and sum using a friend class
#include<iostream>
using namespace std;

class A{
    float d1, d2;
    public:
        A(){ d1=0.0, d2=0.0; }
        A(float x, float y){ d1=x, d2=y; }
        friend class B;
};
class B{
    public:
        void display(A obj){ cout<<obj.d1<<" "<<obj.d2<<endl; }
        void sum(A obj){ cout<<"Sum of both is: "<<obj.d1+obj.d2<<endl; }
};

int main(){
    A objA(32, 34.9);
    B objB;
    objB.display(objA);
    objB.sum(objA);
    return 0;
}