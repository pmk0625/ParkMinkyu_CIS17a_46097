/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on June 25, 2019, 12:45 pm
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void print(string);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string numb;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>numb;
    
    //Histogram Here
    print(numb);
    
    //Exit
    return 0;
}

void print(string numb){
    char array;
    for(int i=0; i<4; i++){
        array=numb[3-i];
        cout<<array<<" ";
        if(array >= '0' && array <= '9'){
            for(int j=0; j< array-'0'; ++j){
                cout<<"*";
            }
            cout<<endl;
        }else{
            cout<<"?"<<endl;
        }
    }
}