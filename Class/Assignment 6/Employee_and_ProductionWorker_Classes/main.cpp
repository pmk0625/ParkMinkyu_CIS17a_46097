/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 20, 2019, 6:20 PM
 * Purpose:  Employee and ProductionWorker Classes
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Class Declaration
class Employee{
private:
    string name, hireDate;
    int empNum;
public:
    Employee(){}
    Employee(const string &name, int empNum, const string &hireDate):name(name), 
    empNum(empNum), hireDate(hireDate){}
    void setName(const string &name){
        this->name = name;
    }
    void setEmpNum(int empNum){
        this->empNum=empNum;
    }
    void setHireDate(string hireDate){
        this->hireDate=hireDate;
    }
    const string &getName()const{
        return name;
    }
    int getEmpNum()const{
        return empNum;
    }
    const string getHireDate()const{
        return hireDate;
    }
};

class ProductionWorker:public Employee{
private:
    int shift; 
    float payRate;
public:
    ProductionWorker(){}
    ProductionWorker(const string &name, int empNum, const string &hireDate, 
    int shift, float payRate):Employee(name, empNum, hireDate), shift(shift), payRate(payRate){}
    void setShift(int shift){
        this->shift=shift;
    }
    void setPayRate(float payRate){
        this->payRate=payRate;
    }
    int getShift()const{
        return shift;
    }
    float getPayRate()const{
        return payRate;
    }
};

//Execution Begins Here
int main(int argc, char** argv) {
    //Your Code Goes here
    cout<<setprecision(2)<<fixed;
    
    ProductionWorker detail;
    detail.setName("Dr. Lehr");
    detail.setHireDate("17 JUNE 2019");
    detail.setEmpNum(13579);
    detail.setPayRate(20);
    detail.setShift(1);
    
    cout<<"Displaying Worker Details: "<<endl;
    cout<<endl;
    cout<<"Name:                      "<<detail.getName()<<endl;
    cout<<"Hire Date:                 "<<detail.getHireDate()<<endl;
    cout<<"Employee Number:           "<<detail.getEmpNum()<<endl;
    cout<<"Pay Rate:                  "<<detail.getPayRate()<<endl;
    cout<<"Shift:                     "<<detail.getShift()<<endl;

    
    //Exit stage right!
    return 0;
}