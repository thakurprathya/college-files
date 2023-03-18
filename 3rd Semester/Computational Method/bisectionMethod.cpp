#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

float funct(float x){
    return cos(x) - x*exp(x);
}
void bisection(float a, float b, float error, float iteration){
    if (funct(a) * funct(b) >= 0){ cout<<"Try other a & b"<<endl; return; }
    float c = a;
    while(abs(b-a) >= error){
        c = (a+b)/2;
        if(funct(c) == 0.0){ break;}  // Checking if middle point is root
        //updating the range
        else if(funct(c)*funct(a) < 0){ b = c; }
        else{ a = c; }
    }
    cout<<"Root is:"<<setprecision(iteration)<<c<<endl;
}
 
int main(){
    float a, b, error, iterations;
    cout<<"Enter value for a, b, error & iterations respectively:"<<endl;  cin>>a>>b>>error>>iterations;
    bisection(a, b, error, iterations);
    return 0;
}