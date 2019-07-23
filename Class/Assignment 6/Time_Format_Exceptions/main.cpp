/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 22, 2019, 9:40 PM
 * Purpose:  Time Format Exceptions
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Class Declaration
class BadHour:public exception{
public:
    const char* what() const throw(){
        return "Invalid Hours entered\n";
    }
};

class BadSeconds:public exception{
public:
    const char* what() const throw(){
        return "Invalid Seconds entered\n";
    }
};

class MilTime{
private:
    int hours;
    int seconds;
public:
    MilTime(){
        hours = 0;
        seconds = 0;
    }
    MilTime(int hoursIn,int secondsIn){
        if(hoursIn<0 || hoursIn>2359){
            BadHour h;
            throw h;
        }
        if(secondsIn<0 || secondsIn>59){
            BadSeconds s;
            throw s;
        }
        hours = hoursIn;
        seconds=secondsIn;
    }
    void setHours(int hoursIn){
        if(hoursIn<0 || hoursIn>2359){
            BadHour h;
            throw h;
        }
        hours = hoursIn;
    }
    void setSeconds(int secondsIn){
        if(secondsIn<0 || secondsIn>59){
            BadSeconds s;
            throw s;
        }
        seconds=secondsIn;
    }
    void printTime(){
        cout<<"Hours : "<<hours<<endl;
        cout<<"Seconds : "<<seconds<<endl;
    }
};


//Execution Begins Here
int main(int argc, char** argv) {
    //Your Code Goes here
    int h, s;
    
    try{
        MilTime time;
        cout<<"Enter time: (in Military Format) "<<endl;
        cin>>h;
        cout<<"Enter seconds: "<<endl;
        cin>>s;
        time.setHours(h);
        time.setSeconds(s);
        time.printTime();
    }
    catch (exception& e){
        cout<<e.what();
    }
    
    //Exit stage right!
    return 0;
}