/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 20, 2019, 7:00 PM
 * Purpose:  Time Format
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Class Declaration
class Time{
public:
    int hour, min, sec;
};

class MilTime:public Time{
private:
    int milHour,milSec;
public:
    MilTime(int milH, int milS){
        if (milH<0 || milH>2359){
            cout<<"Invalid input"<<endl;
            return;
        }
        if (milS<0 || milS>59){
            cout<<"Invalid Input"<<endl;
            return;
        }
        milHour = milH;
        milSec = milS;
        setTime(milHour, milSec);
    }
    void setTime(int milH, int milS){
        this->hour = (milH/100)%12;
        this->min = milH%100;
        this->sec = milS;
    }
    int getHour(){
        return milHour;
    }
    int getStandHr(){
        return hour;
    }
    int getMin(){
        return min;
    }
    int getSec(){
        return sec;
    }
};


//Execution Begins Here
int main(int argc, char** argv) {
    //Your Code Goes here
    int h, s;
    cout<<"Enter hours in Military Format: "<<endl;
    cin>>h;
    cout<<"Enter seconds: "<<endl;
    cin>>s;
    MilTime time(h, s);
    
    cout<<"Time in Standard Format: "<<endl;
    cout<<endl;
    cout<<time.getStandHr()<<" : "<<time.getMin()<<" : "<<time.getSec();
    if(time.getHour()>=1200){
        cout<<" PM"<<endl;
    }else{
        cout<<" AM"<<endl;
    }
    cout<<endl;
    cout<<"Time in Military Format: "<<endl;
    cout<<endl;
    cout<<time.getHour()<<" "<<time.getSec()<<" seconds"<<endl;
    
    //Exit stage right!
    return 0;
}