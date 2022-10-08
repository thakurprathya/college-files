#include<iostream>
#include<vector>
using namespace std;

class Matrix{
    public:
        int n,m;
        void input(){
            cout<<"Enter no. of rows; "; cin>>this->n;
            cout<<"Enter no. of columns; "; cin>>this->m;
            if(this->n!=this->m){
                cout<<"matrix multiplication not possible"<<endl;
                return;
            }
            vector<vector<int>>  matrixA(this->n, vector<int>(this->m));
            vector<vector<int>>  matrixB(this->n, vector<int>(this->m));
            vector<vector<int>>  Resultant(this->n, vector<int>(this->m,0));
            cout<<"\nEnter elements for first matrix :"<<endl;
            for(int i=0; i<this->n; i++){
                for(int j=0; j<this->m; j++){
                    cout<<"enter ele"<<i+1<<j+1<<" :";
                    int a; cin>>a;
                    matrixA[i][j]=a;
                }
            }
            cout<<"\nEnter elements for second matrix :"<<endl;
            for(int i=0; i<this->n; i++){
                for(int j=0; j<this->m; j++){
                    cout<<"enter ele"<<i+1<<j+1<<" :";
                    int a; cin>>a;
                    matrixB[i][j]=a;
                }
            }
            for(int i=0; i<this->n; i++){
                for(int j=0; j<this->m; j++){
                    for(int k=0; k<this->n; k++){
                        Resultant[i][j]+= matrixA[i][k] * matrixB[k][j];
                    }
                }
            }
            cout<<"\nResultant Matrix is: "<<endl;
            for(int i=0; i<this->n; i++){
                for(int j=0; j<this->m; j++){
                    cout<<Resultant[i][j]<<" ";  
                }cout<<endl;
            }
        }
};

int main(){
    Matrix obj1;
    obj1.input();
    return 0;
}