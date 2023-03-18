//Write a program to illustrate overloading of template function.
#include<iostream>
using namespace std;

template <class T> void func(T a){
    cout<<"Value of function is: "<<a<<endl; 
}
template <class T1, class T2> void func(T1 a, T2 b){
    cout<<"Value of function is: "<<a<<" , "<<b<<endl;
}
template <class T1, class T2, class T3> void func(T1 a, T2 b, T3 c){
    cout<<"Value of function is: "<<a<<" , "<<b<<" , "<<c<<endl;
}

int main(){
    func("MYstring");
    func("Mystring", 5);
    func("h", "#", 93.4);
    return 0;
}