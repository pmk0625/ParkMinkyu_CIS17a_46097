/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on June 25, 2019, 1:00 am
 * Purpose:  Cross one-side or the other
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char shape;
    int size;
    
    //Initialize Variables
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>size>>shape;
     
    //Output data
    if (shape=='x' && size%2==1){
        for (int row=1;row<=size; row++){
        for (int col=1; col<=size; col++){
            if (row==col){
                cout<<size+1-row;
            }else if (row+col==size+1){
                cout<<row;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
        }
    }else if (shape=='x' && size%2==0){
        for (int row=1;row<=size; row++){
        for (int col=1; col<=size; col++){
            if (row==col){
                cout<<row;
            }else if (row+col==size+1){
                cout<<size+1-row;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
        }
    }else if (shape=='b' && size%2==1){
        for (int row=1;row<=size; row++){
        for (int col=1; col<=size; col++){
            if (row==col){
                cout<<size+1-row;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
        }
    }else if (shape=='b' && size%2==0){
        for (int row=1;row<=size; row++){
        for (int col=1; col<=size; col++){
            if (row==col){
                cout<<row;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
        }
    }else if (shape=='f' && size%2==1){
        for (int row=1;row<=size;row++){
        for (int col=1;col<=size;col++){
            if (row+col==size+1){
                cout<<row;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
        }
    }else if (shape=='f' && size%2==0){
        for (int row=1;row<=size;row++){
        for (int col=1;col<=size;col++){
            if (row+col==size+1){
                cout<<size+1-row;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
        }
    }
    
    //Exit stage right!
    return 0;
}