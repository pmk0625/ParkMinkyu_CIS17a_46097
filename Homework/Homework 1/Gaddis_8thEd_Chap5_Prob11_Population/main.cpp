/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on June 20, 2019, 5:30 PM
 * Purpose:  Population
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float PERCENT=100;

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float population, growth;
    float total;
    int days;
    
    //Initialize Variables
    cout<<"Input the initial population, average daily population increase (percentage)"
            <<" and the number of days to be calculated"<<endl;
    cin>>population>>growth>>days;
    
    //Process/Map inputs and outputs
    if (population < 2 || growth < 0 || days < 0){
        cout<<"Invalid calculation"<<endl;
    }else{
        for (int i=1; i<=days; i++){
            total = population * (growth/PERCENT) * i;
            cout<<"The Growth of this population is shown below"<<endl;
            cout<<total<<endl;
        }
    }
    
    
    //Exit stage right!
    return 0;
}