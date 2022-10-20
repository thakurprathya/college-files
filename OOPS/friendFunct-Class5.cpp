//create a class complex having a 2 object c1 and c2. add them,object c3 is created and returned using a friend 
//function concept
#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
        complex(){ real=0, imaginary=0; }
        complex(int r, int i){ real=r, imaginary=i; }
        void add(complex obj1, complex obj2){
            real=obj1.real + obj2.real;
            imaginary=obj1.imaginary + obj2.imaginary;
        }
        friend void display(complex);
};
void display(complex obj){
    cout<<"Result of complex addition is: "<<obj.real<<" + "<<obj.imaginary<<"i"<<endl; 
}

int main(){
    complex obj1(1,2), obj2(2,1), obj3;
    obj3.add(obj1, obj2);
    display(obj3);
    return 0;
}