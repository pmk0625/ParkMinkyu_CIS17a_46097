/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 8, 2019, 5:15 PM
 * Purpose:  Array/File Functions
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int ARRAY_SIZE=10;
const int NAME_SIZE=20;

//Function Prototypes
void arrayToFile(char[], int[], int);
void fileToArray(char[], int[], int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int array1[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[ARRAY_SIZE];
    char fileName[NAME_SIZE];
    
    int* pointer1;
    int* pointer2;
    
    pointer1 = array1;
    pointer2 = array2;
    
    //Output data
    cout<<"Enter name of the file... \n";
    cin.getline(fileName, NAME_SIZE);
    arrayToFile(fileName, array1, ARRAY_SIZE);
    fileToArray(fileName, array2, ARRAY_SIZE);
    
    for (int i=0; i<ARRAY_SIZE; i++){
        cout<<pointer1[i]<<" ";
    }
    
    //Exit stage right!
    return 0;
}

void arrayToFile(char file[], int pointer[], int size){
    fstream dataFile;
    dataFile.open(file, ios::in | ios::binary);
    for (int i=0; i<size; i++){
        dataFile.write(reinterpret_cast<char *>(pointer), sizeof(pointer));
    }
    dataFile.close();
}

void fileToArray(char file[], int pointer[], int size){
    fstream dataFile;
    dataFile.open(file, ios::out | ios::binary);
    for (int i=0; i<size; i++){
        dataFile.read(reinterpret_cast<char *>(pointer), sizeof(pointer));
    }
    dataFile.close();
}