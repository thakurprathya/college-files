//write a program to show overloading of new & delete operators.
#include<iostream>
#include<stdlib.h>
using namespace std;

class test{
    string str;
    int i;
    public:
        test(){ str=""; i=0; }
        test(string str, int i){ this->str=str; this->i=i; }
        void display(){ cout<<"string is: "<<str<<" & integer is: "<<i<<endl; }
        void *operator new(size_t size){  // returning a ptr as new returns address & size_t is datatype in cpp which is capable of storing largest amout of memory
            void *ptr= malloc(size);  //size refers to the bytes of memory here
            return ptr;
        }
        void operator delete(void *ptr){  //no return type as delete operator returns nothing, so keeping it that way only
            free(ptr);
            cout<<"memory freed"<<endl;
        }
};

int main(){
    test *obj = new test("mystring", 1);
    obj->display();
    delete(obj);
    return 0;
}