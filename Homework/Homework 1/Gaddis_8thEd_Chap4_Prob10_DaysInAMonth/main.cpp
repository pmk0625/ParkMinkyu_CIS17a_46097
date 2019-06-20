/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on June 19, 2019, 8:15 PM
 * Purpose:  Days in a Month
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float month, year;
    float day;
    
    //Initialize Variables
    cout<<"Input the Month"<<endl;
    cin>>month;
    cout<<"Input the Year"<<endl;
    cin>>year;
    
    //Process/Map inputs and outputs
    if (month <= 0 || month >= 13){
        cout<<"Month is invalid"<<endl;
    }else if (month == 2){
        bool leap = ((year/400 == 0) || ((year/100 != 0) && (year/4 == 0)));
        if (leap=false){
            day = 28;
            cout<<"Total days in month "<<month<<" of "<<year<<" = " <<day<<endl;
        }else{
            day = 29;
            cout<<"Total days in month "<<month<<" of "<<year<<" = " <<day<<endl;
        }
    }else if (month == 4 || month == 6 || month == 9 || month == 11){
        day = 30;
        cout<<"Total days in month "<<month<<" of "<<year<<" = " <<day<<endl;
    }else{
        day = 31;
        cout<<"Total days in month "<<month<<" of "<<year<<" = " <<day<<endl;
    }  
    
    //Exit stage right!
    return 0;
}