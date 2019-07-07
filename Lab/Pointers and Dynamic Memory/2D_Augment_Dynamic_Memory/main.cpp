#include <iostream>

using namespace std;

int **getData(int &,int &);//Get the Matrix Data

void printDat(const int * const *,int,int);//Print the Matrix

int **augment(const int * const *,int,int);//Augment the original array

void destroy(int **,int);//Destroy the Matrix, i.e., reallocate memory

int main(){
	//your code here
	int row, col;
	
	int **array = new int*[row];
    for (int i=0; i<row; i++){
        array[i] = new int[col];
    }
	
	array = getData(row, col);
	
	printDat(array, row, col);
	
	**augment (array, row, col);
	
	return 0;
}

int **getData(int &row,int &col){
    int **a = new int*[row];
    for (int i=0; i<row; i++){
        a[i] = new int[col];
    }
    cin>>row>>col;
    
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin >> a[i][j];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return a;
}

void printDat(const int * const *a,int row,int col){
    for (int i=0; i<row-1; i++){
        for (int j=0; j<col+1; j++){
            cout<<a[i][col]<<" ";
        }
    }
    cout<<endl;
}

int **augment(const int * const *a,int row,int col){
    for (int i=0; i<col; i++){
        for (int j=0; j<row; j++){
            cout<<a[j][i]<<" ";
        }
    }
    cout<<endl;
}

void destroy(int **a,int row){
    int col;
    for (int i=0; i<row; i++){
        delete []a[i];
        for (int j=0; j<col; j++){
            delete []a[j];
        }
    }
    delete []a;
}
