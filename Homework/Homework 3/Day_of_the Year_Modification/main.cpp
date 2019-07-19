/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 18, 2018, 10:20 PM
 * Purpose:  Day of the Year Modification
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
private:
    int year, day;
    string month;
    int count=0;
public:
    DayOfYear& operator ++();
    DayOfYear& operator --();
    DayOfYear(char month[], int day){
        for(int i=0;i<12;i++){
            if(month_names(i) == month){
                if( day > 0 && day <= month_days(i)){
                    this->month = month;
                    this->day = day;
                    year =0;
                    for(int j=0;j<count;j++){
                        year=year+ month_days(j);
                    }
                    year=year+day;
                    cout<<"The Day Of The Year: "<<year<<endl;
                }else{
                    cout<<"Input invalid"<<endl;
                    exit(0);
                } 
            }
            count++;
        }
    }
public:
    string month_names(int month_number){
        string month_names[] ={"January","February","March","April", "May","June","July","August","September","October","November","December"};
        return month_names[month_number];
    }
public:
    int month_days(int month_number){
        int month_days[]={31,28,31,30,31,30,31,31,30,31,30,31};
        return month_days[month_number];
    }
};

//Execution Begins Here
int main(int argc, char** argv) {
    //Your code goes here
    char month[12];
    int day;
    
    cout<<"This program will display Day of The Year Modification"<<endl;
    cout<<"Enter The Month of Year: "<<endl;
    cin>>month;
    cout<<"Enter the Day Of The Month: "<<endl;
    cin>>day;
    cout<<endl;
    cout<<"Displaying the Day of the Year: "<<endl;
    cout<<endl;
    DayOfYear obj(month,day);
    
    //Exit stage right!
    return 0;
}