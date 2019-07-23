/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 22, 2019, 9:00 PM
 * Purpose:  Date Exceptions
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Class Declaration
class Date{
public:
    int day, year;
    float month;
    void display(int month, int day, int year){
        cout<<month<<"/"<<day<<"/"<<year;
    }
};

//Execution Begins Here
int main(int argc, char** argv) {
    //Your code goes here
    Date d;
    try{
        cout<<"Enter Day: "<<endl;
        cin>>d.day;
        cout<<"Enter Month: "<<endl;
        cin>>d.month;
        cout<<"Enter Year: "<<endl;
        cin>>d.year;
        if (d.day < 1 || d.day > 31){
            throw d.day;
        }
        if (d.month < 1 || d.month > 12){
            throw d.month;
        }
        else{
            d.display(d.month, d.day, d.year);
        }
    }
    catch (int x){
        cout<<"Exception in Day"<<endl;
    }
    catch (float y){
        cout<<"Exception in Month"<<endl;
    }
    
    //Exit stage right!
    return 0;
}