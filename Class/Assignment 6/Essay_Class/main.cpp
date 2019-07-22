/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 20, 2019, 8:00 PM
 * Purpose:  Essay Class
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Class Declaration
class Essay{
private:
    float grammar, spelling, length, content, score;
public:
    Essay(){
        grammar=0;
        spelling=0;
        length=0;
        content=0;
        score=0;
    }
    Essay(float g, float sp, float cl, float c, float s){
        grammar=g;
        spelling=sp;
        length=cl;
        content=c;
        score=s;
    }
    void setScore(float g, float sp, float cl, float c){
        grammar=g;
        spelling=sp;
        length=cl;
        content=c;
    }
    void addScore(){
        score=grammar + spelling + length + content;
    }
    float getScore(){
        return score;
    }
};

//Execution Begins Here
int main(int argc, char** argv) {
    //Your Code Goes here
    float gram, spell, length, content;
    
    Essay student;
    
    cout<<"Please grade Grammar: (Max points 30)"<<endl;
    cin>>gram;
    cout<<"Please grade Spelling: (Max points 20)"<<endl;
    cin>>spell;
    cout<<"Please grade Correct Length: (Max points 20)"<<endl;
    cin>>length;
    cout<<"Please grade Content: (Max points 30)"<<endl;
    cin>>content;
    cout<<endl;
    
    student.setScore(gram, spell, length, content);
    
    student.addScore();
    
    cout<<"Total score this student received: "<<endl;
    cout<<"Student received "<<student.getScore()<<" Out of 100"<<endl;
    
    //Exit stage right!
    return 0;
}