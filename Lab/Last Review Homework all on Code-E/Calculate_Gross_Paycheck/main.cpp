/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on June 25, 2019, 3:30pm
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    float income, ovrTime1, ovrTime2;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    cout<<setprecision(2)<<fixed;
    if (hrsWrkd <= 20){
        income=payRate*hrsWrkd;
        cout<<"$"<<income<<endl;
    }else if (hrsWrkd > 20 && hrsWrkd <= 40){
        ovrTime1=((hrsWrkd-20)*payRate)*1.5;
        income=(20*payRate)+ovrTime1;
        cout<<"$"<<income<<endl;
    }else if (hrsWrkd > 40){
        ovrTime1=(((hrsWrkd-20)-(hrsWrkd-40))*payRate)*1.5;
        ovrTime2=((hrsWrkd-40)*payRate)*2;
        income=(20*payRate)+ovrTime1+ovrTime2;
        cout<<"$"<<income<<endl;
    }
    
    //Output the check
    
    //Exit
    return 0;
}