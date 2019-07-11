#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Function Prototype
void menu();

//Constant Variable
const int MAX_NUM = 20;

struct BankAccount
{
    string name, address, accNum;
    float balBeg, checks, deposits;
};

int main(){
    //your code here
    BankAccount account[MAX_NUM];
    bool complete = true;
    
    
    int choice;
    while (choice < 1 || choice > 4 || complete){
        complete = false;
        menu();
        cin>>choice;
        switch (choice){
            case '1':
            {
                cout<<"Current Balance Inquiry"<<endl;
                break;
            }
            case '2':
            {
                cout<<"Write Checks"<<endl;
                break;
            }
            case '3':
            {
                cout<<"Deposit Checks"<<endl;
                break;
            }
            case '4':
            {
                cout<<"Cancel Transaction"<<endl;
                complete = true;
            }
        }
    }
    
    return 0;
}

void menu(){
    cout<<"Please enter from the following choices"<<endl;
    cout<<"1. See current Balance"<<endl;
    cout<<"2. Write Check"<<endl;
    cout<<"3. Deposit Check"<<endl;
    cout<<"4. Cancel Transaction"<<endl;
    return;
}