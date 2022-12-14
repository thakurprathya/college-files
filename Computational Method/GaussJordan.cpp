//inverse of system of linear equation by gauss jordan method (inversing a matrix)
// C++ program to find the inverse of Matrix.
#include <iostream>
#include <vector>
using namespace std;

void PrintMatrix(float** ar, int n, int m){
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){ cout<<ar[i][j]<<" "; }cout<<endl;
	}
	return;
}
void PrintInverse(float** ar, int n, int m){
    for (int i = 0; i < n; i++) {
        for (int j = n; j < m; j++){ printf("%.3f  ", ar[i][j]); }cout<<endl;
    }
    return;
}
void InverseOfMatrix(float** matrix, int order){
    cout<<endl<<"=== Matrix ==="<<endl;
	PrintMatrix(matrix, order, order);

	float temp;
	for (int i=0; i<order; i++){  //creating augmented matrix
		for (int j=0; j<2*order; j++){ if(j == (i + order)){ matrix[i][j] = 1; } }
	}
	for (int i=order-1; i>0; i--){  //interchanging row & columns and starting from last row
		if (matrix[i - 1][0] < matrix[i][0]){
			float* temp = matrix[i];
			matrix[i] = matrix[i - 1];
			matrix[i - 1] = temp;
		}
	}
    cout<<endl<<"=== Augmented Matrix ==="<<endl;
	PrintMatrix(matrix, order, order * 2);

	for (int i = 0; i < order; i++){  // Replacing row by sum of itself and a constant multiple of another row of the matrix
		for (int j = 0; j < order; j++){
			if (j != i){
				temp = matrix[j][i] / matrix[i][i];
				for (int k = 0; k < 2 * order; k++){ matrix[j][k] -= matrix[i][k] * temp; }
			}
		}
	}
	for (int i = 0; i < order; i++) { // Multiplying each row by a nonzero integer and Divide row element by the diagonal element
		temp = matrix[i][i];
		for (int j = 0; j < 2 * order; j++){ matrix[i][j] = matrix[i][j] / temp; }
	}
    cout<<endl<<"=== Inverse Matrix ==="<<endl;
	PrintInverse(matrix, order, 2 * order);
	return;
}

int main(){
	int order=3;
	float** matrix = new float*[10];  //creating dynamic 2d matrix
	for(int i = 0; i < 10; i++){ matrix[i] = new float[10](); }  //()at end is used for initialzing to 0.

    for(int i=0; i<order; i++){
        for(int j=0; j<order; j++){
            cout<<"Enter value for matrix["<<i<<"]["<<j<<"] :"; cin>>matrix[i][j];
        }
    }
	InverseOfMatrix(matrix, order);
	return 0;
}
