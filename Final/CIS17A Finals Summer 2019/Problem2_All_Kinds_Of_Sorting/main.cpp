/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 27, 2019, 6:00 PM
 * Purpose:  Problem 2 All Kinds of Sorting
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <fstream>
using namespace std;

//User Libraries
#include "Prob2Sort.h"

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

template<class T>
T* Prob2Sort<T>::sortArray(const T* s, int size, bool a){
    T* test = new T[size];
    T temp;
    for (int i=0; i<size; i++){
        test[i]=s[i];
    }
    for (int i=0; i<size-1; i++){
        if (a == true){
            if (test[i]>test[i+1]){
                temp=test[i];
                test[i+1]=test[i];
                test[i+1]=temp;
            }
        }else{
            if (test[i]<test[i+1]){
                temp=test[i];
                test[i+1]=test[i];
                test[i+1]=temp;
            }
        }
    }
    return test;
}

template<class T>
T* Prob2Sort<T>::sortArray(const T* str, int x, int y, int col, bool a){
    int size = x*y;
    T* test = new T[size];
    for (int i=0; i<size; i++){
        test[i]=str[i];
    }
    T temp;
    for (int i=0; i<y-1;i++){
        if ((test[i]*x+col)>(test[i+1]*x+col)){
            for (int j=0; j<x; j++){
                temp=test[i*x+j];
                test[i*x+j]=test[(i+1)*x+j];
                test[(i+1)*x+j]=temp;
            }
        }else if((test[i]*x+col)<(test[i+1]*x+col)){
            for (int j=0; j<x; j++){
                temp=test[i*x+j];
                test[i*x+j]=test[(i+1)*x+j];
                test[(i+1)*x+j]=temp;
            }
        }
    }
    return test;
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Your code goes here
    cout<<"The start of Problem 2, the sorting problem"<<endl;
    Prob2Sort<char> rc;
    bool ascending=true;
    ifstream infile;
    infile.open("Problem2.txt",ios::in);
    char *ch2=new char[10*16];
    char *ch2p=ch2;
    while(infile.get(*ch2)){cout<<*ch2;ch2++;}
    infile.close();
    cout<<endl;
    cout<<"Sorting on which column"<<endl;
    int column;
    cin>>column;
    char *zc=rc.sortArray(ch2p,10,16,column,ascending);
    for(int i=0;i<10;i++){
        for(int j=0;j<16;j++){
            cout<<zc[i*16+j];
        }
    }
    delete []zc;
    cout<<endl;
    
    
    //Exit stage right!
    return 0;
}