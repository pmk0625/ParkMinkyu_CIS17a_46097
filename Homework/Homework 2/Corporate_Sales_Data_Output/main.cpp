/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 6, 2019, 9:30 PM
 * Purpose:  Corporate Sales Data
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

//User Libraries
struct SalesData
{
    string name;
    float first, second, third, fourth;
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
    
    fstream dataFile;
    
    //Initialize Variables  
    cout<<"Opening file... \n";
    dataFile.open("salesreport.txt", ios::out);
    cout<<"Now writing in the file. \n";
    
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
    dataFile<<setprecision(2);
    dataFile<<" East 1: "<<East.first<<" East 2: "<<East.second<<" East 3: "<<East.third<<"  East 4: "<<East.fourth<<endl;
    
    dataFile<<setprecision(2);
    dataFile<<" West 1: "<<West.first<<" West 2: "<<West.second<<" West 3: "<<West.third<<" West 4: "<<West.fourth<<endl;
    
    dataFile<<setprecision(2);
    dataFile<<" North 1: "<<North.first<<" North 2: "<<North.second<<" North 3: "<<North.third<<" North 4: "<<North.fourth<<endl;
    
    dataFile<<setprecision(2);
    dataFile<<" South 1: "<<South.first<<" South 2: "<<South.second<<" South 3: "<<South.third<<" South 4: "<<South.fourth<<endl;
    
    dataFile<<setprecision(2);
    dataFile<<" East Total: "<<East.total<<" East Average: "<<East.average<<endl;
    
    dataFile<<setprecision(2);
    dataFile<<" West Total: "<<West.total<<" West Average: "<<West.average<<endl;
    
    dataFile<<setprecision(2);
    dataFile<<" North Total: "<<North.total<<" North Average: "<<North.average<<endl;
    
    dataFile<<setprecision(2);
    dataFile<<" South Total: "<<South.total<<" South Average: "<<South.average<<endl;
    
    dataFile.close();
    cout<<"Finished writing in the file. \n";
    
    //Exit stage right!
    return 0;
}
