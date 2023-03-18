//Write a program to generate fibonnaci series using copy constructor.
#include<iostream>
using namespace std;

class Fibonnaci{
    int f0, f1, fn;
    public:
        Fibonnaci(){ f0=0; f1=1; fn=0; }
        Fibonnaci(Fibonnaci *obj1){
            f0=obj1->f0;  f1=obj1->f1;
            fn= f0 + f1;
        }
        void increment(){ f0=f1; f1=fn; fn=f0+f1; }
        void display(){ cout<<fn<<" "; }
};

int main(){
    Fibonnaci obj;
    int n; cout<<"Enter the no. of elements in series: "; cin>>n;
    cout<<endl;
    
    while(n--){
        obj.display();
        obj.increment();
    }
    return 0;
}