/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 28, 2019, 4:30 PM
 * Purpose:  Problem 5 Employee Class
 */

//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries
#include "Employee.h"

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

Employee::Employee(char s1[], char s2[], float rate){
    strcpy(MyName, s1);
    strcpy(JobTitle, s2);
    
    if (rate<0 || rate>200){
        cout<<"Unacceptable Hourly Rate"<<endl;
        HourlyRate=0;
    }else{
        HourlyRate=rate;
    }
    HoursWorked=0;
    GrossPay=0;
    NetPay=0;
}

float Employee::setHourlyRate(float rate){
    if (rate<0 || rate>200){
        cout<<"Unacceptable Hourly Rate"<<endl;
        HourlyRate=0;
    }else{
        HourlyRate=rate;
    }
    return HourlyRate;
}

int Employee::setHoursWorked(int rate){
    if (rate<0 || rate>84){
        cout<<"Unacceptable Hours Worked"<<endl;
        HoursWorked=0;
    }else{
        HoursWorked=rate;
    }
    return HoursWorked;
}

float Employee::getGrossPay(float rate, int hour){
    if (hour<=40){
        GrossPay = rate*hour;
    }else if (hour>40 && hour <=50){
        GrossPay = (40*rate)+((hour-40)*(rate*1.5));
    }else if (hour>50){
        GrossPay = (40*rate)+(10*(rate*1.5))+((hour-50)*(rate*2));
    }
    return GrossPay;
}

float Employee::getNetPay(float pay){
    float tax=0;
    
    if (pay<=500){
        tax = pay*0.1;
    }else if (pay>500 && pay<=1000){
        tax = pay*0.2;
    }else{
        tax = pay*0.3;
    }
    NetPay = pay-tax;
    return NetPay;
}

float Employee::CalculatePay(float rate, int hour){
    return getNetPay(getGrossPay(setHourlyRate(rate), setHoursWorked(hour)));
}

void Employee::toString(){
    cout<<"Name = "<<MyName<<" Job Title = "<<JobTitle<<" Hourly Rate = "<<HourlyRate
            <<" Hours Worked = "<<HoursWorked<<" Gross Pay = "<<GrossPay<<" Net Pay = "<<NetPay<<endl;
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Your code goes here
    Employee Mark("Mark","Boss",215.50);
    Mark.setHoursWorked(-3);
    Mark.toString();
    Mark.CalculatePay(Mark.setHourlyRate(20.0),
            Mark.setHoursWorked(25));
    Mark.toString();
    Mark.CalculatePay(Mark.setHourlyRate(40.0),
            Mark.setHoursWorked(25));
    Mark.toString();
    Mark.CalculatePay(Mark.setHourlyRate(60.0),
            Mark.setHoursWorked(25));
    Mark.toString();

    Employee Mary("Mary","VP",50.0);
    Mary.toString();
    Mary.CalculatePay(Mary.setHourlyRate(50.0),
            Mary.setHoursWorked(40));
    Mary.toString();
    Mary.CalculatePay(Mary.setHourlyRate(50.0),
            Mary.setHoursWorked(50));
    Mary.toString();
    Mary.CalculatePay(Mary.setHourlyRate(50.0),
            Mary.setHoursWorked(60));
    Mary.toString();
    
    
    //Exit stage right!
    return 0;
}