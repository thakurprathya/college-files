#include <iostream>
using namespace std;

float productTerm(int i, float value, float x[]){
    float product = 1;
    for (int j=0; j<i; j++){  product *= (value - x[j]);  }
    return product;
}
float dividedDifference(float value, float x[], float y[][10], int n){
    float sum = y[0][0];
    for (int i=1; i<n; i++){ sum += (productTerm(i, value, x) * y[0][i]); }
    return sum;
}

int main(){
    int n = 6;
    float value, sum, y[10][10];
    float x[] = { 0, 1, 2, 4, 5, 6 };
    for(int i=0; i<n ;i++){ cout<<"value for x[i]="<<x[i]<<" : "; cin>>y[i][0]; }
    
    cout<<"Enter the value at which you want to calc the result: "; cin>>value;
    cout<<"\nValue at "<<value<<" is "<<dividedDifference(value, x, y, n)<<endl;
    return 0;
}