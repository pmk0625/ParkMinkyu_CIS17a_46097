/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 18, 2019, 7:00 PM
 * Purpose: Employee Class
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
class Employee{
private:
    string name;
    int idNumber;
    string department, position;
public:
    Employee();
    Employee(string name, int idNumber);
    Employee(string name, int idNumber, string department, string position);

    string getName();
    int getIdNumber();
    string getDepartment();
    string getPosition();

    void setName(string n);
    void setIdNumber(int n);
    void setDepartment(string d);
    void setPosition(string p);
};

Employee::Employee(){
    name = "";
    idNumber = 0;
    department = "";
    position = "";
}
Employee::Employee(string name, int idNumber){
    this->name = name;
    this->idNumber = idNumber;
    department = "";
    position = "";
}
Employee::Employee(string name, int idNumber, string department, string position){
    this->name = name;
    this->idNumber = idNumber;
    this->department = department;
    this->position = position;
}

string Employee::getName(){
        return name;
}
int Employee::getIdNumber(){
        return idNumber;
}
string Employee::getDepartment(){
        return department;
}
string Employee::getPosition(){
        return position;
}

void Employee::setName(string n){
        this->name = n;
}
void Employee::setIdNumber(int n){
        idNumber = n;
}
void Employee::setDepartment(string d){
        department = d;
}
void Employee::setPosition(string p){
        position = p;
}

void displayEmployee(Employee* const e){
    cout << setw(15) << left << e->getName();
    cout << setw(15) << left << e->getIdNumber();
    cout << setw(15) << left << e->getDepartment();
    cout << setw(15) << left << e->getPosition() << endl;
}

//Execution Begins Here
int main(int argc, char** argv) {
    //Your code code here
    Employee e1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee e2("Mark Jones", 39119, "IT", "Programmer");
    Employee e3("Joy Ragers", 81774, "Manufacturing", "Engineer");

    cout << setw(15) << left << "Name";
    cout << setw(15) << left << "ID Number";
    cout << setw(15) << left << "Department";
    cout << setw(15) << left << "Position" << endl;

    cout << "--------------------------------------";
    cout << "--------------------------------------" << endl;

    displayEmployee(&e1);
    displayEmployee(&e2);
    displayEmployee(&e3);
    
    //Exit stage right!
    return 0;
}