//Write a program to find the biggest of three numbers using a friend function (outside the class)
#include<iostream>
using namespace std;

class A{
    int a, b, c;
    public:
        A(){ a=0, b=0, c=0; }
        A(int x, int y, int z){ a=x, b=y, c=z; }
        void getData(){ cout<<a<<" "<<b<<" "<<c<<endl; }
        friend void greatest(A);
};
void greatest(A obj){
    cout<<"greatest of three numbers is: ";
    cout<<max(obj.a, max(obj.b, obj.c));
}

int main(){
    A obj1(53,294,290);
    obj1.getData();
    greatest(obj1);
    return 0;
}