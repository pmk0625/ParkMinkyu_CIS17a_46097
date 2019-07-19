/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 18, 2019, 9:00 PM
 * Purpose: Inventory Class
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Class Declaration
class Inventory{
private:
    int itemNumber, quantity;
    float cost;
    double totalCost;
    string itemDescript;
public:
    Inventory(){
        itemNumber=0;
        quantity=0;
        cost=0;
        totalCost=0;
        itemDescript="";
    }
    Inventory(int itemNum, int itemQuan, float itemCost, double itemTotCost, string descript){
        itemNumber = itemNum;
        quantity = itemQuan;
        cost = itemCost;
        totalCost = itemTotCost;
        itemDescript = descript;
    }
    void setItemNum(int itemNum){
        itemNumber = itemNum;
    }
    void setItemQuan(int itemQuan){
        quantity = itemQuan;
    }
    void setCost(float itemCost){
        cost = itemCost;
    }
    void setTotCost(double itemTotCost){
        totalCost = itemTotCost;
    }
    void setDescript(string descript){
        itemDescript = descript;
    }
    int getItemNum(){
        return itemNumber;
    }
    int getItemQuan(){
        return quantity;
    }
    float getCost(){
        return cost;
    }
    double getTotCost(){
        return totalCost;
    }
    string getDescript(){
        return itemDescript;
    }
};

//Execution Begins Here
int main(int argc, char** argv) {
    //Your code code here
    Inventory display;
    int itemNumber, quantity;
    float cost;
    double totalCost;
    string itemDescript;
    
    cout<<setprecision(2)<<fixed;
    cout<<"This program will display inventory items"<<endl;
    cout<<endl;
    cout<<"Please enter the item Number: "<<endl;
    cin>>itemNumber;
    if (itemNumber < 0){
        cout<<"Item Number cannot be negative, please re-enter: "<<endl;
        cin>>itemNumber;
    }
    cout<<"Please enter the item Quantity: "<<endl;
    cin>>quantity;
    if (quantity < 0){
        cout<<"Item Quantity cannot be negative, please re-enter: "<<endl;
        cin>>quantity;
    }
    cout<<"Please enter the item Cost: "<<endl;
    cin>>cost;
    if (cost < 0){
        cout<<"Item Cost cannot be negative, please re-enter: "<<endl;
        cin>>cost;
    }
    totalCost = cost * quantity;
    cout<<"Please enter the item Description: "<<endl;
    cin>>itemDescript;
    
    display.setItemNum(itemNumber);
    display.setItemQuan(quantity);
    display.setCost(cost);
    display.setTotCost(totalCost);
    display.setDescript(itemDescript);
    
    cout<<setw(20)<<left<<"Item Number"<<setw(20)<<left<<"Item Quantity"<<setw(20)<<left
            <<"Item Cost $"<<setw(20)<<left<<"Item Total Cost $"<<setw(20)<<left<<"Item Description"<<endl;
    cout<<endl;
    cout<<setw(20)<<left<<display.getItemNum()<<setw(20)<<left<<display.getItemQuan()
            <<setw(20)<<left<<display.getCost()<<setw(20)<<left<<display.getTotCost()
            <<setw(20)<<left<<display.getDescript()<<endl;
    
    //Exit stage right!
    return 0;
}