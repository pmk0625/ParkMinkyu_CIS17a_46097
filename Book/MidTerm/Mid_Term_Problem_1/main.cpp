#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Function Prototype
char menu(char );

//Constant Variable
const int MAX_NUM = 20;

struct BankAccount
{
    string name, address, accNum;
    float balBeg, checks, deposits;
};

int main(){
    //your code here
    BankAccount account;
    bool complete = true;
    int choice;
    
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
                cout<<"Current Balance Inquiry"<<endl;
                break;
            }
            case '2':
            {
                complete = false;
                cout<<"Write Checks"<<endl;
                break;
            }
            case '3':
            {
                complete = false;
                cout<<"Deposit Checks"<<endl;
                break;
            }
            case '4':
            {
                complete = false; 
                cout<<"Cancel Transaction"<<endl;
                break;
            }
            
        }
    }
    
    return 0;
}

char menu(char choice){
    do{
        cout<<"Please choose from the following Menu"<<endl;
        cout<<"1. Current Balance Inquiry"<<endl;
        cout<<"2. Deposit Checks"<<endl;
        cout<<"3. Withdraw Checks"<<endl;
        cout<<"4. Exit Program"<<endl;
        cin>>choice;
    }while (choice == 1 || choice == 2 || choice == 3 || choice == 4);
    return choice;
}