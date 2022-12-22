/*Create a class first with the data members bookno, bookname & member functions getdata and putdata. create a class 
second with the data members authorname, publisher and member functions getdata and showdata, derive a class third from 
first and second with the data members noofpages, yearofpublication & display all the info using array of object of 
third class.*/
#include<iostream>
using namespace std;

class first{
    string bookName;
    int bookNo;
    public:
        void getData(){ cout<<"Enter bookName & bookNumber: ";  cin>>bookName>>bookNo; }
        void putData(){ cout<<"BookName:"<<bookName<<" bookNumber:"<<bookNo<<endl;  }
};
class second{
    string authorName, publisher;
    public:
        void getData(){ cout<<"Enter authorName & publisher: "; cin>>authorName>>publisher; }
        void showData(){ cout<<"Author:"<<authorName<<" Publisher:"<<publisher<<endl; }
};
class third : public first, public second{
    int noOfPages, yearOfPublication;
    public:
        void getData(){ cout<<"Enter noOfPages & yearofPublication: "; cin>>noOfPages>>yearOfPublication; }
        void display(){ cout<<"No.ofPages:"<<noOfPages<<" yearofPublication:"<<yearOfPublication<<endl; }
};

int main(){
    int n; cout<<"Enter no of books: "; cin>>n;
    third obj[n];
    for(int i=0; i<n; i++){
        obj[i].first::getData(); obj[i].second::getData(); obj[i].third::getData();
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        obj[i].putData(); obj[i].showData(); obj[i].display(); cout<<endl;
    }
    return 0;
}