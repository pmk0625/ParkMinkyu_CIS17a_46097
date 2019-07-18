#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Function Prototype

//Constant Variable

struct payInfo
{
    string name;
    int hours;
    float payRate, gross;
};

int main(){
    //your code here
    int NUM_EMP;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"This program calculates gross pay"<<endl;
    cout<<endl;
    cout<<"Enter the number of employees"<<endl;
    cin>>NUM_EMP;
    
    string company, address;
    company = "mLehr.co";
    address = "4800 Magnolia Ave, Riverside, CA 92506";
    payInfo workers[NUM_EMP];
    int i;
    
    cout<<endl;
    cout<<"Enter the Name of the employee, hours worked by "<<NUM_EMP<<" employees and their hourly rate. \n";
    cout<<endl;
    for (i=0; i<NUM_EMP; i++){
        cout<<"Input the name of the employee: "<<endl;
        cin>>workers[i].name;
        cout<<"Hours worked by employee #"<<i+1<<": "<<endl;
        cin>>workers[i].hours;
        cout<<"Hourly pay rate for employee #"<<i+1<<": "<<endl;
        cin>>workers[i].payRate;
        cout<<endl;
    }
    
    for (i=0; i<NUM_EMP; i++){
        if (workers[i].hours <= 40){
            workers[i].gross = workers[i].hours * workers[i].payRate;
            cout<<"Employee #"<<i+1<<": $"<<workers[i].gross<<endl;
        }else if (workers[i].hours > 40 && workers[i].hours <= 50){
            workers[i].gross = (40 * workers[i].payRate) + ((workers[i].hours - 40) * (workers[i].payRate * 2));
            cout<<"Employee #"<<i+1<<": $"<<workers[i].gross<<endl;
        }else if (workers[i].hours > 50){
            workers[i].gross = (40 * workers[i].payRate) + (10 * (workers[i].payRate * 2)) + ((workers[i].hours - 50) * (workers[i].payRate * 3));
            cout<<"Employee #"<<i+1<<": $"<<workers[i].gross<<endl;
        }
    }
    
    for (i=0; i<NUM_EMP; i++){
        cout<<endl;
        cout<<"Displaying Checks"<<endl;
        cout<<"Company   "<<company<<endl;
        cout<<"Address   "<<address<<endl;
        cout<<"Name: "<<workers[i].name<<setw(16)<<"Amount:   "<<workers[i].gross<<endl;
        cout<<"Signature "<<"___________________________"<<endl;
    }
    
    
    return 0;
}