#include<iostream>
#include<math.h>
using namespace std;

class Area{
    public:
        float area(int radius){ cout<<"Area for circle is: "; return M_PI*radius*radius; }
        float area(double length, double width){ cout<<"Area for rectangle is: "; return length*width; }
        float area(int height, int  base){ cout<<"Area for triangle is: "; return 0.5*base*height; }
};

int main(){
    Area obj1;
    cout<<obj1.area(5)<<endl;
    cout<<obj1.area(2.0, 1.0)<<endl;
    cout<<obj1.area(2,3);
    return 0;
}