/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 22, 2019, 10:30 PM
 * Purpose:  Minimum/Maximum Templates
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
T maximum(T n1, T n2){
    if (n1>n2){
        return n1;
    }else{
        return n2;
    }
}

template<class T>
T minimum(T n1, T n2){
    if (n1<n2){
        return n1;
    }else{
        return n2;
    }
}


//Execution Begins Here
int main(int argc, char** argv) {
    //Your Code Goes here
    int num1, num2;
    cout<<"Enter two whole numbers to compare: "<<endl;
    cin>>num1>>num2;
    cout<<"Minimum of "<<num1<<" and "<<num2<<" = "<<minimum(num1, num2)<<endl;
    cout<<"Maximum of "<<num1<<" and "<<num2<<" = "<<maximum(num1, num2)<<endl;
    
    cout<<setprecision(5)<<endl;
    float n1, n2;
    cout<<"Enter two (5)decimal numbers to compare: "<<endl;
    cin>>n1>>n2;
    cout<<"Minimum of "<<n1<<" and "<<n2<<" = "<<minimum(n1, n2)<<endl;
    cout<<"Maximum of "<<n1<<" and "<<n2<<" = "<<maximum(n1, n2)<<endl;
    
    //Exit stage right!
    return 0;
}