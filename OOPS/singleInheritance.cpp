/*Create a base class basicInfo with data members name, rollno, gender and member functions get data and display, 
Derive a class physicalFit from basicInfo which has the data member height, weight and member functions getdata and 
display, display all the information using object of derived class as array of objects with min students 5*/
#include<iostream>
using namespace std;

class basicInfo{
    string name,gender;
    int rollNo;
    public:
        void getData(){ cout<<"Enter Name, Gender, Rollno: "; cin>>name>>gender>>rollNo; }
        void display(){ cout<<"Info= Name:"<<name<<" Gender:"<<gender<<" RollNo:"<<rollNo<<endl; }
};
class physicalFit : public basicInfo{
    float height, weight;
    public:
        void getData(){ cout<<"Enter Height and Weight of student in cm and kg: "; cin>>height>>weight; }
        void display(){ cout<<"Physical Info= Height:"<<height<<" Weight:"<<weight<<endl; }
};

int main(){
    int n; cout<<"Enter no. of students: "; cin>>n;
    physicalFit obj[n];
    for(int i=0; i<n; i++){
         obj[i].basicInfo::getData(); obj[i].physicalFit::getData();
    }
    cout<<endl;
    for(int i=0; i<n; i++){
         obj[i].basicInfo::display(); obj[i].physicalFit::display(); cout<<endl;
    }
    return 0;
}