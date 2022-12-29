//Write a program to perform deletion of whitespaces such as horizontal tab, vertical tab, space, line feed, new line and carriage return from a text file and store the contents of the file without the white spaces on another file.
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file1("program29.txt"); //file should exist
    ofstream file2("program31.txt");
    
    string str;
    while(!file1.eof()){
        file1 >> str; 
        file2 << str; 
    }
    cout<<"contents copied to other file after deleting spaces."<<endl;
    file1.close(); file2.close();
    cout<<"Closing both files"<<endl;
    return 0;
}