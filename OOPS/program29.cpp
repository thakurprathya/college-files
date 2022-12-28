//Write a program to read a text file and display its content on screen.
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file("program29.txt"); //file should exist
    cout<<"Contents of the file are: "<<endl;
    
    string str;
    while(getline(file, str)){ cout<<str<<endl; }
    file.close();
    return 0;
}