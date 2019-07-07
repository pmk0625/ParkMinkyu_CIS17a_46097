#include <iostream>

using namespace std;

int **getData(int &,int &);        //Return the 2-D array and its size.

void destroy(int **,int,int);       //Deallocate memory

int sum(const int * const *, int,int);    //Return the Sum

int main(){
	//your code here
	int row, col;
	
	int **arr=getData(row, col);
	
	destroy(arr, row, col);
	
	sum(arr, row, col);
	
	return 0;
}

int **getData(int &row,int &col){
    cin>>row;
    cin>>col;
    //Allocate rows
    int **a = new int*[row];
    //Allocate columns
    for (int i=0; i<row; i++){
        a[row] = new int[col];
    }
    //Fill the array
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>a[row][i];
            cout<<a[row][i]<<" ";
        }
        cout<<endl;
    }
    return a;
}

void destroy(int **a,int row,int col){
    for (int i=0; i<row; i++){
        delete []a[i];
        for (int j=0; j<col; j++){
            delete []a[j];
        }
    }
    delete []a;
}

int sum(const int * const *a, int row,int col){
    int sum=0;
    for (int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            sum += a[i][j];
            cout<<sum;
        }
    }
    return sum;
}