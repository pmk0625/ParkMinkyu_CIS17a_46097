/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 28, 2019, 7:50 PM
 * Purpose:  Problem 6 Conversion
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Your Code Goes Here
    cout<<"To convert decimal to binary, we use divide by 2 rule."<<endl;
    cout<<"To convert decimal side to binary, we use multiply by 2 rule."<<endl;
    cout<<"Binary can become Octal by pairing 3 bits."<<endl;
    cout<<"Binary can become Hexadecimal by pair 4 bits."<<endl;
    cout<<"A = 10 = 1010"<<endl;
    cout<<"B = 11 = 1011"<<endl;
    cout<<"C = 12 = 1100"<<endl;
    cout<<"D = 13 = 1101"<<endl;
    cout<<"E = 14 = 1110"<<endl;
    cout<<"F = 15 = 1111"<<endl;
    cout<<endl;
    cout<<"See attached PDF file."<<endl;
    
    cout<<setw(20)<<left<<"Base 10"<<setw(20)<<left<<"Base 2"<<setw(20)<<left
            <<"Base 8"<<setw(20)<<left<<"Base 16"<<endl;
    cout<<setw(20)<<left<<"3.75"<<setw(20)<<left<<"11.11"<<setw(20)<<left
            <<"3.6"<<setw(20)<<left<<"3.C"<<endl;
    cout<<setw(20)<<left<<"0.7"<<setw(20)<<left<<"0.1011"<<setw(20)<<left
            <<"0.54"<<setw(20)<<left<<"0.B"<<endl;
    cout<<setw(20)<<left<<"89.9"<<setw(20)<<left<<"1011001.111001"<<setw(20)<<left
            <<"131.71"<<setw(20)<<left<<"59.E4"<<endl;
    
    //Exit stage right!
    return 0;
}