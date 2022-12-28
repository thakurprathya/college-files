//Write a program to copy contents of a file to another file.
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file1("program29.txt"); //file should exist
    ofstream file2("program30.txt");
    
    string str;
    while(getline(file1, str)){ file2 << str+"\n"; }
    cout<<"contents copied to other file>>"<<endl;
    file1.close(); file2.close();
    cout<<"Closing both files"<<endl;
    return 0;
}