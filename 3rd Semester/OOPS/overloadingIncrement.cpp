//write a program to show overloading of increment operator(++).
#include<iostream>
using namespace std;

class Int{
    int integer;
    public:
        Int(int i=0){ integer=i; }
        Int operator++(){ ++integer; return *this; }  // overloading pre-increment operator and setting return type to class object only
        Int operator++(int){ Int temp(*this); ++integer; return temp; }  //overloading post-increment operator and setting return type to class object only
        void display(){ cout<<"value of int is : "<<integer<<endl; }
        void set(int i){ integer=i; }
};

int main(){
    Int i1(2);
    i1.display();
    (++i1).display();  //using pre-increment operator, as return type of class using function directly (first value update then display)
    (i1++).display();  //using post-increment operator (first display then value will be updated)
    i1.display();
    return 0;
}