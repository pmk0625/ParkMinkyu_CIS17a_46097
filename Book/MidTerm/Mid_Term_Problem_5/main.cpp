//Libraries
#include <iostream>//I/O Library
#include <cmath>   //Math Library
using namespace std;

//Constants

//Structure


//Function Prototypes


//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    short n1, factr1;
    int n2, factr2;
    long n3, factr3;
    float n4, factr4;
    double n5, factr5;
    
    //Initialize Variables
    factr1=1;
    factr2=1;
    factr3=1;
    factr4=1;
    factr5=1;
    
    n1=15;
    n2=16;
    n3=25;
    n4=34;
    n5=170;
    
    //Process/Map inputs to outputs
    for (int i=1; i<=n1 ; i++){
        factr1*=i;
    }
    
    for (int i=1; i<=n2 ; i++){
        factr2*=i;
    }
    
    for (int i=1; i<=n3 ; i++){
        factr3*=i;
    }
    
    for (int i=1; i<=n4 ; i++){
        factr4*=i;
    }
    
    for (int i=1; i<=n5 ; i++){
        factr5*=i;
    }
    
    //Output data
    cout<<"This program Calculates Maximum Factorial that can be calculated"<<endl;
    cout<<endl;
    cout<<"For SHORT variable: Maximum = "<<n1<<"! = "<<factr1<<endl;
    cout<<endl;
    cout<<"For INT variable: Maximum = "<<n2<<"! = "<<factr2<<endl;
    cout<<endl;
    cout<<"For LONG variable: Maximum = "<<n3<<"! = "<<factr3<<endl;
    cout<<endl;
    cout<<"For FLOAT variable: Maximum = "<<n4<<"! = "<<factr4<<endl;
    cout<<endl;
    cout<<"For DOUBLE variable: Maximum = "<<n5<<"! = "<<factr5<<endl;
    cout<<endl;
    
    //Exit stage right!
    return 0;
}