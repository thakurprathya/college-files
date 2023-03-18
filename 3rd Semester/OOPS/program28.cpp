//Write a program to read set of lines from the keyboard and to store it on a specified file.
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream file("program28.txt");
    char c='y';
    while(c=='y' || c=='Y'){
        string str; cout<<"Enter data to be stored in file: ";
        getline(cin, str);
        file << str;
        cout<<"Want to Store more?? "; cin>>c;
        if(c!='y' && c!='Y'){ file.close(); cout<<"Closing File!"<<endl; }
        cin.ignore();
    }
    return 0;
}