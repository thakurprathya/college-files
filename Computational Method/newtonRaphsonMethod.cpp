#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

float funct(float x){
    return cos(x) - x*exp(x);
}
float derivFunct(float x){
    return -sin(x) - exp(x) - x*exp(x);
}
void newtonRaphson(float x, float error, float iteration){
    float c = funct(x) / derivFunct(x);
    while(abs(c) >= error){
        c = funct(x)/derivFunct(x); 
        x -= c;
    }
    cout<<"Root is: "<<setprecision(iteration)<<x;
}

int main(){
    float x, error, iterations;
    cout<<"Enter value for x(assumed value) error & iterations respectively:"<<endl;  cin>>x>>error>>iterations;
    newtonRaphson(x, error, iterations);
    return 0;
}