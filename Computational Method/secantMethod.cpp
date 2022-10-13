#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;

float funct(float x){
    return cos(x) - x*exp(x);
}
void secant(float x1, float x2, float e){  //x1= start of range , x2= end of range
	float i = 0, xm, x0;
	if(funct(x1) * funct(x2) < 0){
		do{
			x0 = (x1 * funct(x2) - x2 * funct(x1)) / (funct(x2) - funct(x1));  //formula
			cout<<"interation"<<i+1<<" = "<<x0<<endl;
			x1 = x2;  x2 = x0;
			i++;
			if(funct(x1)*funct(x0) == 0){ break; }
			xm = (x1 * funct(x2) - x2 * funct(x1)) / (funct(x2) - funct(x1));  //formula
		}while(abs(xm - x0) >= e);
		cout<<"\nRoot of the given equation = "<<setprecision(3)<<x0<<endl;
        cout<<"Iterations required to get the root = "<<i<<endl;
	}
    else{ cout<<"Can not find a root in the given interval"; }
}

int main(){
	float x1 = 0, x2 = 1, e = 0.0001;
	secant(x1, x2, e);
	return 0;
}