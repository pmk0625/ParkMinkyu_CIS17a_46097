//Libraries
#include <iostream>//I/O Library
#include <cmath>   //Math Library
using namespace std;

//Constants

//Structure
struct code{
    int num1, num2, num3, num4;
};

//Function Prototypes
char menu(char );

//Execution begins here
int main(int argc, char*argv[]) {
    //Your code goes here 
    code numbers;
    int choice;
    int encrypt1, encrypt2, encrypt3, encrypt4;
    int swap1, swap2;
    
    choice = menu(choice);
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
     
    //Exit stage right
    return 0;
}

char menu(char choice){
    do{
        cout<<"Please choose from the following Menu"<<endl;
        cout<<endl;
        cout<<"To encrypt, please type 1."<<endl;
        cout<<"To decrypt, please type 2."<<endl;
        cin>>choice;
    }while (choice == 1 || choice == 2);
    return choice;
}