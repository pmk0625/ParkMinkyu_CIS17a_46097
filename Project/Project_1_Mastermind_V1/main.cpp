/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 14, 2019, 08:00 PM
 * Purpose:  Project 1: Mastermind V1
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

//User Libraries

//Structures
struct guesses{
    char guess1, guess2, guess3, guess4;
};

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int SIZE=4;
const int NUM_GUESS=10;

//Function Prototypes
void displayIntro();
void answer(int *, char *);


//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Your Code Goes here
    guesses guess[NUM_GUESS]; 
    
    int color[SIZE]; //Number of Colors Array
    char ans[SIZE]; //Number of Answers Array
    
    for (int i = 0; i < 5; i++) {  //Set Random Answers using For Loop
        color[i] = rand() % 6;     //Random Colors (1, 8)
    }
     
    answer(color, ans);
    
    displayIntro();
    
    //Output data
    for (int i=0; i<NUM_GUESS; i++){
        cout << "Again, the colors consist of : R=RED, B=BLUE, G=GREEN, Y=YELLOW,"
                << " O=ORANGE,P=PURPLE" << endl;
        cout << "Please input your guesses! " << endl;
        cin>>guess[i].guess1>>guess[i].guess2>>guess[i].guess3>>guess[i].guess4;
    }
    
    //Exit stage right!
    return 0;
}

void displayIntro()
{    
    cout << "======================= Welcome to Mastermind =======================" << endl;
    cout << "Mastermind is a game of logic." << endl;
    cout << "The goal is to guess the correct four color combination" << endl;
    cout << "by using your previous guesses as clues." << endl;
    cout << "Find specific colors and the orders of the colors"
            <<" that matches exactly with the answer" << endl;
    cout << "To guess, enter the first letter of each color." << endl;
    cout << "The colors consist of : R=RED, B=BLUE, G=GREEN, Y=YELLOW,"
            << " O=ORANGE,P=PURPLE" << endl;
    cout << "An sample guess would be look like this: R R G B" << endl;        
    cout << "=====================================================================" << endl;
    cout << endl;
}

void answer(int *color, char *ans) { //Void Function, Set Answer 2
    *(ans + 0) = (*(color + 0) == 0 ? 'R' : (*(color + 0) == 1 ? 'B' :
            (*(color + 0) == 2 ? 'G' : (*(color + 0) == 3 ? 'Y' :
            (*(color + 0) == 4 ? 'O' : 'P')))));

    *(ans + 1) = (*(color + 1) == 0 ? 'R' : (*(color + 1) == 1 ? 'B' :
            (*(color + 1) == 2 ? 'G' : (*(color + 1) == 3 ? 'Y' :
            (*(color + 1) == 4 ? 'O' : 'P')))));

    *(ans + 2) = (*(color + 2) == 0 ? 'R' : (*(color + 2) == 1 ? 'B' :
            (*(color + 2) == 2 ? 'G' : (*(color + 2) == 3 ? 'Y' :
            (*(color + 2) == 4 ? 'O' : 'P')))));

    *(ans + 3) = (*(color + 3) == 0 ? 'R' : (*(color + 3) == 1 ? 'B' :
            (*(color + 3) == 2 ? 'G' : (*(color + 3) == 3 ? 'Y' :
            (*(color + 3) == 4 ? 'O' : 'P')))));
}

