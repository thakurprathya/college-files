//Write a program to demonstrate use of special functions, constructors, destructors in a class template. The program is used to find greater of two numbers.
#include<iostream>
using namespace std;

template <class T> class test{
    T data;
    public:
    test(){ data = 0; }
    test(T d){ data = d; }
    T greaterEle(test obj){
        return (data>obj.data) ? data : obj.data;
    }
};

int main(){
    test<int> obj1(5), obj2(7);
    cout<<"greater of the two objects is: "<<obj1.greaterEle(obj2)<<endl;
    test<float> obj3(5.023), obj4(5.024);
    cout<<"greater of the two objects is: "<<obj3.greaterEle(obj4)<<endl;
    test<char> obj5('a'), obj6('b');
    cout<<"greater of the two objects is: "<<obj5.greaterEle(obj6)<<endl;
    return 0;
}