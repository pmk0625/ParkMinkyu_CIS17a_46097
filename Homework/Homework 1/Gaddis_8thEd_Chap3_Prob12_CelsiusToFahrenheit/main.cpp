/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on June 19, 2019, 7:30 PM
 * Purpose:  Celsius to Fahrenheit
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float fahren, celsius;  //Declare Fahrenheit and Celsius
    
    //Initialize Variables
    cout<<"Input Celsius"<<endl;
    cin>>celsius;           //User input Celsius to convert
    
    //Process/Map inputs to outputs
    fahren=((9*celsius)/5)+32;  //Formula
    
    //Output data
    cout<<celsius<<"C"<<" in Fahrenheit = "<<fahren<<"F"<<endl; //Display Celsius in Fahrenheit
    
    //Exit stage right!
    return 0;
}