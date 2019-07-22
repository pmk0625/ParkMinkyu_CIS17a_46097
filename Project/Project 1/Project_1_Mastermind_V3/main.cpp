/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on July 14, 2019, 08:00 PM
 * Purpose:  Project 1: Mastermind V3
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
enum colors {
    RED, BLUE, GREEN, YELLOW, ORANGE, //ENUM COLORS
    PURPLE
};

//Structures
struct guesses{
    char guess1, guess2, guess3, guess4; //STRUCTURE GUESSES
};

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const int SIZE=4;
const int NUM_GUESS=10;

//Function Prototypes
void displayIntro();
void answer(colors , char *);
bool check1(guesses *, char []);
bool check2(char *, char []);
char LEVEL(char);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Your Code Goes here
    guesses guess[NUM_GUESS]; 
    char ans[SIZE],test[SIZE]; //Number of Answers Array
    bool playAgain = true;
    char symbol;
    char choice;
    
    string level; //String level comment

    level = "***DIFFICULTY LEVEL*** ";
    
    //Play Again Loop
    while (playAgain){
        
        choice = LEVEL(choice);
        if (choice >= '1' && choice <= '2'){
            switch (choice){
                case '1':
                {
                    cout<<level<<" 1 "<<endl;

                    //Randomize the Answer
                    colors set = static_cast<colors>(rand()%PURPLE);

                    //Set the Answer
                    answer(set, ans);

                    //Output data
                    displayIntro();   //Display instruction

                    check1(guess, ans);//Check if User gets the correct answer

                }
                case '2':
                {
                    cout<<level<<" 2 "<<endl;
                    
                    //Randomize the Answer
                    colors set = static_cast<colors>(rand()%PURPLE);
                    
                    //Set the Answer
                    answer(set, ans);
                    
                    //Output data
                    displayIntro();   //Display instruction
                    
                    check2(test, ans);
                    
                }
            }
        } 
        
        cout<<"Would you like to play again? (Y or N)"<<endl;
        
        cin>>symbol;
        
        playAgain = (symbol == 'Y' || symbol == 'y') ? true : false;
    }
    
    //Exit stage right!
    return 0;
}

//Display intro and instructions on how to play
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

//Set answers for Difficulty Level 1
void answer(colors set, char *ans) { 
    *(ans + 0) = ((set + 0) == 0 ? 'R' : ((set + 0) == 1 ? 'B' :
            ((set + 0) == 2 ? 'G' : ((set + 0) == 3 ? 'Y' :
            ((set + 0) == 4 ? 'O' : 'P')))));

    *(ans + 1) = ((set + 1) == 0 ? 'R' : ((set + 1) == 1 ? 'B' :
            ((set + 1) == 2 ? 'G' : ((set + 1) == 3 ? 'Y' :
            ((set + 1) == 4 ? 'O' : 'P')))));

    *(ans + 2) = ((set + 2) == 0 ? 'R' : ((set + 2) == 1 ? 'B' :
            ((set + 2) == 2 ? 'G' : ((set + 2) == 3 ? 'Y' :
            ((set + 2) == 4 ? 'O' : 'P')))));

    *(ans + 3) = ((set + 3) == 0 ? 'R' : ((set + 3) == 1 ? 'B' :
            ((set + 3) == 2 ? 'G' : ((set + 3) == 3 ? 'Y' :
            ((set + 3) == 4 ? 'O' : 'P')))));
}

//Checking if the User gets the answer right for Difficulty Level 1
bool check1(guesses *guess, char ans[]){
    bool colorR[4];
    bool placeR[4];
    for (int i=0; i<4; i++){
        colorR[i]=false;
        placeR[i]=false;
    }
    
    for (int i=0; i<NUM_GUESS; i++){
        cout<<"Again, the colors consist of : R=RED, B=BLUE, G=GREEN, Y=YELLOW,"
                << " O=ORANGE,P=PURPLE" <<endl;
        cout <<"Please input your guesses! "<< endl;
        cin>>guess[0].guess1>>guess[1].guess2>>guess[2].guess3>>guess[3].guess4;
        if (guess[0].guess1 == ans[0]){
            placeR[0] = true;
            cout<<"You guessed Answer 1 Right!"<<endl;
        }else if (guess[0].guess1 == ans[1] || guess[0].guess1 == ans[2] || guess[0].guess1 == ans[3]){
            colorR[0] = true;
            cout<<"Right color but Wrong place"<<endl;
        }else{
            placeR[0] == false;
            colorR[0] == false;
            cout<<"Try again"<<endl;
        }
        if (guess[1].guess2 == ans[1]){
            placeR[1] = true;
            cout<<"You guessed Answer 2 Right!"<<endl;
        }else if (guess[1].guess2 == ans[0] || guess[1].guess2 == ans[2] || guess[1].guess2 == ans[3]){
            colorR[1] = true;
            cout<<"Right color but Wrong place"<<endl;
        }else{
            placeR[1] == false;
            colorR[1] == false;
            cout<<"Try again"<<endl;
        }
        if (guess[2].guess3 == ans[2]){
            placeR[2] = true;
            cout<<"You guessed Answer 3 Right!"<<endl;
        }else if (guess[2].guess3 == ans[0] || guess[2].guess3 == ans[1] || guess[2].guess3 == ans[3]){
            colorR[2] = true;
            cout<<"Right color but Wrong place"<<endl;
        }else{
            placeR[2] == false;
            colorR[2] == false;
            cout<<"Try again"<<endl;
        }
        if (guess[3].guess4 == ans[3]){
            placeR[3] = true;
            cout<<"You guessed Answer 4 Right!"<<endl;
        }else if (guess[3].guess4 == ans[0] || guess[3].guess4 == ans[1] || guess[3].guess4 == ans[2]){
            colorR[3] = true;
            cout<<"Right color but Wrong place"<<endl;
        }else{
            placeR[3] == false;
            colorR[3] == false;
            cout<<"Try again"<<endl;
        }
        //End game
        if (placeR[0] && placeR[1] && placeR[2] && placeR[3]){
            cout<<"You won! Congrats!"<<endl;
            return true;
        }else if (i == NUM_GUESS-1){
            cout<<"You lost! Sorry, try again..."<<endl;
            cout<<"The answer was..."<<endl;
            cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<endl;
            return false;
        }
        cout<<endl;
    }
    cout<<endl;
}

//Checking if the User gets the answer right for Difficulty Level 2
bool check2(char *test, char *ans){
    int allRight=0;
    int justColor=0;
    int temp;
    bool colorR[4];
    bool placeR[4];
    bool allAnswers;
    bool inList = false;
    
    for (int i = 0; i < 4; i++){
        colorR[i] = false;
        placeR[i] = false;
    }
    
    for (int i=0; i<NUM_GUESS; i++){
        cout<<"This is more difficult version!"<<endl;
        cout<<"The more tries accumulated, hint becomes more confusing because it will add up"<<endl;
        cout<<endl;
        cout<<"GOOD LUCK!!!"<<endl;
        cout<<endl;
        cout<<"Again, the colors consist of : R=RED, B=BLUE, G=GREEN, Y=YELLOW,"
                <<" O=ORANGE,P=PURPLE"<<endl;
        cout<<"Please input your guesses! "<< endl;
        cin>>test[0]>>test[1]>>test[3]>>test[4];
        allAnswers = false;
        for (int i=0; i<4; i++){
            if (test[i]==ans[i]){
                allRight++;
                placeR[i] = true;
            }
        }
        for (int i=0; i<4; i++){
            if (!placeR[i]){
                for (int j=0; j<4; j++){
                    if (!placeR[j] && i != j){
                        if (test[i] == ans[j] && !colorR[j]){
                            inList = true;
                            temp = j;
                        }
                    }
                }
                if (inList){
                    justColor++;
                    inList = false;
                    colorR[temp] = true;
                }
            }
        }
        //End game
        if (allRight == 4){
            cout<<"You won! Congrats!"<<endl;
            allAnswers = true;
            return true;
        }else{
            cout<<"Just Color Correct-> "<<justColor<<"   "<<
                    "Color and Place Correct -> "<<allRight<<endl;
            allAnswers = false;
        }
        if (i == NUM_GUESS-1){
            cout<<"You lost! Sorry, try again..."<<endl;
            cout<<"The answer was..."<<endl;
            cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<" "<<ans[3]<<endl;
            return false;
        }
        cout<<endl;
    }
    cout<<endl;
}

char LEVEL(char choice){
    do {
        cout << "Choose from the following Menu" << endl;
        cout << "Type 1 for MasterMind Difficulty Level 1" << endl;
        cout << "Type 2 for MasterMind Difficulty Level 2" << endl;
        cin>>choice;
    } while (choice == 1 || choice == 2);
    return choice;
}