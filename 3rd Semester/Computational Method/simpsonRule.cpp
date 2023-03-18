//simpson 1/3 rule
#include<iostream>
#include<math.h>
using namespace std;

int main(){
 float lower, upper, integrationForm=0.0, stepSize, k;
 int subInterval;

 cout<<"Enter lower limit of integration x0: "; cin>>lower;
 cout<<"Enter upper limit of integration x1: "; cin>>upper;
 cout<<"Enter number of sub intervals: "; cin>>subInterval;

 stepSize = (upper - lower)/subInterval;
 integrationForm = (1/(1+pow(lower,2))) + (1/(1+pow(upper,2)));

 for(int i=1; i<=subInterval-1; i++){
      k = lower + i*stepSize;
      if(i%2==0){ integrationForm += (2 * (1/(1+pow(k,2)))); }
      else{ integrationForm += (4 * (1/(1+pow(k,2)))); }
 }
 integrationForm *= (stepSize/3);
 cout<<endl<<"Required value of integration is: "<< integrationForm;
 return 0;
}