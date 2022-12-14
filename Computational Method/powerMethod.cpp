//find eigen values using power method.
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	 float temp, lambda_new, lambda_old=1, error;
	 int order, step=1;
	 cout<<"Enter order of matrix: "; cin>>order;
	 cout<<"Enter tolerable error: "; cin>>error;
	 cout<<"Enter values for matrix: "<<endl;
	 float a[order][order], x[order], xNew[order];
	 for(int i=0; i<order; i++){
		  for(int j=0; j<order; j++){ cout<<"a["<<i<<"]["<<j<<"] = "; cin>>a[i][j]; }
	 }
	 cout<<"Enter initial guess vector:"<<endl;
	 for(int i=0; i<order; i++){ cout<<"x["<<i<<"] = "; cin>>x[i]; }

	 //mulitplication
	up:
	 for(int i=0; i<order; i++){
		  temp = 0.0;
		  for(int j=0; j<order; j++){ temp+= a[i][j] * x[j]; }
		  xNew[i] = temp;
	 }
	 
	 //replacing
	 for(int i=0; i<order; i++){ x[i]= xNew[i]; }
	 
	 //finding largest
	 lambda_new = fabs(x[0]);  //absolute value
	 for(int i=1; i<order; i++){ if(fabs(x[i]) > lambda_new){ lambda_new= fabs(x[i]); } }

	 //Normalization
	 for(int i=0; i<order; i++){ x[i]/=lambda_new; }
	 
	 //Displaying
	 cout<<endl<<endl<<"STEP-"<<step<<endl;
	 cout<<"Eigen value = "<<lambda_new<<endl;
	 cout<<"Eigen vector: ";
	 for(int i=0; i<order; i++){ cout<<x[i]<<"   "; }
	 
	 //checking accuracy
	 if(fabs(lambda_new-lambda_old)>error){
		  lambda_old=lambda_new;
		  step++;
		  goto up;
	 }
	 return 0;
}