/*Design 3 classes (student, exam, result) the student class has data member rollno and name, create exam by inheriting 
student class, the exam class has data member representing the marks scored in 6 subjects. derive class result from the 
exam and has its own data member total marks.*/
#include<iostream>
using namespace std;

class student{
    string name;
    int rollNo;
    public:
        void getData(){ cout<<"Enter Name & rollNo of student: "; cin>>name>>rollNo; }
        void showData(){ cout<<"Name:"<<name<<"  Rollno:"<<rollNo<<endl; }
};
class exam: public student{
    public:
        int marks[6];
        void getData(){
            for(int i=0; i<6; i++){ cout<<"Enter marks for subject-"<<i+1<<" out of 100:"; cin>>marks[i]; }
        }
};
class result: public exam{
    int totalMarks;
    public:
        result(){ totalMarks=0; }
        void calc(){ for(int i=0; i<6; i++){ totalMarks+= marks[i]; } }
        void showData(){ cout<<"Total Marks:"<<totalMarks<<endl; }
};

int main(){
    int n; cout<<"Enter no of students: "; cin>>n;
    result stud[n];
    for(int i=0; i<n; i++){
        stud[i].student::getData();  stud[i].exam::getData(); stud[i].calc();
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        stud[i].student::showData();  stud[i].result::showData(); cout<<endl;
    }
    return 0;
}