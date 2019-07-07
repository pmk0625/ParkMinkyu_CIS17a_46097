/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 6, 2019, 9:30 PM
 * Purpose:  Corporate Sales Data
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
struct SalesData
{
    string name;
    float first, second, third,fourth;
    float total, average;
};

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    SalesData East;
    SalesData West;
    SalesData North;
    SalesData South;
      
    //Initialize Variables
    cout<<"Please input Sales Amount for East Division"<<endl;
    cout<<"Enter in format: First, Second, Third, and Fourth"<<endl;
    cin>>East.first>>East.second>>East.third>>East.fourth;
    
    cout<<"Please input Sales Amount for West Division"<<endl;
    cout<<"Enter in format: First, Second, Third, and Fourth"<<endl;
    cin>>West.first>>West.second>>West.third>>West.fourth;
    
    cout<<"Please input Sales Amount for North Division"<<endl;
    cout<<"Enter in format: First, Second, Third, and Fourth"<<endl;
    cin>>North.first>>North.second>>North.third>>North.fourth;
    
    cout<<"Please input Sales Amount for South Division"<<endl;cin.ignore();
    cout<<"Enter in format: First, Second, Third, and Fourth"<<endl;
    cin>>South.first>>South.second>>South.third>>South.fourth;
    
    
    //Process/Map inputs to outputs
    East.total = East.first + East.second + East.third + East.fourth;
    East.average = East.total / 4;
    
    West.total = West.first + West.second + West.third + West.fourth;
    West.average = West.total / 4;
    
    North.total = North.first + North.second + North.third + North.fourth;
    North.average = North.total / 4;
    
    South.total = South.first + South.second + South.third + South.fourth;
    South.average = South.total / 4;
    
    //Output data
    cout<<setprecision(2)<<fixed;
    cout<<endl;
    cout<<"Quarterly Sales from East Division   =  $"<<East.first<<" $"<<East.second<<" $"
            <<East.third<<" $"<<East.fourth<<endl;
    cout<<"The total Sales from East Division   = $"<<East.total<<endl;
    cout<<"The average Sales from East Division = $"<<East.average<<endl;
    cout<<endl;
    cout<<"Quarterly Sales from West Division   = $"<<West.first<<" $"<<West.second<<" $"
            <<West.third<<" $"<<West.fourth<<endl;
    cout<<"The total Sales from West Division   = $"<<West.total<<endl;
    cout<<"The average Sales from West Division = $"<<West.average<<endl;
    cout<<endl;
    cout<<"Quarterly Sales from North Division   = $"<<North.first<<" $"<<North.second<<" $"
            <<North.third<<" $"<<North.fourth<<endl;
    cout<<"The total Sales from North Division   = $"<<North.total<<endl;
    cout<<"The average Sales from North Division = $"<<North.average<<endl;
    cout<<endl;
    cout<<"Quarterly Sales from South Division   = $"<<South.first<<" $"<<South.second<<" $"
            <<South.third<<" $"<<South.fourth<<endl;
    cout<<"The total Sales from South Division   = $"<<South.total<<endl;
    cout<<"The average Sales from South Division = $"<<South.average<<endl;
    
    //Exit stage right!
    return 0;
}