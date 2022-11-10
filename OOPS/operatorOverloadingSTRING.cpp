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
        void concat(STRING obj){ str += obj.str; }
        void copy(STRING obj){ str = obj.str; }
        int compare(STRING obj){
            int res=0;
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
    STRING o1("Hello "), o2("World"), o3;
    o1.display(), o2.display(), o3.display();

    o1.toUpper(); o1.display();
    o1.toLower(); o1.display();
    o3.copy(o2); o3.display();
    o3.concat(o1); o3.display();
    o3.length();
    cout<<"result on comparing obj3 and obj2: "<<o3.compare(o2)<<endl;
    cout<<"result on comparing obj1 and obj2: "<<o1.compare(o2)<<endl;
    cout<<"result on comparing obj1 and obj1: "<<o1.compare(o1)<<endl;
    return 0;
}