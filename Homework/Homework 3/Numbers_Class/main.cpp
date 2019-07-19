/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 18, 2018, 9:40 PM
 * Purpose:  Numbers Class
 */

//System Libraries
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
string one[]={"", "one", "two", "three", "four", "five", "six", "seven", "eight", 
"nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen"
, "seventeen", "eighteen", "nineteen"};

string ten[]={"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", 
"eighty", "ninety"};

//Function Prototypes
string numToWord(int n, string s){
    string str = "";
    if(n>19)
        str += ten[n/10] + one[n%10];
    else
        str += one[n];
    if (n)
        str += s;
    return str;
}

//Class Declaration
class Number{
private:
    int number;
public:
    Number(){
        number = 0;
    }
    void setNumber(int x){
        number = x;
    }
    int getNumber(){
        return number;
    }
};

class Words:public Number{
private:
    string words;
public:
    Words(){
        words = "";
    }
    void convert(){
        int n = getNumber();
        words += numToWord(((n/1000)%100), " thousand ");
        words += numToWord(((n/100)%10), " hundred ");
        words += numToWord((n%100), " ");
    }
    string printWord(){
        return words;
    }
};

//Execution Begins Here
int main(int argc, char** argv) {
    //Your code goes here
    int n;
    char x;
    Words word;
    
    cout<<"Please input number"<<endl;
    cin>>n;
    if (n < 0){
        cout<<"Input number cannot be negative"<<endl;
        cout<<"Please re-enter"<<endl;
        cin>>n;
    }
    cout<<endl;
    
    word.setNumber(n);
    word.convert();
    
    cout<<"The number you inputed: "<<endl;
    cout<<n<<endl;
    cout<<"English Description of the number you inputed: "<<endl;
    cout<<endl;
    cout<<word.printWord()<<endl;
    
    //Exit stage right!
    return 0;
}