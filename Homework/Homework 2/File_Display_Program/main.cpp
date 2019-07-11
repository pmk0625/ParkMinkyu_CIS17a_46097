/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 7, 2019, 4:00 PM
 * Purpose:  File Display Program
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main () {
    string sentence;
    ifstream dataFile ("BuildList.txt");
    
    if(dataFile.is_open()){
        int count=0;
        cout<<"Opening File... \n";
        while(getline (dataFile,sentence)){
            count++;
            if(count<=24){
                cout << sentence << '\n';
            }else{
                string key;
                cout<<"Enter any key to read more lines"<<endl;
                cin>>key;
                count=0;
            }
        }
        if(count<24){
            cout<<"End of File"<<endl;
        }
        dataFile.close();
    }else{
        cout<<"Unable to open file"<<endl;
    }

    return 0;
}