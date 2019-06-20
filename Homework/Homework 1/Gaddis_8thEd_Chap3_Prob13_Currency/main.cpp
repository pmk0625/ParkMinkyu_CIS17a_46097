/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on June 19, 2019, 8:00 PM
 * Purpose:  Currency
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float YEN_PER_DOLLAR=107.60; //Constant Conversion from Dollar to Yen
const float EUROS_PER_DOLLAR=0.89; //Constant Conversion from Dollar to Euro

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float dollars, yen, euros; //Declare Dollars, Yen and Euros
     
    //Initialize Variables
    cout<<"Enter the amount of dollars you would like to convert"<<endl;
    cin>>dollars;              //Input Dollar to be Converted
    
    //Process/Map inputs to outputs
    yen=dollars*YEN_PER_DOLLAR;     //Dollar to Yen Conversion
    euros=dollars*EUROS_PER_DOLLAR; //Dollar to Euro Conversion
    
    //Output data
    cout<<fixed<<setprecision(2);   //Set 2 Decimal Points
    cout<<"$"<<dollars<<" in Yen = "<<yen<<" Yen"<<endl;        //Display Yen
    cout<<"$"<<dollars<<" in Euros = "<<euros<<" Euros"<<endl;  //Display Euros
    
    //Exit stage right!
    return 0;
}