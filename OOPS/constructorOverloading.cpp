/*Write a program to perform addition of 2 complex numbers, the first constructor which takes no arguments is used to
create objects which are not initialized, second constructor takes only one argument and set that value equals to both
real and imaginary part, third constructor takes 2 arguments and set it equal to real and imaginary part respectively. */
#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
        complex(){ real=0, imaginary=0; }
        complex(int d){ real=d, imaginary=d; }
        complex(int d1, int d2){ real=d1, imaginary=d2; }
        void add(complex &c1, complex &c2){
            real= c1.real + c2.real;
            imaginary= c1.imaginary + c2.imaginary;
        }
        void display(){ cout<<"Complex no. is: "<<real<<" + "<<imaginary<<"i"<<endl; }
};

int main(){
    complex n1, n2(3), n3(2,4);
    n1.display();
    n2.display();
    n3.display();

    n1.add(n2, n3);
    n1.display();
    return 0;
}