/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 27, 2019, 5:00 PM
 * Purpose:  Problem 1 Random Sequence
 */

//System Libraries
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
#include "Prob1Random.h"

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

Prob1Random::Prob1Random(const char n, const char* s){
    nset = n;
    set = new char[n];
    freq = new int[n];
    for (int i=0; i<n; i++){
        set[i] = s[i];
        freq[i] = 0;
    }
    numRand = 0;    
    srand(time(NULL));
}
Prob1Random::~Prob1Random(void){
    delete []set;
    delete []freq;
}

char Prob1Random::randFromSet(void){
    char i = rand()%nset;
    freq[i]++;
    numRand++;
    return set[i];
}

int* Prob1Random::getFreq(void) const{
    return freq;
}

char* Prob1Random::getSet(void) const{
    return set;
}

int Prob1Random::getNumRand(void) const{
    return numRand;
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Your code goes here
    char n=5;
    char rndseq[]={18,33,56,79,125};
    int ntimes=100000;
    Prob1Random a(n,rndseq);
    for(int i=1;i<=ntimes;i++)
    {
            a.randFromSet();
    }
    int *x=a.getFreq();
    char *y=a.getSet();
    for(int i=0;i<n;i++)
    {
            cout<<int(y[i])<<" occurred "<<x[i]<<" times"<<endl;
    }
    cout<<"The total number of random numbers is "<<a.getNumRand()<<endl;
    
    
    //Exit stage right!
    return 0;
}