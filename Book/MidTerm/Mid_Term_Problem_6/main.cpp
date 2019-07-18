//Libraries
#include <iostream>//I/O Library
#include <string>
using namespace std;

//Execution begins here
int main(int argc, char** argv) {
    //Output data
    cout<<"This program will convert 2.875 and 0.1796875 into binary, octal and hex. \n";
    cout<<endl;
    cout<<"6a. : \n";
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<" 2.875 -> Base 10 \n";
    cout<<"Converting to Base 2 \n";
    cout<<endl;
    cout<<" 2.875 -> 1 x 2^1 + 1 x 2^0 \n";
    cout<<" According to the table, Base 2 becomes 1 1 \n";
    cout<<endl;
    cout<<"Converting to Base 8 \n";
    cout<<endl;
    cout<<" 1 1 can be grouped as 1 1 0 \n";
    cout<<" 1 1 0 of Base 2 can be converted into Base of 8: 6, Base 8 of 2.875 = 6 \n";
    cout<<endl;
    cout<<"Converting to Base 16 \n";
    cout<<endl;
    cout<<" 1 1 can be grouped as 1 1 0 0 \n";
    cout<<" 1 1 0 0 of Base 2 can be converted into Base of 16: C, Base 16 of 2.875 = C \n";
    cout<<"------------------------------------------------------------------------------------"<<endl;
    
    cout<<endl;
    cout<<endl;
    
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<" 0.1796875 -> Base 10 \n";
    cout<<"Converting to Base 2 \n";
    cout<<endl;
    cout<<"If the multiplication of 2 > 1 write 1, If the multiplication of 2 < 1 write 0 \n";
    cout<<"If the multiplication of 2 = 1, stop \n";
    cout<<endl;
    cout<<" 0.1796875 x 2 = 0.359375 -> 0 \n";
    cout<<" 0.359375  x 2 = 0.71875  -> 0 \n";
    cout<<" 0.71875   x 2 = 1.4375   -> 1 \n";
    cout<<" 0.4375    x 2 = 0.875    -> 0 \n";
    cout<<" 0.875     x 2 = 1.75     -> 1 \n";
    cout<<" 0.75      x 2 = 1.5      -> 1 \n";
    cout<<" 0.5       x 2 = 1        -> 1 \n";
    cout<<endl;
    cout<<"Base 2 of 0.1796875 becomes 0 0 1 0 1 1 1 \n";
    cout<<endl;
    cout<<"Converting to Base 8 \n";
    cout<<endl;
    cout<<" 0 0 1 0 1 1 1 can be grouped as .0 0 1 || .0 1 1 || .1 0 0 \n";
    cout<<"According to the table, Base 8 becomes 0.134 \n";
    cout<<endl;
    cout<<"Converting to Base 16 \n";
    cout<<endl;
    cout<<" 0 0 1 0 1 1 1 can be grouped as .0 0 1 0 || .1 1 1 0 \n";
    cout<<"According to the table, Base 16 becomes 0.2E \n";
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<endl;
    
    
    //Exit stage right!
    return 0;
}
