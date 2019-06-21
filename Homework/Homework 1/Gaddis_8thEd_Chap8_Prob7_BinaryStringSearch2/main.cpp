/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on June 20, 2019, 8:00 PM
 * Purpose:  Binary String Search
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int NUM_NAMES = 20;

//Function Prototypes
void prntAry(string [],int,int);
void sort(string [], int);
bool binSrch(string [], int, string);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string names[NUM_NAMES]={"Collins, Bill", "Smith, Bart", "Allen, Jim", 
    "Griffin, Jim", "Stamey, Marty", "Rose, Geri", "Taylor, Terri", "Johnson, Jill",
    "Aliison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean", "Weaver, Jim", 
    "Pore, Bob", "Rutherford, Greg", "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
    "Pike, Gordon", "Holland, Beth"};
    
    //Initialize Variables
    string name;
    bool found;
    sort(names, NUM_NAMES);
    
    //Process/Map inputs to outputs
    cout<<"Input Employee Name"<<endl;
    getline(cin, name);
    
    prntAry(names, NUM_NAMES, 10);
    
    found = binSrch(names, NUM_NAMES, name);
    
    //Output data
    if(found){
        cout<<"Employee Name: "<<name<<" is found"<<endl;
    }else{
        cout<<"Employee Name does not exist"<<endl;
    }
    
    
    //Exit stage right!
    return 0;
}

void prntAry(string a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void sort(string names[], int size){
    int minIndex;
    string minValue;
    for (int i=0; i<(size-1); i++){
        minIndex = i;
        minValue = names[i];
        for (int index = i+1; index < size; index++){
            if (names[index] < minValue){
                minValue = names[index];
                minIndex = index;
            }
        }
        names[minIndex] = names[i];
        names[i] = minValue;
    }
}

bool binSrch(string names[], int size, string value){
    int index, position;
    index=0;
    position=1;
    bool found = false;
    
    while(index < size && !found){
        if (names[index] == value){
            found = true;
            position = index;
        }
        index++;
    }return found;
}