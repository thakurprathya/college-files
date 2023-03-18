/*Create class which keeps track of number of instances use static data member, constructors & destructors to maintain
updated information of active objects.*/
#include<iostream>
using namespace std;

class Test{
    public:
        static int cnt;  //static data member
        Test(){ cnt++; cout<<"Current Active objects are: "<<cnt<<endl; }
        ~Test(){ cnt--; cout<<"Current Active objects are: "<<cnt<<endl; }
};
int Test::cnt=0;

int main(){
    Test obj1, obj2, obj3, obj4;
    return 0;
}