//Write a program to read the class object of student info such as name, age, sex, height and weight from the keyboard and to store them on a specific file using read() and write() functions. Again the same file is opened for reading and displaying contents of file on screen.
#include<iostream>
#include<fstream>
using namespace std;

class studentInfo{
    string name, sex;
    float height, weight;
    int age;
    public:
        void getData(){
            cout<<"Enter Name, age, sex: "; cin>>name>>age>>sex;
            cout<<"Enter height and weight in centimeters: "; cin>>height>>weight;
        }
        string setStr(){
            string st="\nName: "+name+"\nAge: "+to_string(age)+"\tSex: "+sex+"\nHeight: "+to_string(height)+"\tWeight: "+to_string(weight)+"\n";
            return st;
        }
};

int main(){
    int n; cout<<"Enter number of students whose data you want to store: "; cin>>n;
    studentInfo obj[n];
    ofstream file1("program32.txt");
    for(int i=0; i<n; i++){
        obj[i].getData();
        string s= obj[i].setStr();
        file1 << s;
    }
    file1.close(); cout<<"Data stored & file closed!"<<endl<<endl;
    
    ifstream file2("program32.txt");
    cout<<"Contents of file are: "<<endl;
    string str;
    while(getline(file2, str)){ cout<<str<<endl; }
    file2.close();
    return 0;
}