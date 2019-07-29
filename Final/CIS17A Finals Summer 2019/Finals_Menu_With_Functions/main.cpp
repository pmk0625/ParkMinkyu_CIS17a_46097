/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 28, 2019, 8:30 PM
 * Purpose:  Menu using Functions,
 *           extend for Finals
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

//User Libraries
#include "Prob1Random.h"
#include "Prob2Sort.h"
#include "Prob3Table.h"
#include "SavingsAccount.h"
#include "Employee.h"

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void menu();
void prblm1();
void prblm2();
void prblm3();
void prblm4();
void prblm5();
void prblm6();

//Function Prototype

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                        Class Problem 1
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
Prob1Random::Prob1Random(const char n, const char* s){
    nset = n;
    set = new char[n];
    freq = new int[n];
    for (int i=0; i<n; i++){
        set[i] = s[i];
        freq[i] = 0;
    }
    numRand = 0;    
    srand(time(NULL));
}
Prob1Random::~Prob1Random(void){
    delete []set;
    delete []freq;
}

char Prob1Random::randFromSet(void){
    char i = rand()%nset;
    freq[i]++;
    numRand++;
    return set[i];
}

int* Prob1Random::getFreq(void) const{
    return freq;
}

char* Prob1Random::getSet(void) const{
    return set;
}

int Prob1Random::getNumRand(void) const{
    return numRand;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                        Class Problem 2
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
template<class T>
T* Prob2Sort<T>::sortArray(const T* s, int size, bool a){
    T* test = new T[size];
    T temp;
    for (int i=0; i<size; i++){
        test[i]=s[i];
    }
    for (int i=0; i<size-1; i++){
        if (a == true){
            if (test[i]>test[i+1]){
                temp=test[i];
                test[i+1]=test[i];
                test[i+1]=temp;
            }
        }else{
            if (test[i]<test[i+1]){
                temp=test[i];
                test[i+1]=test[i];
                test[i+1]=temp;
            }
        }
    }
    return test;
}

template<class T>
T* Prob2Sort<T>::sortArray(const T* str, int x, int y, int col, bool a){
    int size = x*y;
    T* test = new T[size];
    for (int i=0; i<size; i++){
        test[i]=str[i];
    }
    T temp;
    for (int i=0; i<y-1;i++){
        if ((test[i]*x+col)>(test[i+1]*x+col)){
            for (int j=0; j<x; j++){
                temp=test[i*x+j];
                test[i*x+j]=test[(i+1)*x+j];
                test[(i+1)*x+j]=temp;
            }
        }else if((test[i]*x+col)<(test[i+1]*x+col)){
            for (int j=0; j<x; j++){
                temp=test[i*x+j];
                test[i*x+j]=test[(i+1)*x+j];
                test[(i+1)*x+j]=temp;
            }
        }
    }
    return test;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                        Class Problem 3
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
template<class T>
Prob3Table<T>::Prob3Table(char *fn, int r, int c){
    std::ifstream infile;
    
    rows = r;
    cols = c;
    rowSum = new int[r];
    colSum = new int[c];
    
    infile.open(fn, std::ios::in);
    table = new int[r*c];

    for (int i=0; i<rows*c; i++){
        infile>>table[i];
        infile.close();
        calcTable();
    }
}

template<class T>
void Prob3Table<T>::calcTable(void){
    grandTotal=0;
    for (int r=0; r<rows; r++){
        rowSum[r]=0;
        for (int c=0; c<cols; c++) {
            rowSum[c] += table[r*cols+c];
        }
    }
    for (int i=0; i<cols; i++) {
        colSum[i]=0;
        for (int j=0; j<rows; j++){
            colSum[i] += table[j*cols+i];
        }
        grandTotal += colSum[i];
    }
}

template<class T>
class Prob3TableInherited:public Prob3Table<T>{
protected:
    T *augTable; //Augmented Table with sums
public:
    Prob3TableInherited(char *filename,int rows,int cols):Prob3Table<T>(filename, rows, cols){
        augTable = new T[(rows+1) * (cols+1)];
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                augTable[i*(cols+1)+j] = Prob3Table<T>::table[i*cols+j];
            }
        }
        int r, c;
        c=cols;
        for(r=0; r<rows; r++){
            augTable[r*(cols+1)+c] = Prob3Table<T>::rowSum[r];
        }
        r=rows;
        for(c=0; c<cols; c++){
            augTable[r*(cols+1)+c] = Prob3Table<T>::colSum[c];
        }
        augTable[(rows+1)*(cols+1)-1] = Prob3Table<T>::getGrandTotal();
    }
    ~Prob3TableInherited(){delete [] augTable;};
    const T *getAugTable(void){return augTable;};
};

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                        Class Problem 4
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
SavingsAccount::SavingsAccount(float f){
    if (f<0){
        this->Balance=0;
    }else{
        this->Balance=f;
    }
    this->FreqDeposit=0;
    this->FreqWithDraw=0;
}

void SavingsAccount::Transaction(float f){
    if (f>0)
        Deposit(f);
    else 
        Withdraw(f);
}

float SavingsAccount::Total(float f, int time){
    float tot=Balance;
    for (int i=0; i<time; i++){
        tot += (tot*time);
    }
    return tot;
}

float SavingsAccount::TotalRecursive(float rate, int year){
    Balance=Balance+(Balance*rate);
    if (year > 1){
        Balance=TotalRecursive(rate,year-1);
    }
    return Balance;
}

float SavingsAccount::Withdraw(float f){
    if (f!=0){
        if ((Balance+f)>=0){
            Balance+=f;
            FreqWithDraw++;
        }
    }else{
        cout<<"WithDraw not Allowed"<<endl;
    }
}

float SavingsAccount::Deposit(float f){
    Balance+=f;
    FreqDeposit++;
}

void SavingsAccount::toString(){
    cout<<"Balance = "<<Balance<<endl;
    cout<<"Withdraw = "<<FreqWithDraw<<endl;
    cout<<"Deposit = "<<FreqDeposit<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                        Class Problem 5
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
Employee::Employee(char s1[], char s2[], float rate){
    strcpy(MyName, s1);
    strcpy(JobTitle, s2);
    
    if (rate<0 || rate>200){
        cout<<"Unacceptable Hourly Rate"<<endl;
        HourlyRate=0;
    }else{
        HourlyRate=rate;
    }
    HoursWorked=0;
    GrossPay=0;
    NetPay=0;
}

float Employee::setHourlyRate(float rate){
    if (rate<0 || rate>200){
        cout<<"Unacceptable Hourly Rate"<<endl;
        HourlyRate=0;
    }else{
        HourlyRate=rate;
    }
    return HourlyRate;
}

int Employee::setHoursWorked(int rate){
    if (rate<0 || rate>84){
        cout<<"Unacceptable Hours Worked"<<endl;
        HoursWorked=0;
    }else{
        HoursWorked=rate;
    }
    return HoursWorked;
}

float Employee::getGrossPay(float rate, int hour){
    if (hour<=40){
        GrossPay = rate*hour;
    }else if (hour>40 && hour <=50){
        GrossPay = (40*rate)+((hour-40)*(rate*1.5));
    }else if (hour>50){
        GrossPay = (40*rate)+(10*(rate*1.5))+((hour-50)*(rate*2));
    }
    return GrossPay;
}

float Employee::getNetPay(float pay){
    float tax=0;
    
    if (pay<=500){
        tax = pay*0.1;
    }else if (pay>500 && pay<=1000){
        tax = pay*0.2;
    }else{
        tax = pay*0.3;
    }
    NetPay = pay-tax;
    return NetPay;
}

float Employee::CalculatePay(float rate, int hour){
    return getNetPay(getGrossPay(setHourlyRate(rate), setHoursWorked(hour)));
}

void Employee::toString(){
    cout<<"Name = "<<MyName<<" Job Title = "<<JobTitle<<" Hourly Rate = "<<HourlyRate
            <<" Hours Worked = "<<HoursWorked<<" Gross Pay = "<<GrossPay<<" Net Pay = "<<NetPay<<endl;
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop and Display menu
    do{
        menu();
        cin>>choice;

        //Process/Map inputs to outputs
        switch(choice){
            case '1':{prblm1();break;}
            case '2':{prblm2();break;}
            case '3':{prblm3();break;}
            case '4':{prblm4();break;}
            case '5':{prblm5();break;}
            case '6':{prblm6();break;}
            default: cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='6');
    
    //Exit stage right!
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Menu
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void menu(){
    //Display menu
    cout<<endl<<"Choose from the following Menu"<<endl;
    cout<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;   
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl;
    cout<<"Type 6 for Problem 6"<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 1
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm1(){
    cout<<"Problem 1"<<endl;
    //Your code goes here
    char n=5;
    char rndseq[]={18,33,56,79,125};
    int ntimes=100000;
    Prob1Random a(n,rndseq);
    for(int i=1;i<=ntimes;i++)
    {
            a.randFromSet();
    }
    int *x=a.getFreq();
    char *y=a.getSet();
    for(int i=0;i<n;i++)
    {
            cout<<int(y[i])<<" occurred "<<x[i]<<" times"<<endl;
    }
    cout<<"The total number of random numbers is "<<a.getNumRand()<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 2
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm2(){
    cout<<"Problem 2"<<endl;
    //Your code goes here
    cout<<"The start of Problem 2, the sorting problem"<<endl;
    Prob2Sort<char> rc;
    bool ascending=true;
    ifstream infile;
    infile.open("Problem2.txt",ios::in);
    char *ch2=new char[10*16];
    char *ch2p=ch2;
    while(infile.get(*ch2)){cout<<*ch2;ch2++;}
    infile.close();
    cout<<endl;
    cout<<"Sorting on which column"<<endl;
    int column;
    cin>>column;
    char *zc=rc.sortArray(ch2p,10,16,column,ascending);
    for(int i=0;i<10;i++){
        for(int j=0;j<16;j++){
            cout<<zc[i*16+j];
        }
    }
    delete []zc;
    cout<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 3
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm3(){
    cout<<"Problem 3"<<endl;
    //Your code goes here
    cout<<"Entering problem number 3"<<endl;
    int rows=5;
    int cols=6;
    Prob3TableInherited<int> tab("Problem3.txt",rows,cols);
    const int *naugT=tab.getTable();
    for(int i=0;i<rows;i++)
    {
            for(int j=0;j<cols;j++)
            {
                    cout<<naugT[i*cols+j]<<" ";
            }
            cout<<endl;
    }
    cout<<endl;
    const int *augT=tab.getAugTable();
    for(int i=0;i<=rows;i++)
    {
            for(int j=0;j<=cols;j++)
            {
                    cout<<augT[i*(cols+1)+j]<<" ";
            }
            cout<<endl;
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm4(){
    cout<<"problem 4"<<endl;
    //Your code goes here
    SavingsAccount mine(-300);

    for(int i=1;i<=10;i++)
    {
            mine.Transaction((float)(rand()%500)*(rand()%3-1));
    }
    mine.toString();
    cout<<"Balance after 7 years given 10% interest = "
            <<mine.Total((float)(0.10),7)<<endl;
    cout<<"Balance after 7 years given 10% interest = "
            <<mine.TotalRecursive((float)(0.10),7)
            <<" Recursive Calculation "<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm5(){
    cout<<"problem 5"<<endl;
    //Your code goes here
    Employee Mark("Mark","Boss",215.50);
    Mark.setHoursWorked(-3);
    Mark.toString();
    Mark.CalculatePay(Mark.setHourlyRate(20.0),
            Mark.setHoursWorked(25));
    Mark.toString();
    Mark.CalculatePay(Mark.setHourlyRate(40.0),
            Mark.setHoursWorked(25));
    Mark.toString();
    Mark.CalculatePay(Mark.setHourlyRate(60.0),
            Mark.setHoursWorked(25));
    Mark.toString();

    Employee Mary("Mary","VP",50.0);
    Mary.toString();
    Mary.CalculatePay(Mary.setHourlyRate(50.0),
            Mary.setHoursWorked(40));
    Mary.toString();
    Mary.CalculatePay(Mary.setHourlyRate(50.0),
            Mary.setHoursWorked(50));
    Mary.toString();
    Mary.CalculatePay(Mary.setHourlyRate(50.0),
            Mary.setHoursWorked(60));
    Mary.toString();
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm6(){
    cout<<"problem 6"<<endl;
    //Your Code Goes Here
    cout<<"To convert decimal to binary, we use divide by 2 rule."<<endl;
    cout<<"To convert decimal side to binary, we use multiply by 2 rule."<<endl;
    cout<<"Binary can become Octal by pairing 3 bits."<<endl;
    cout<<"Binary can become Hexadecimal by pair 4 bits."<<endl;
    cout<<"A = 10 = 1010"<<endl;
    cout<<"B = 11 = 1011"<<endl;
    cout<<"C = 12 = 1100"<<endl;
    cout<<"D = 13 = 1101"<<endl;
    cout<<"E = 14 = 1110"<<endl;
    cout<<"F = 15 = 1111"<<endl;
    cout<<endl;
    cout<<"See attached PDF file."<<endl;
    
    cout<<setw(30)<<left<<"Base 10"<<setw(30)<<left<<"Base 2"<<setw(30)<<left
            <<"Base 8"<<setw(30)<<left<<"Base 16"<<endl;
    cout<<setw(30)<<left<<"3.75"<<setw(30)<<left<<"11.11"<<setw(30)<<left
            <<"3.6"<<setw(30)<<left<<"3.C"<<endl;
    cout<<setw(30)<<left<<"0.7"<<setw(30)<<left<<"0.10110011001100110011"<<setw(30)<<left
            <<"0.54631463146314631463"<<setw(30)<<left<<"0.B3333333333333333333"<<endl;
    cout<<setw(30)<<left<<"89.9"<<setw(30)<<left<<"1011001.1110011001100110011"<<setw(30)<<left
            <<"131.71463146314631463146"<<setw(30)<<left<<"59.E6666666666666666666"<<endl;
}
