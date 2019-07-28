/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 27, 2019, 7:30 PM
 * Purpose:  Problem 3 Spreadsheet Stuff
 */

//System Libraries
#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>
using namespace std;

//User Libraries
#include "Prob3Table.h"

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

template<class T>
Prob3Table<T>::Prob3Table(char *fn, int r, int c){
    std::ifstream infile;
    
    rows = r;
    cols = c;
    rowSum = new int[r];
    colSum = new int[c];
    
    infile.open(fn, std::ios::in);
    table = new int[r*c];

    for (int i=0; i<rows*c; i++){
        infile>>table[i];
        infile.close();
        calcTable();
    }
}

template<class T>
void Prob3Table<T>::calcTable(void){
    grandTotal=0;
    for (int r=0; r<rows; r++){
        rowSum[r]=0;
        for (int c=0; c<cols; c++) {
            rowSum[c] += table[r*cols+c];
        }
    }
    for (int i=0; i<cols; i++) {
        colSum[i]=0;
        for (int j=0; j<rows; j++){
            colSum[i] += table[j*cols+i];
        }
        grandTotal += colSum[i];
    }
}

template<class T>
class Prob3TableInherited:public Prob3Table<T>{
protected:
    T *augTable; //Augmented Table with sums
public:
    Prob3TableInherited(char *filename,int rows,int cols):Prob3Table<T>(filename, rows, cols){
        augTable = new T[(rows+1) * (cols+1)];
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                augTable[i*(cols+1)+j] = Prob3Table<T>::table[i*cols+j];
            }
        }
        int r, c;
        c=cols;
        for(r=0; r<rows; r++){
            augTable[r*(cols+1)+c] = Prob3Table<T>::rowSum[r];
        }
        r=rows;
        for(c=0; c<cols; c++){
            augTable[r*(cols+1)+c] = Prob3Table<T>::colSum[c];
        }
        augTable[(rows+1)*(cols+1)-1] = Prob3Table<T>::getGrandTotal();
    }
    ~Prob3TableInherited(){delete [] augTable;};
    const T *getAugTable(void){return augTable;};
};


//Execution Begins Here
int main(int argc, char** argv) {
    //Your code goes here
    cout<<"Entering problem number 3"<<endl;
    int rows=5;
    int cols=6;
    Prob3TableInherited<int> tab("Problem3.txt",rows,cols);
    const int *naugT=tab.getTable();
    for(int i=0;i<rows;i++)
    {
            for(int j=0;j<cols;j++)
            {
                    cout<<naugT[i*cols+j]<<" ";
            }
            cout<<endl;
    }
    cout<<endl;
    const int *augT=tab.getAugTable();
    for(int i=0;i<=rows;i++)
    {
            for(int j=0;j<=cols;j++)
            {
                    cout<<augT[i*(cols+1)+j]<<" ";
            }
            cout<<endl;
    }
    
    
    //Exit stage right!
    return 0;
}