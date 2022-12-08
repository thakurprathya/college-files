//write a program to convert a binary number into its decimal equivalent.
#include<iostream>
#include<math.h>  //included for power function
#include<stack>  //included for using STL stack
using namespace std;

int main(){
    // string binNum="101.01";
    string binNum; 
    cout<<"Enter the binary number you want to convert into Decimal: "; 
    cin>>binNum; cout<<endl;
    float temp=0, decNum=0;
    int j=-1;
    stack<char> stk;
    for(int i=0; i<binNum.length(); i++){
        if(binNum[i]=='.'){ temp=1; continue; }
        if(temp==0){ stk.push(binNum[i]); }
        else{ decNum+= float((int)(binNum[i]-'0')*pow(2,j)); j--; }
    }
    j=0;
    while(!stk.empty()){
        decNum+= (int)(stk.top()-'0')*pow(2,j);
        j++;
        stk.pop();
    }
    cout<<"("<<binNum<<") base2 = ("<<decNum<<") base10"<<endl;
    return 0;
}