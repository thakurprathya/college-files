//program for solivng ordinary differential equation by Runge-Kutta Method.
//Only first-order ordinary differential equations can be solved by using the Runge Kutta 4th order method.
// C++ program of th above approach
#include<iostream>
using namespace std;

float dydx(float x, float y){  //dy/dx
	return((x - y)/(x + y));   //a simple differential equation
}

int main(){
	float x0, y0, x, y, xn, h;
    float m1, m2, m3, m4;
    cout<<"Enter value for x0, y0, xn and h :"<<endl;
    cin>>x0>>y0>>xn>>h;

    x=x0, y=y0;
    cout<<endl<<"X\tY"<<endl;
    while(x < xn){
        m1 = h*dydx(x0, y0);
		m2 = h*dydx(x0 + 0.5*h, y0 + 0.5*m1);
		m3 = h*dydx(x0 + 0.5*h, y0 + 0.5*m2);
		m4 = h*dydx(x0 + h, y0 + m3);

        y+= (1.0/6.0)*(m1 + 2*m2 + 2*m3 + m4);
        x+= h;
        cout<<x<<"\t"<<y<<endl;
    }
	return 0;
}