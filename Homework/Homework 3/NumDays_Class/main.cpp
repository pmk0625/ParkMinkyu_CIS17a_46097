/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 18, 2018, 10:20 PM
 * Purpose:  NumDays Class
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
class NumDays{
private:
    int elementHour;
    float elementDays;
public:
    NumDays();
    NumDays(int paramHr);
    int getHour();
    float getDays();
    void setHour(int paramHr);
    int operator+(NumDays &objectElement); // Here we will do add
    int operator-(NumDays &objectElement); // Here we will do subtract
    NumDays operator++(); // prefix
    NumDays operator++(int); // Here we will postfix
    NumDays operator--(); // Here we will prefix
    NumDays operator--(int); // Here we will postfix
    void print();
};

NumDays::NumDays(){
    elementHour = 0; 
    elementDays = 0;
}

NumDays::NumDays(int paramHr){
    elementHour = paramHr; 
    elementDays = elementHour / 8.0;
}

int NumDays::getHour(){
    return elementHour;
}

float NumDays::getDays(){
    return elementDays;
}
  
void NumDays::setHour(int paramHr){
    elementHour = elementHour;
    elementDays = elementHour / 8.0;
}

int NumDays::operator+(NumDays &objectElement){
    return elementHour + objectElement.getHour();
}

int NumDays::operator-(NumDays &objectElement){
    return elementHour - objectElement.getHour();
}

void NumDays::print(){
    cout << "Hour " << elementHour << " elementDays " << elementDays << endl;
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Your code goes here
    NumDays day1(10);
    cout <<"day1: "; day1.print();
    NumDays day2(20);
    cout <<"day2: "; day2.print();

    cout << "day2 + day1 = " <<day2 + day1 << " Hours"<<endl; 
    cout << "day2 - day1 = " <<day2 - day1 << " Hours"<<endl; 
    
    //Exit stage right!
    return 0;
}