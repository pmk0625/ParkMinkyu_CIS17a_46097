/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 6, 2019, 8:00 PM
 * Purpose:  Speaker's Bureau
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
struct SpeakerData
{
    string name, number, topic;
    float fee;
};

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int NUM_ARR = 10;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    SpeakerData speaker[NUM_ARR];
    
    //Initialize Variables
    char choice;
    do{
        cout<<"Please choose from the Menu"<<endl;
        cout<<"1. Enter Speaker's information"<<endl;
        cout<<"2. Print Speaker's information"<<endl;
        cout<<"3. Exit Menu"<<endl;
        cin>>choice;
        switch (choice){
            case '1': 
            {
                for (int i=0; i<NUM_ARR; i++){
                    cout<<"Please input speaker's Name"<<endl;
                    cin>>speaker[i].name;
                    cout<<"Please input speaker's Telephone Number (Please exclude -'s or spaces)"<<endl;
                    cin>>speaker[i].number;
                    cout<<"Please input speaker's Speaking Topic in one word"<<endl;
                    cin>>speaker[i].topic;
                    cout<<"Please input speaker's Fee Required"<<endl;
                    cin>>speaker[i].fee;
                    if (speaker[i].fee < 0){
                        cout<<"Speaker's Fee Required cannot be negative"<<endl;
                        cout<<"Please re-input speaker's Fee Required"<<endl;
                        cin>>speaker[i].fee;
                    }
                }
            }
            break;
            case '2':
            {
                cout<<setprecision(2)<<fixed;
                for (int i=0; i<NUM_ARR; i++){
                    cout<<"Printing Speaker's information"<<endl;
                    cout<<"Speaker's Name:     "<<speaker[i].name<<endl;
                    cout<<"Speaker's Number:   "<<speaker[i].number<<endl;
                    cout<<"Speaker's Topic:    "<<speaker[i].topic<<endl;
                    cout<<"Speaker's Fee Req:  $"<<speaker[i].fee<<endl;
                }
            }
            break;
        }
    }while (choice != '3');
                
    
    
    //Process/Map inputs to outputs
    
    
    //Output data
    
    //Exit stage right!
    return 0;
}