/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 27, 2019, 9:00 PM
 * Purpose:  Problem 4 Savings Account Class
 */

//System Libraries
#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
using namespace std;

//User Libraries
#include "SavingsAccount.h"

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

SavingsAccount::SavingsAccount(float f){
    if (f<0){
        this->Balance=0;
    }else{
        this->Balance=f;
    }
    this->FreqDeposit=0;
    this->FreqWithDraw=0;
}

void SavingsAccount::Transaction(float f){
    if (f>0)
        Deposit(f);
    else 
        Withdraw(f);
}

float SavingsAccount::Total(float f, int time){
    float tot=Balance;
    for (int i=0; i<time; i++){
        tot += (tot*time);
    }
    return tot;
}

float SavingsAccount::TotalRecursive(float rate, int year){
    Balance=Balance+(Balance*rate);
    if (year > 1){
        Balance=TotalRecursive(rate,year-1);
    }
    return Balance;
}

float SavingsAccount::Withdraw(float f){
    if (f!=0){
        if ((Balance+f)>=0){
            Balance+=f;
            FreqWithDraw++;
        }
    }else{
        cout<<"WithDraw not Allowed"<<endl;
    }
}

float SavingsAccount::Deposit(float f){
    Balance+=f;
    FreqDeposit++;
}

void SavingsAccount::toString(){
    cout<<"Balance = "<<Balance<<endl;
    cout<<"Withdraw = "<<FreqWithDraw<<endl;
    cout<<"Deposit = "<<FreqDeposit<<endl;
}


//Execution Begins Here
int main(int argc, char** argv) {
    //Your code goes here
    SavingsAccount mine(-300);

    for(int i=1;i<=10;i++)
    {
            mine.Transaction((float)(rand()%500)*(rand()%3-1));
    }
    mine.toString();
    cout<<"Balance after 7 years given 10% interest = "
            <<mine.Total((float)(0.10),7)<<endl;
    cout<<"Balance after 7 years given 10% interest = "
            <<mine.TotalRecursive((float)(0.10),7)
            <<" Recursive Calculation "<<endl;
    
    
    //Exit stage right!
    return 0;
}