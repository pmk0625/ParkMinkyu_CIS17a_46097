/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 12th, 2019, 11:50 M
 * Purpose:  Menu using Functions,
 *           extend for midterm
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

//User Libraries

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
void prblm7();

//Function Prototype
struct Prime{
    unsigned int prime;
    unsigned int power;
};
struct Primes{
        Prime *prime;
        unsigned int nPrimes;
};
Primes *factor(int); //Input an integer, return all prime factors
void prntPrm(Primes *); // Output all prime factors

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
            case '7':{prblm7();break;}
            default: cout<<"Exiting Menu"<<endl;
        }
    }while(choice>='1'&&choice<='7');
    
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
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;   
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl;
    cout<<"Type 6 for Problem 6"<<endl;
    cout<<"Type 7 for Problem 7"<<endl;
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
    //Function Prototype
    char menu(char );
    
    //Structures
    struct BankAccount
    {
        string name, address, accNum;
        float balBeg, withdraw, deposits;
    };
    
    //your code here
    BankAccount account;
    bool complete = true;
    float balance;
    int choice;
    
    cout<<setprecision(2)<<fixed;
    cout<<"Please enter the balance to start the program with"<<endl;
    cin>>account.balBeg;
    
    cin.ignore();
    cout<<"Please enter your name: "<<endl;
    getline (cin, account.name);
    cout<<"Please enter the address: "<<endl;
    getline (cin, account.address);
    cout<<"Please enter the accNum: "<<endl;
    getline (cin, account.accNum);
    
    choice = menu(choice);
    if (choice >= '1' && choice <='4'){
        switch (choice){
            case '1':
            {
                complete =  false;
                cout<<"Name: "<<account.name<<endl;
                cout<<"Address: "<<account.address<<endl;
                cout<<"Account Number: "<<account.accNum<<endl;
                cout<<endl;
                cout<<"Current Balance Inquiry"<<endl;
                cout<<"Your current balance: "<<endl;
                cout<<"$"<<account.balBeg;
                break;
            }
            case '2':
            {
                complete = false;
                cout<<"Name: "<<account.name<<endl;
                cout<<"Address: "<<account.address<<endl;
                cout<<"Account Number: "<<account.accNum<<endl;
                cout<<endl;
                cout<<"Withdraw Checks"<<endl;
                cout<<"Please enter the amount you wish to withdraw"<<endl;
                cin>>account.withdraw;
                balance = account.balBeg - account.withdraw;
                if (balance < 20){
                    cout<<"You have overdrawn"<<endl;
                    cout<<"You will be charged additional $20"<<endl;
                    cout<<"Your remaining Balance: $"<<balance-20<<endl;
                }else
                    cout<<"Your remaining Balance: $"<<balance<<endl;
                break;
            }
            case '3':
            {
                complete = false;
                cout<<"Name: "<<account.name<<endl;
                cout<<"Address: "<<account.address<<endl;
                cout<<"Account Number: "<<account.accNum<<endl;
                cout<<endl;
                cout<<"Deposit Checks"<<endl;
                cout<<"Please enter the amount you wish to deposit"<<endl;
                cin>>account.deposits;
                balance = account.balBeg + account.deposits;
                cout<<"Your remaining Balance: $"<<balance<<endl;
                break;
            }
            case '4':
            {
                cout<<"Cancel Transaction"<<endl;
                complete = true;
            }  
        }
    }
}

char menu(char choice){
    do{
        cout<<"Please choose from the following Menu"<<endl;
        cout<<"1. Current Balance Inquiry"<<endl;
        cout<<"2. Withdraw Checks"<<endl;
        cout<<"3. Deposit Checks"<<endl;
        cout<<"4. Exit Program"<<endl;
        cin>>choice;
    }while (choice == 1 || choice == 2 || choice == 3 || choice == 4);
    return choice;
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
    
    //Structure
    struct payInfo
    {
        string name;
        int hours;
        float payRate, gross;
    };
    
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
    cout<<"Student was unable to solve"<<endl;
    //Structures
    struct Array{
        float avg;
        int size, data;
    };
    struct Stats{
        float mean, median, mode;
    };
    
    //User Libraries
    //#include "Array.h"
    //#include "Stats.h"
    
    //Function Prototypes I supply
    /*Array *fillAry(int,int);        //Fill an array and put into a structure
    void prntAry(const Array *,int);//Print the array 
    int *copy(const int *,int);     //Copy the array
    void mrkSort(int *,int);        //Sort an array
    void prtStat(const Stats *);    //Print the structure
    void rcvrMem(Array *);          //Recover memory from the Array Structure
    void rcvrMem(Stats *);          //Recover memory from Statistics Structure

    //Functions you are to supply
    Stats *stat(const Array *);     //Find & store mean, median, & modes in structure

    //Declare variables and fill
    int arySize=16;//Array Size
    int modNum=10; //Number to control the modes (digits 0 to 9 allowed)
    Array *array=fillAry(arySize,modNum);

    //Print the initial array
    cout<<"Original Array"<<endl;
    prntAry(array,10);

    //Sort the array
    mrkSort(array->data,array->size);
    cout<<"Sorted Array"<<endl;
    prntAry(array,10);

    //Calculate some of the statistics
    Stats *stats=stat(array);

    //Print the statistics
    prtStat(stats);

    //Recover allocated memory
    rcvrMem(array);
    rcvrMem(stats);*/
}

int *copy(const int *a,int n){
    //Declare and allocate an array
    //that is a c
    int *b=new int[n];
    //Fill
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    //Return the copy
    return b;
}

/*void prtStat(const Stats *ary){
    cout<<endl;
    cout<<"The average of the array = "<<ary->avg<<endl;
    cout<<"The median of the array  = "<<ary->median<<endl;
    cout<<"The number of modes      = "<<
            ary->mode->size<<endl;
    cout<<"The max Frequency        = "<<
            ary->modFreq<<endl;
    if(ary->mode->size==0){
        cout<<"The mode set             = {null}"<<endl;
        return;
    }
    cout<<"The mode set             = {";
    for(int i=0;i<ary->mode->size-1;i++){
        cout<<ary->mode->data[i]<<",";
    }
    cout<<ary->mode->data[ary->mode->size-1]<<"}"<<endl;
}*/

void mrkSort(int *array,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(array[j]<array[i]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

/*void rcvrMem(Stats *stats){
    rcvrMem(stats->mode);
    delete stats;
}

void rcvrMem(Array *array){
    delete []array->data;
    delete array;
}

void prntAry(const Array *array,int perLine){
    //Output the array
    for(int i=0;i<array->size;i++){
        cout<<array->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

Array *fillAry(int n, int modNum){
    //Allocate memory
    Array *array=new Array;
    array->size=n;
    array->data=new int[array->size];
    
    //Fill the array with mod numbers
    for(int i=0;i<n;i++){
        array->data[i]=i%modNum;
    }
    
    //Exit function
    return array;
}

Stats *stat(const Array *array){
    //Non-working stub to be completed by the student
    cout<<endl<<"Stat function to be completed by the student"<<endl;
    Stats *stats=new Stats;
    stats->mode=new Array;
    stats->mode->size=0;
    int nModes=0;
    if(nModes!=0)stats->mode->data=new int[nModes];
    stats->modFreq=1;
    stats->median=0;
    return stats;
}*/

//Couldn't figure this out.....
    

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm4(){
    cout<<"problem 4"<<endl;
    //Structure
    struct code{
        int num1, num2, num3, num4;
    };
    
    //Function Prototypes
    char menu1(char );
    
    //Your code goes here 
    code numbers;
    int choice;
    int encrypt1, encrypt2, encrypt3, encrypt4;
    int swap1, swap2;
    
    choice = menu1(choice);
    if (choice >= '1' && choice <= '2'){
        switch (choice){
            case '1':
            {
                cout<<"This program will encrypt 4 digit numbers"<<endl;
                cout<<endl;
                cout<<"Please input 4 digit number in the format... \n";
                cout<<"Num 1, num 2, num 3, num 4"<<endl;
                cout<<endl;
                cout<<"The numbers should be within 0-7 \n";
                cout<<endl;
                cin>>numbers.num1>>numbers.num2>>numbers.num3>>numbers.num4;
                if (numbers.num1 < 0 || numbers.num1 > 7 || numbers.num2 < 0 || numbers.num2 > 7 || 
                        numbers.num3 < 0 || numbers.num3 > 7 || numbers.num4 < 0 || numbers.num4 > 7){
                    cout<<"Number inputted is not within encryption range"<<endl;
                    cout<<"Please re-enter"<<endl;
                    cin>>numbers.num1>>numbers.num2>>numbers.num3>>numbers.num4;
                }

                encrypt1 = (numbers.num1 + 5)%8;
                encrypt2 = (numbers.num2 + 5)%8;
                encrypt3 = (numbers.num3 + 5)%8;
                encrypt4 = (numbers.num4 + 5)%8;

                swap1 = encrypt1;
                encrypt1 = encrypt3;
                encrypt3 = swap1;

                swap2 = encrypt2;
                encrypt2 = encrypt4;
                encrypt4 = swap2;

                cout<<"Your encryption code will be..."<<endl;
                cout<<encrypt1<<"  "<<encrypt2<<"  "<<encrypt3<<"  "<<encrypt4<<endl;
                break;
            }
            case '2':
            {
                cout<<"This program will decrypt 4 digit numbers"<<endl;
                cout<<endl;
                cout<<"Please input 4 digit encrypted number in the format... \n";
                cout<<"Num 1, num 2, num 3, num 4"<<endl;
                cout<<endl;
                cout<<"The numbers should be within 0-7 \n";
                cout<<endl;
                cin>>numbers.num1>>numbers.num2>>numbers.num3>>numbers.num4;
                if (numbers.num1 < 0 || numbers.num1 > 7 || numbers.num2 < 0 || numbers.num2 > 7 || 
                        numbers.num3 < 0 || numbers.num3 > 7 || numbers.num4 < 0 || numbers.num4 > 7){
                    cout<<"Number inputted is not within decryption range"<<endl;
                    cout<<"Please re-enter"<<endl;
                    cin>>numbers.num1>>numbers.num2>>numbers.num3>>numbers.num4;
                }

                encrypt1 = (numbers.num1 - 5 + 8)%8;
                encrypt2 = (numbers.num2 - 5 + 8)%8;
                encrypt3 = (numbers.num3 - 5 + 8)%8;
                encrypt4 = (numbers.num4 - 5 + 8)%8;

                swap1 = encrypt3;
                encrypt3 = encrypt1;
                encrypt1 = swap1;

                swap2 = encrypt4;
                encrypt4 = encrypt2;
                encrypt2 = swap2;

                cout<<"Your encryption code will be..."<<endl;
                cout<<encrypt1<<"  "<<encrypt2<<"  "<<encrypt3<<"  "<<encrypt4<<endl;
                break;
            }
        }
    }
}

char menu1(char choice){
    do{
        cout<<"Please choose from the following Menu"<<endl;
        cout<<endl;
        cout<<"To encrypt, please type 1."<<endl;
        cout<<"To decrypt, please type 2."<<endl;
        cin>>choice;
    }while (choice == 1 || choice == 2);
    return choice;
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
    //Output data
    cout<<"This program will convert 2.875 and 0.1796875 into binary, octal and hex. \n";
    cout<<endl;
    cout<<"6a. : \n";
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<" 2.875 -> Base 10 \n";
    cout<<"Converting to Base 2 \n";
    cout<<endl;
    cout<<" 2.875 -> 1 x 2^1 + 1 x 2^0 \n";
    cout<<" According to the table, Base 2 becomes 1 1 \n";
    cout<<endl;
    cout<<"Converting to Base 8 \n";
    cout<<endl;
    cout<<" 1 1 can be grouped as 1 1 0 \n";
    cout<<" 1 1 0 of Base 2 can be converted into Base of 8: 6, Base 8 of 2.875 = 6 \n";
    cout<<endl;
    cout<<"Converting to Base 16 \n";
    cout<<endl;
    cout<<" 1 1 can be grouped as 1 1 0 0 \n";
    cout<<" 1 1 0 0 of Base 2 can be converted into Base of 16: C, Base 16 of 2.875 = C \n";
    cout<<"------------------------------------------------------------------------------------"<<endl;
    
    cout<<endl;
    cout<<endl;
    
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<" 0.1796875 -> Base 10 \n";
    cout<<"Converting to Base 2 \n";
    cout<<endl;
    cout<<"If the multiplication of 2 > 1 write 1, If the multiplication of 2 < 1 write 0 \n";
    cout<<"If the multiplication of 2 = 1, stop \n";
    cout<<endl;
    cout<<" 0.1796875 x 2 = 0.359375 -> 0 \n";
    cout<<" 0.359375  x 2 = 0.71875  -> 0 \n";
    cout<<" 0.71875   x 2 = 1.4375   -> 1 \n";
    cout<<" 0.4375    x 2 = 0.875    -> 0 \n";
    cout<<" 0.875     x 2 = 1.75     -> 1 \n";
    cout<<" 0.75      x 2 = 1.5      -> 1 \n";
    cout<<" 0.5       x 2 = 1        -> 1 \n";
    cout<<endl;
    cout<<"Base 2 of 0.1796875 becomes 0 0 1 0 1 1 1 \n";
    cout<<endl;
    cout<<"Converting to Base 8 \n";
    cout<<endl;
    cout<<" 0 0 1 0 1 1 1 can be grouped as .0 0 1 || .0 1 1 || .1 0 0 \n";
    cout<<"According to the table, Base 8 becomes 0.134 \n";
    cout<<endl;
    cout<<"Converting to Base 16 \n";
    cout<<endl;
    cout<<" 0 0 1 0 1 1 1 can be grouped as .0 0 1 0 || .1 1 1 0 \n";
    cout<<"According to the table, Base 16 becomes 0.2E \n";
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                         Problem 4
//Input:  -> Parameters in Argument List, Description/Range/Units
//Output: -> Return, Description/Range/Units
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prblm7(){
    cout<<"problem 7"<<endl;
    
    //your code here
    int num;
    cout<<"Please input a number:"<<endl;
    cin>>num;
    
    Primes *p = factor(120);
    cout<<"The Factors of "<<num<<": "<<endl;
    
    prntPrm(p);
}

Primes *factor(int n){
    int k=2;
    int m[10000]={0};
    while(1<n){
        if (n%k==0){
            m[k]++;
            n=n/k;
        }else
            k++;
    }
    int i=0;
    k=0;
    while(i<10000){
        if(m[i]!=0)k++;
        i++;
    }
    Primes *p = new Primes;
    p->nPrimes=k;
    p->prime = new Prime[k];
    i=0;
    k=0;
    while(i<10000){
        if(m[i]!=0){
            p->prime[k].prime = i;
            p->prime[k].power = m[i];
            k++;
        }
        i++;
    }
    return p;
}

void prntPrm(Primes *p){
    int n = p -> nPrimes;
    int k=0;
    while(k < n){
        cout<<p->prime[k].prime<<"^"<<p->prime[k].power<<" * ";
        k++;
        if(k==n-1)
            break;
    }
    cout<<p->prime[k].prime<<"^"<<p->prime[k].power<<endl;
}

