/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 7, 2019, 4:45 PM
 * Purpose:  Sentence Filter
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

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string fileName;
    char ch;
    
    fstream dataFile("Sentence.txt", ios::out);
    ifstream inFile;
    ofstream outFile("NewSentence.txt");
    
    //Output data
    cout<<"Please Type a sentence and be sure to end it with a period. \n";
    cin.get(ch);
    while (ch != '.'){
        dataFile.put(ch);
        cin.get(ch);
    }
    dataFile.put(ch);
    
    dataFile.close();
    
    cout<<"Enter a file name to convert: (Sentence.txt) \n";
    cin>>fileName;
    
    inFile.open(fileName);
    
    if (inFile){
        inFile.get(ch);
        
        outFile.put(toupper(ch));
        
        while (inFile){
            inFile.get(ch);
            outFile.put(tolower(ch));
            
            if (ch == '\n'){
                inFile.get(ch);
                outFile.put(toupper(ch));
            }
        }
        inFile.close();
        outFile.close();
        
        cout<<"File Conversion is finished. \n";
    }else
        cout<<"Cannot Open File... "<<fileName<<endl;
    
     
    
    //Exit stage right!
    return 0;
}