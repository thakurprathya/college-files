#include <iostream>
using namespace std;
 
int main(){
    const int n=4, m=5;
    int matrix[n][m] ={
        {0 , 0 , 3 , 0 , 4 },
        {2, 0 , 5 , 7 , 0 },
        {0 , 0 , 0 , 9, 0 },
        {0 , 2 , 6 , 0 , 0 }
    };
 
    int size = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){ if(matrix[i][j]!=0){ size++; } }
    }
    //creating sparseMatrix
    int sparseMatrix[3][size], k=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] != 0){
                sparseMatrix[0][k] = i;
                sparseMatrix[1][k] = j;
                sparseMatrix[2][k] = matrix[i][j];
                k++;
            }
        }
    }
    //printing
        cout<<"Sparsed Matrix of the following matrix is: "<<endl;
        cout<<"row:    "; for(int j=0; j<size; j++){ cout<<" "<<sparseMatrix[0][j]; } cout<<endl; 
        cout<<"column: "; for(int j=0; j<size; j++){ cout<<" "<<sparseMatrix[1][j]; } cout<<endl; 
        cout<<"value:  "; for(int j=0; j<size; j++){ cout<<" "<<sparseMatrix[2][j]; } cout<<endl; 
    return 0;
}