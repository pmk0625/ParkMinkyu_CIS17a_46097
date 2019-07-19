/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 18, 2019, 6:00 PM
 * Purpose:  Date
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int NUM_MONTHS = 12;

//Function Prototypes

//Class Declaration
class Date
{
 private:
    int month, day, year;
public:
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    int getMonth() const;
    string getMonth2() const;
    int getDay() const;
    int getYear() const;
};

void Date::setMonth(int m){
    month = m;
}

void Date::setDay(int d){
    day = d;
}

void Date::setYear(int y){
    year = y;
}

int Date::getMonth() const{
    return month;
}

string Date::getMonth2() const{
    string months[NUM_MONTHS] = { "January", "February", "March", "April", "May",
    "June", "July", "August", "September", "October", "November", "December"};
    if (month == 1){
        months[0];
    }else if (month == 2){
        months[1];
    }else if (month == 3){
        months[2];
    }else if (month == 4){
        months[3];
    }else if (month == 5){
        months[4];
    }else if (month == 6){
        months[5];
    }else if (month == 7){
        months[6];
    }else if (month == 8){
        months[7];
    }else if (month == 9){
        months[8];
    }else if (month == 10){
        months[9];
    }else if (month == 11){
        months[10];
    }else if (month == 12){
        months[11];
    }
    return months[month-1];
}

int Date::getDay() const{
    return day;
}

int Date::getYear() const{
    return year;
}


//Execution Begins Here
int main(int argc, char** argv) {
    //Your code code here
    Date display;
    int month, day, year;
    
    string months[NUM_MONTHS] = { "January", "February", "March", "April", "May",
    "June", "July", "August", "September", "October", "November", "December"};
    
    cout<<"This program will display Month, Day, and Year in three different formats"<<endl;
    cout<<endl;
    cout<<"Please enter the Month in numbers"<<endl;
    cin>>month;
    if (month < 1 || month > 12){
        cout<<"Input invalid, please re-enter between 1 - 12"<<endl;
        cin>>month;
    }
    cout<<"Please enter the Day"<<endl;
    cin>>day;
    if (day < 1 || day > 31){
        cout<<"Input invalid, please re-enter between 1 - 31"<<endl;
        cin>>day;
    }
    cout<<"Please enter the Year"<<endl;
    cin>>year;
    cout<<endl;
    
    display.setMonth(month);
    display.setDay(day);
    display.setYear(year);
    
    cout<<"Here is the Month, Day, and Year you've inputted"<<endl;
    cout<<display.getMonth()<<"/"<<display.getDay()<<"/"<<display.getYear()<<endl;
    cout<<display.getMonth2()<<" "<<display.getDay()<<", "<<display.getYear()<<endl;
    cout<<display.getDay()<<" "<<display.getMonth2()<<" "<<display.getYear()<<endl;
    
    //Exit stage right!
    return 0;
}