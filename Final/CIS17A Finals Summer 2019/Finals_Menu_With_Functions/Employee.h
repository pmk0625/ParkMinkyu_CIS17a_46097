/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Employee.h
 * Author: pmk0625
 *
 * Created on July 28, 2019, 5:37 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

//Class
class Employee
{
public:
        Employee(char[],char[],float);  //Constructor
        float  CalculatePay(float,int); //Procedure
        float  getGrossPay(float,int);  //Procedure
        float  getNetPay(float);        //Procedure
        void   toString();              //Procedure
        int    setHoursWorked(int);     //Procedure
        float  setHourlyRate(float);    //Procedure
private:
        double Tax(float);      //Utility Procedure
        char   MyName[20];      //Property
        char   JobTitle[20];    //Property
        float  HourlyRate;      //Property
        int    HoursWorked;     //Property
        float  GrossPay;        //Property
        float  NetPay;          //Property
};


#endif /* EMPLOYEE_H */

