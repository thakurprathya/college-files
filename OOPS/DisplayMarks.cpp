#include <iostream>
using namespace std;

class Student{
  string name, branch, gender;
  int rollno, age, marks[5];
  public:
      void input(){
          cout<<"Enter name: "; cin>>name;
          cout<<"Enter branch: "; cin>>branch;
          cout<<"Enter gender: "; cin>>gender;
          cout<<"Enter rollNo: "; cin>>rollno;
          cout<<"Enter age: "; cin>>age;
          for(int i=0; i<5; i++){
              cout<<"Enter marks for subject"<<i+1<<" out of 100: "; cin>>marks[i];
          }
      }
      void output(){
          float percentage;
          for(int i=0; i<5; i++){ percentage+=marks[i]; }
          percentage/=5.0;
          
          if(percentage>=70){
            cout<<"Name: "<<name<<endl;
            cout<<"Branch: "<<branch<<endl;
            cout<<"Gender: "<<gender<<endl;
            cout<<"Rollno: "<<rollno<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Result: "<<percentage<<endl<<endl;
          }
      }
};

int main(){
    int n;
    cout<<"Enter no. of students in class: ";  cin>>n; cout<<endl;
    Student s[n];
    for(int i=0; i<n; i++){
        s[i].input(); cout<<endl<<endl;
    }
    cout<<"Students with Percentage >= 70 are:"<<endl;
    for(int i=0; i<n; i++){
        s[i].output();
    }
    return 0;
}
