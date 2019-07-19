/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 18, 2019, 8:00 PM
 * Purpose: Personal Information Class
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Class Declaration
class PersonalInfo{
private:
    string name, address;
    int age, number;
public:
    void setName(string n){
        name = n;
    }
    void setAddress(string add){
        address = add;
    }
    void setAge(int a){
        age = a;
    }
    void setNumber(int num){
        number = num;
    }
    string getName(){
        return name;
    }
    string getAddress(){
        return address;
    }
    int getAge(){
        return age;
    }
    int getNum(){
        return number;
    }
    void readData(){
        cout<<"Please enter name: "<<endl;
        cin>>name;
        cout<<"Please enter address: "<<endl;
        cin>>address;
        cout<<"Please enter age: "<<endl;
        cin>>age;
        cout<<"Please enter number: "<<endl;
        cin>>number;
    }
    void displayData(){
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Phone Number: "<<number<<endl;
    }
};

//Execution Begins Here
int main(int argc, char** argv) {
    //Your code code here
    PersonalInfo yourInfo;
    PersonalInfo friendInfo;
    PersonalInfo familyInfo;
    
    cout<<"This program will input and retrieve Personal Information"<<endl;
    cout<<endl;
    cout<<"Please input your info: "<<endl;
    cout<<endl;
    yourInfo.readData();
    cout<<endl;
    cout<<"Please input your friend's info: "<<endl;
    cout<<endl;
    friendInfo.readData();
    cout<<endl;
    cout<<"Please input your family info: "<<endl;
    cout<<endl;
    familyInfo.readData();
    cout<<endl;
    
    cout<<"Your info is displayed: "<<endl;
    yourInfo.displayData();
    cout<<endl;
    cout<<"Your friend's info is displayed: "<<endl;
    friendInfo.displayData();
    cout<<endl;
    cout<<"Your family info is displayed: "<<endl;
    familyInfo.displayData();
    
    //Exit stage right!
    return 0;
}