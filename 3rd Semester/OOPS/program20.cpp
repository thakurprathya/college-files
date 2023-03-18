/*Create a class list with 2 pure virtual functions store() and retrieve(). To store a value call store and to retrieve call retrieve. Derive 2 classes stack and queue and override store and retrieve*/
#include<iostream>
#include<vector>
using namespace std;

class list{
    public:
        vector<int> vec;
        virtual void store() = 0;
        virtual void retrieve() = 0;
};
class stack : public list{
    public:
        void store(){
            int n; cout<<"Enter no. of elements you want to insert in stack: "; cin>>n;
            for(int i=0; i<n; i++){
                int a; cout<<"Enter ele"<<i+1<<": "; cin>>a;
                vec.push_back(a);
            }
        }
        void retrieve(){
            cout<<"Stack is: ";
            for(int i=vec.size()-1; i>=0; i--){ cout<<vec[i]<<" "; }
            cout<<endl;
        }
};
class queue : public list{
    public:
        void store(){
            int n; cout<<"Enter no. of elements you want to insert in queue: "; cin>>n;
            for(int i=0; i<n; i++){
                int a; cout<<"Enter ele"<<i+1<<": "; cin>>a;
                vec.push_back(a);
            }
        }
        void retrieve(){
            cout<<"Queue is: ";
            for(int i=0; i<vec.size(); i++){ cout<<vec[i]<<" "; }
            cout<<endl;
        }
};

int main(){
    int c;
    while(1){
        cout<<"\n##### 1. Stack ######"<<endl;
        cout<<"##### 2. Queue #####"<<endl;
        cout<<"##### 3. Exit #####"<<endl;
        cout<<"Enter your choice: "; cin>>c;
        if(c==1){
            stack obj;
            obj.store();  obj.retrieve();
        }
        else if(c==2){
            queue obj;
            obj.store();  obj.retrieve();
        }
        else if(c==3){ exit(1); }
        else{ cout<<"Wrong choice! Try again"<<endl; }
    }
    return 0;
}