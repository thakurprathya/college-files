//write a program to find the greatest of 2 given numbers in 2 different classes using the friend function
#include<iostream>
using namespace std;

class B;
class A{
    float data;
    public:
        A(){ data=0.0; }
        A(float x){ data=x; }
        friend void greatest(A, B);
};
class B{
    float data;
    public:
        B(){ data=0.0; }
        B(float x){ data=x; }
        friend void greatest(A, B);
};
void greatest(A objA, B objB){
    cout<<objA.data<<" "<<objB.data<<endl;
    cout<<"Greatest of both numbers is: "<<max(objA.data, objB.data)<<endl;
}

int main(){
    A obj1(324.43);
    B obj2(239.32);
    greatest(obj1, obj2);
    return 0;
}