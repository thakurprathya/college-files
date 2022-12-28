/*Create a base class shape, use this class to store two double type value. Derive 2 classes triangle and rectangle. Add to base class a member function getdata to initialize base class data members and another member function display to compute and display area of figures. Make display a virtual function and redefine this function in derived classes. Using these 3 classes design a program that will accept driven of a triangle or rectangle interactively and display the area.*/
#include<iostream>
using namespace std;

class shape{
    public:
        double base, height;
        void getData(){ cout<<"Enter base & height: ";  cin>>base>>height; }
        virtual void display() = 0;
};
class triangle : public shape{
    public:
        void display(){ cout<<"Area of triangle is: "<<(0.5)*base*height<<endl; }
};
class rectangle : public shape{
    public:
        void display(){ cout<<"Area of rectangle is: "<<base*height<<endl; }
};

int main(){
    int c;
    while(1){
        cout<<"\n##### 1. Area of Triangle ######"<<endl;
        cout<<"##### 2. Area of Rectangle #####"<<endl;
        cout<<"##### 3. Exit #####"<<endl;
        cout<<"Enter your choice: "; cin>>c;
        if(c==1){
            triangle obj;
            obj.getData();  obj.display();
        }
        else if(c==2){
            rectangle obj;
            obj.getData(); obj.display();
        }
        else if(c==3){ exit(1); }
        else{ cout<<"Wrong choice! Try again"<<endl; }
    }
    return 0;
}