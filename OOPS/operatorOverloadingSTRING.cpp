/*Implement class string containing the following functions
Overload + operator to carry out concatenation of strings
Overload = operator string copy.
Overload <= operator to carry out comparison of strings.
Function to display the length of string.
Function tolower to convert uppercase to lowercase 
Function toupper to convert lowercase to uppercase*/
#include<iostream>
using namespace std;

class STRING{
    string str;
    public:
        STRING(){ str=""; }
        STRING(string s){ str=s; }
        STRING operator+(STRING obj){ STRING s=str+obj.str; return s; }  //return type is class obj when using  + on 2 class objects
        STRING operator=(STRING obj){ str= obj.str; return str; }
        int operator<=(STRING obj){  //return type will be int when using <= on two class objects
            if(str.length() < obj.str.length()){ return 1; }
            else if(str.length() > obj.str.length()){ return -1; }
            else{
                for(int i=0; i<str.length(); i++){
                    if(str[i] < obj.str[i]){ return -1; break; }
                    else if(str[i] > obj.str[i]){ return 1; break; }
                }
                return 0;
            }
        }
        void toLower(){
            for(int i=0; i<str.length(); i++){ if(str[i] >=65 && str[i]<=90){ str[i]+=32; } }
        }
        void toUpper(){
            for(int i=0; i<str.length(); i++){ if(str[i] >=97 && str[i]<=122){ str[i]-=32; } }
        }
        void length(){ cout<<"Length of object string is: "<<str.length()<<endl; }
        void display(){ cout<<"Object is: "<<str<<endl; }
};

int main(){
    STRING o1("Hello "), o2("World");
    o1.display(), o2.display();

    o1.toUpper(); o1.display();
    o1.toLower(); o1.display();
    o1.length();

    STRING o3= o1+o2;  //calling addition operator
    o3.display();
    o3 = o1;  //calling equal to operator
    o3.display();

    int res= o2<=o1;  //calling less than equla to operator
    cout<<res<<endl;
    res= o3<=o1;  //calling less than equla to operator
    cout<<res<<endl;
    res= o3<=o2;  //calling less than equla to operator
    cout<<res<<endl;
    return 0;
}