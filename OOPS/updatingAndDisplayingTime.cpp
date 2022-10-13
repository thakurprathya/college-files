#include <iostream>
using namespace std;

class Time{
    int hours, minutes, seconds;
    public:
        void setTime(int h, int m, int s){
            hours=h; minutes=m; seconds=s;
        }
        void updateTime(){
            while(seconds>=60){ seconds-=60; minutes++; }
            while(minutes>=60){ minutes-=60; hours++; }
            while(hours>=24){ hours-=24; }
        }
        void AddTime(Time obj1, Time obj2){
            hours=obj1.hours + obj2.hours;
            minutes=obj1.minutes + obj2.minutes;
            seconds=obj1.seconds + obj2.seconds;
            updateTime();
        }
        void getTime(){
            updateTime();
            cout<<"Time is-> "<<hours<<":"<<minutes<<":"<<seconds<<endl;
        }
};

int main(){
    Time t1, t2, t3;
    t1.setTime(12,17,30);
    t2.setTime(14,30,36);
    t3.AddTime(t1,t2);
    t3.getTime();
    return 0;
}

//another method is
// #include <iostream>
// using namespace std;

// class Time{
//     int hours, minutes, seconds;
//     public:
//         Time(){ hours=0; minutes=0; seconds=0; }
//         void setTime(int h, int m, int s){
//             hours+=h;
//             minutes+=m;
//             seconds+=s;
//         }
//         void updateTime(){
//             while(seconds>=60){ seconds-=60; minutes++; }
//             while(minutes>=60){ minutes-=60; hours++; }
//             while(hours>=24){ hours-=24; }
//         }
//         void getTime(){
//             updateTime();
//             cout<<"Time is-> "<<hours<<":"<<minutes<<":"<<seconds<<endl;
//         }
// };

// int main(){
//     Time obj1;
//     obj1.setTime(10,17,30);
//     obj1.setTime(14,30,30);
//     obj1.getTime();
//     return 0;
// }