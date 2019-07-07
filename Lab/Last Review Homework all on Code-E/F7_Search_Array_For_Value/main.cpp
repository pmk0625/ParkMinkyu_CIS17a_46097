/* 
 * Purpose:  Searching for multiple occurrence of patterns
 * Note:  cout proceeds to null terminator, cin reads to end of line
 *        for character arrays
 * 
 */

//System Libraries Here
#include <iostream>//cin,cout,getline()
#include <cstring> //strlen()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//PI, e, Gravity, or conversions

//Function Prototypes Begins Here
//srch1 utility function Input->start position, Output->position found or not
//srch1 is a simple linear search function, repeat in srchAll till all found
//srch1 Input->sentence, pattern, start position Output-> position found
//Remember arrays start at index/position 0
//srchAll Input->sentence, pattern Output->position array
int  srch1(const char [],const char [],int);//Search for 1 occurrence
void srchAll(const char [],const char [],int []);//Search for all occurrences
void print(const char []);//Print the character arrays

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int LINE=81;               //Size of sentence or pattern to find
    char sntnce[LINE],pattern[LINE]; //80 + null terminator
    int match[LINE];                 //Index array where pattern was found
    int position=-1;
    
    //Input a sentence and a pattern to match
    cout<<"Match a pattern in a sentence."<<endl;
    cout<<"Input a sentence"<<endl;
    cin.getline(sntnce,LINE);
    cout<<"Input a pattern."<<endl;
    cin.getline(pattern,LINE);
    position = srch1 (sntnce, pattern, position);
    
    //Search for the pattern
    //Input the sentence and pattern, Output the matching positions
    //Remember, indexing starts at 0 for arrays.
    
    //Display the inputs and the Outputs
    cout<<endl<<"The sentence and the pattern"<<endl;
    print(sntnce);
    print(pattern);
    cout<<"The positions where the pattern matched"<<endl;
    if(position == -1){
        cout<<"None"<<endl;
    }else{
        srchAll(sntnce, pattern, match);
    }
    
    //Exit
    return 0;
}


int srch1(const char sntnce[],const char pattern[],int position){
    for(int i=0;sntnce[i]!='\0';i++)
    {
        int j=0;
        if(sntnce[i]==pattern[j])
        {
            position = i;
            while(sntnce[i]==pattern[j])
            {
                i++;
                j++;
            }
        if(pattern[j]=='\0')
        {
            break;
        }
        else
        {
        i=position;
        position=0;
        }
    }
}
return position;
}

void srchAll(const char sntnce[],const char pattern[],int match[]){
    int count = 0;
    int n1 = strlen(pattern);
    int n2 = strlen(sntnce);
    for (int i=0; i<=n2-n1; i++){
        int j=0;
        for (j= 0; j<n1; j++){
            if (sntnce[i+j] != pattern[j]){
                break;
            }
        }
        if (j == n1){
            cout<<i<<endl;
        }
    }
}

void print(const char str[81]){
    cout<<str<<endl;
}
