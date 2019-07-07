#include <iostream>

using namespace std;

int *getData(int &);//Read the array

int *augment(int *,int);//Augment and copy the original array


int main(){
	//your code here
	int size;
	
	int *array=getData(size);
	
	*augment(array, size);
	
	
	return 0;
}

int *getData(int &size){
    cin>>size;
    return &size;
}

int *augment(int *ary,int size){
    int fix=0;;
    ary = new int [size];
    for(int i=0; i<size-1; i++){
        cin>>ary[i];
        fix = ary[i];
        cout<<fix<<" ";
    }
    cout<<fix+1<<endl;
    for(int i=-1; i<size-1; i++){
        fix = ary[i];
        cout<<fix<<" ";
    }
    cout<<fix+1;
}

