#include <iostream>

using namespace std;

int *getData(int &size);             //Return the array size and the array from the inputs

int *sumAry(int *,int);   //Return the array with successive sums

int main(){
	//your code here
	int *arr, size;
	
	*getData(size);
	
	*sumAry(arr, size);
	
	return 0;
}

int *getData(int &size){
    cin>>size;
    return &size;
}

int *sumAry(int *ptr,int size){
    ptr = new int (size);
    int sum=0;
    int fix;
    for (int i=0; i<size-1; i++){
        cin>>ptr[i];
        cout<<ptr[i]<<" ";
        fix = ptr[i];
    }
    cout<<fix+1;
    cout<<endl;
    for (int i=0; i<size-1; i++){
        sum += ptr[i];
        fix = sum+ptr[i];
        cout<<sum<<" ";
    }
    cout<<fix+1;
    return ptr;
    delete(ptr);
}