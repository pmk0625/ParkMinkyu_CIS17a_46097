/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on June 17th, 2019, 10:20 AM
 * Purpose:  Menu using Functions,
 *           extend for midterm
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Function Prototype
char menu(char );

//Constant Variable

struct BankAccount
{
    string name, address, accNum;
    float balBeg, withdraw, deposits;
};

int main(){
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
                return 0;
            }
            
        }
    }
    
    return 0;
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