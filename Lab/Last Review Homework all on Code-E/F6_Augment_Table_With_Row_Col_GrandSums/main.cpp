/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on June 27, 2019, 2:00pm
 * Purpose:  Sum Rows, Sum Columns, Grand Sum of an integer array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <iomanip> //setw(10)
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;  //Max Columns much larger than needed.

//Function Prototypes Here
void read(int [][COLMAX],int &,int &);//Prompt for size then table
void sum(const int [][COLMAX],int,int,int[][COLMAX]);//Sum rows,col,grand total
void print(const int [][COLMAX],int,int,int);//Either table can be printed

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //Max Rows much larger than needed
    int array[ROW][COLMAX]={};  //Declare original array
    int augAry[ROW][COLMAX]={}; //Actual augmented table row+1, col+1
    int row,col;                
    
    //Input the original table
    read(array,row,col);
    
    //Augment the original table by the sums
    sum(array,row,col,augAry);
    
    //Output the original array
    cout<<endl<<"The Original Array"<<endl;
    print(array,row,col,10);//setw(10)
    
    //Output the augmented array
    cout<<endl<<"The Augmented Array"<<endl;
    print(augAry,row+1,col+1,10);//setw(10)
    
    //Exit
    return 0;
}

void read(int array[][COLMAX],int &row,int &col){
    cout<<"Input a table and output the Augment row,col and total sums."<<endl;
    cin>>row>>col;
    cout<<"First input the number of rows and cols. <20 for each"<<endl;
    cout<<"Now input the table.";
    cout<<endl;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin>>array[i][j];
        }
    }
}

void sum(const int array[][COLMAX],int row,int col,int augAry[][COLMAX]){
    int total=0;
    int grand=0;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            augAry[i][j]=array[i][j];
            total+=array[i][j];
        }
        augAry[i][col]=total;
        grand+=total;
        total=0;
    }
    for (int i=0; i<col; i++){
        for (int j=0; j<row; j++){
            augAry[j][i]=array[j][i];
            total+=array[j][i];
        }
        augAry[row][i]=total;
        total=0;
    }
    augAry[row][col]=grand;
}

void print(const int array[][COLMAX],int row,int col,int size){
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout<<setw(size)<<array[i][j];
        }
        cout<<endl;
    }
}