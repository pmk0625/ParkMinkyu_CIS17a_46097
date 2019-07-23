/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 23, 2019, 6:30 PM
 * Purpose:  Total Template
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
T Total(int n){
    T sum = T(), value;
    for (int i=0; i<n; i++){
        cout<<"Enter value "<<(i+1)<<":"<<endl;
        cin>>value;
        sum += value;
    }
    return sum;
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Your Code Goes here
    cout<<setprecision(2)<<fixed;
    cout<<"Enter numbers: "<<endl;
    float num=Total<int>(5);
    cout<<"Sum = "<<num<<endl;
    
    //Exit stage right!
    return 0;
}