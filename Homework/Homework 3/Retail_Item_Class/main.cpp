/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 18, 2019, 8:30 PM
 * Purpose: Retail Item Class
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
class RetailItem{
private:
    string description;
    int unitsOnHand;
    float price;
public:
    RetailItem(string descr, int unit, float pr);
    void setDescr(string descr);
    void setUnitOH(int unit);
    void setPrice(float pr);
    string getDescr();
    int getUnitOH();
    float getPrice();
};

RetailItem::RetailItem(string descr, int unit, float pr){
    description = descr;
    unitsOnHand = unit;
    price = pr;
}

void RetailItem::setDescr(string descr){
    description = descr;
}

void RetailItem::setUnitOH(int unit){
    unitsOnHand = unit;
}

void RetailItem::setPrice(float pr){
    price = pr;
}

string RetailItem::getDescr(){
    return description;
}

int RetailItem::getUnitOH(){
    return unitsOnHand;
}

float RetailItem::getPrice(){
    return price;
}


//Execution Begins Here
int main(int argc, char** argv) {
    //Your code code here
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);
    
    
    cout<<setw(10)<<left<<"Item # "<<setw(15)<<left<<"Description"<<setw(15)<<left<<"Units On Hand"<<setw(10)<<left<<"Price"<<endl;
    cout<<endl;
    cout<<setw(10)<<left<<"Item #1"<<setw(20)<<left<<item1.getDescr()<<setw(10)<<left<<item1.getUnitOH()<<setw(10)<<left<<item1.getPrice()<<endl;
    cout<<setw(10)<<left<<"Item #2"<<setw(20)<<left<<item2.getDescr()<<setw(10)<<left<<item2.getUnitOH()<<setw(10)<<left<<item2.getPrice()<<endl;
    cout<<setw(10)<<left<<"Item #3"<<setw(20)<<left<<item3.getDescr()<<setw(10)<<left<<item3.getUnitOH()<<setw(10)<<left<<item3.getPrice()<<endl;
    
    //Exit stage right!
    return 0;
}