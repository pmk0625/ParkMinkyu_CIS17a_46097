/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 23, 2019, 6:00 PM
 * Purpose:  Absolute Value Template
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
template<class T>
T AbsoluteValue(T a){
    if(a>=0){
        return a;
    }else{
        return (-1*a);
    }
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Your Code Goes here
    float value;
    
    cout<<setprecision(2)<<endl;
    cout<<"Please enter a value: "<<endl;
    cin>>value;
    
    cout<<"Absolute Value of "<<value<<" = "<<AbsoluteValue(value)<<endl;
    
    //Exit stage right!
    return 0;
}