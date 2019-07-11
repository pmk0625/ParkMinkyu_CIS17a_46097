#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct DrinkMachine
{
    string name;
    float cost;
    int num;
};

int menu(DrinkMachine[]);
void payment(float);

int main(){
	//your code here
	DrinkMachine drink[5] = {
            {"Cola", .75, 20},
            {"Root Beer", .75, 20},
            {"Lemon-Lime", .75, 20},
            {"Grape Soda", .80 , 20},
            {"Cream Soda", .80, 20}
        };
	int choice;
	float made=0;
	
        
        
	choice=menu(drink);
	while (choice != 5){
	    payment(drink[choice].cost);
	    made+=drink[choice].cost;
	    drink[choice].num--;
	    choice=menu(drink);
	}
	
	cout<<setprecision(2)<<fixed;
	cout<<"Today the machine has made $"<<made<<endl;
	
	return 0;
}

void payment(float p){
    float pay;
    cout<<setprecision(2)<<fixed;
    cout<<"Your drink costs $"<<p<<endl;
    cout<<"Enter payment: "<<endl;
    cin>>pay;
    while(pay<0||pay>1.||pay<p){
        cout<<"please inset the correct amount "<<endl;
        cout<<"Payment should not exceed $1.00"<<endl;
        cout<<"Enter payment: "<<endl;
        cin>>pay;
    }
    cout<<"Your change is: $"<<pay-p<<endl;
    return;
}

int menu(DrinkMachine d[]){
    int choice=8;
    bool soldout=true;
    while((choice<1||choice>6)||soldout){
        soldout=false;
        cout<<"Menu"<<endl;
        cout<<"      Drink      Cost\tleft\n";
        for(int i=0;i<5;i++){
            cout<<i+1<<". "<<setw(15)<<left<<d[i].name<<setw(5);
            cout<<setprecision(2)<<fixed<<d[i].cost<<"\t"<<d[i].num<<endl;
        }
        cout<<"6. Exit\n";
        cout<<"Enter Choice ";
        cin>>choice;
        if(choice<1||choice>6){
            cout<<"invalid entry\n";
        }else if(d[choice-1].num==0){
            cout<<"sold out\n";
            soldout=true;
        }
   }
   return choice-1;
}
