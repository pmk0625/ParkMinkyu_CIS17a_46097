/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 18, 2018, 10:20 PM
 * Purpose:  Day of the Year
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

// Class declaration
class DayOfYear{
public:
    int day;
    string Month;
    DayOfYear(int dayEntered){
        day = dayEntered;   
    }
    void print(){
        if(day >= 1 && day <= 31){
            cout<<"January "<<day<<endl;
        }
        if(day >= 32 && day <= 59){
            cout<<"February "<<(day-31)<<endl;
        }
        if(day >= 60 && day <= 90){
            cout<<"March "<<(day-59)<<endl;
        }
        if(day >= 91 && day <= 120){
            cout<<"April "<<(day-90)<<endl;
        }
        if(day >= 121 && day <= 151){
            cout<<"May "<<(day-120)<<endl;
        }
        if(day >= 152 && day <= 181){
            cout<<"June "<<(day-151)<<endl;
        }
        if(day >= 182 && day <= 212){
            cout<<"July "<<(day-181)<< endl;
        }
        if(day >= 213 && day <= 243){
            cout<<"August "<<(day-212)<<endl;
        }
        if(day >= 244 && day <= 273){
            cout<<"September "<<(day - 243)<<endl;
        }
        if(day >= 274 && day <= 304){
            cout<<"October "<<(day-273)<< endl;
        }
        if(day >= 305 && day <= 334){
            cout<<"November "<<(day-304)<<endl;
        }
        if(day >= 335 && day <= 365){
            cout<<"December "<<(day-334)<<endl;
        }
    }   
};

//Execution Begins Here
int main(int argc, char** argv) {
    //Your code goes here
    int day;
    cout<<"Enter the Day of the Year: "<<endl;
    cin>>day;

    DayOfYear d(day);
    d.print();
    
    //Exit stage right!
    return 0;
}