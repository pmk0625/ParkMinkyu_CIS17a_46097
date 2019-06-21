/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on June 20, 2019, 6:00 PM
 * Purpose:  Celsius Temperature Table
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
int temperature(int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float fahren, celsius;

    //Initialize Variables //Process/Map inputs to outputs

    //Output data
    cout<<temperature(fahren, celsius)<<" Celsius"<<endl;
   
    //Exit stage right!
    return 0;
}

int temperature(int F, int C){
    cout<<"Input the temperature in Fahrenheit to convert to Celsius"<<endl;
    cin>>F;
    C = ((5 * (F - 32))/9);
    cout<<"The temperature "<<F<<" Fahrenheit is converted to = "<<endl;
    return C;
}
