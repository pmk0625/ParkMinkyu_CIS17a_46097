/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 7, 2019, 3:30 PM
 * Purpose:  File Head Program
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool openFileIn(fstream &, string);
void showContents(fstream &);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    fstream dataFile;
    
    //Output data
    if (openFileIn(dataFile, "BuildList.txt")){
        cout<<"File Opened... \n";
        cout<<"Now Reading from File \n";
        showContents(dataFile);
        dataFile.close();
        cout<<"Done Reading File \n";
    }else{
        cout<<"File failed to open!"<<endl;
    }
    
    //Exit stage right!
    return 0;
}

bool openFileIn(fstream &file, string name){
    file.open(name, ios::in);
    if (file.fail())
        return false;
    else
        return true;
}

void showContents(fstream &file){
    string line;
    while (file >> line){
        cout<<line<<endl;
    }
}