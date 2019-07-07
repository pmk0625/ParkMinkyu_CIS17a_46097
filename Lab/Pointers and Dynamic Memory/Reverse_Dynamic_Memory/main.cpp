#include <iostream>

using namespace std;

//Functions
int *getData(int &);                //Fill the array
int *sort(const int *,int );              //Sort smallest to largest

int main(){
	//your code here
	int *array, size;
	
	*getData(size);
    
    *sort(array, size);
    
	
	return 0;
}


int *getData(int &size){
    int *arr=new int[size];
    cin>>size;
    return &size;
}

int *sort(const int *ptr,int size){
    int *arr=new int[size];
    int temp, min, fix;
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }
    for (int i=0; i<size-1; i++){
        min=i;
        for (int j=i+1; j<size; j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        fix=arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<fix+1<<endl;
    
    for (int i=0; i<size-1; i++){
        min=i;
        for (int j=i+1; j<size; j++){
            if (arr[j]>arr[min]){
                min=j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        fix=arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<fix-1;
    delete []arr;
    return arr;
}