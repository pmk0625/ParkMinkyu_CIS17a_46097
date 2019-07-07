#include <iostream>
#include <iomanip>

using namespace std;

//functions

int *getData(int &size);         //Return the array size and the array

void prntDat(int *,int);    //Print the integer array

float *median(int *,int);  //Fill the median Array with the Float array size, the median, and the integer array data


int main(){
	//your code here
	int size;
	int *ptr;
	
	*getData(size);
	
	ptr = new int[size];
	
	prntDat(ptr, size);
	
	*median(ptr, size);
	
	delete []ptr;
	
	return 0;
}

int *getData(int &size){
    cin>>size;
    return &size;
}

void prntDat(int *pointer, int size){
    int fix;
    for (int count=0; count<size; count++){
        cin>>pointer[count];
    }
    for (int count=0; count<size-1; count++){
        fix=pointer[count];
        cout<<fix<<" ";
    }
    cout<<fix+1;
    cout<<endl;
}

float *median(int *pointer, int size){
    float *sort = new float[size];
    float fix;
    for (int i=0; i<size; i++){
        sort[i] = pointer[i];
    }
    for (int i=size-1; i>0; i--){
        for (int j=0; j<i; j++){
            if (sort[j] > sort[j+1]){
                float temp=sort[j];
                sort[j]=sort[j+1];
                sort[j+1]=temp;
            }
        }
    }
    cout<<setprecision(2)<<fixed;
    float med = 0;
    if (size%2==0){
        med = (sort[size/2] + sort[(size/2)-1])/2;
        cout<<size+2<<" "<<med<<" ";
    }else{
        med = sort[size/2];
        cout<<size+2<<" "<<med<<" ";
    }
    for (int i=0; i<size-1; i++){
        fix = pointer[i];
        cout<<fix<<" ";
    }
    cout<<fix+1;
    delete []sort;
    return &med;
}
