#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

struct Prime{
	unsigned int prime;
	unsigned int power;
};
struct Primes{
	Prime *prime;
	unsigned int nPrimes;
};

//Function Prototype
Primes *factor(int); //Input an integer, return all prime factors
void prntPrm(Primes *); // Output all prime factors

//Constant Variable

int main(){
    //your code here
    int num;
    cout<<"Please input a number:"<<endl;
    cin>>num;
    
    Primes *p = factor(120);
    cout<<"The Factors of "<<num<<": "<<endl;
    
    prntPrm(p);
    
    
    return 0;
}

Primes *factor(int n){
    int k=2;
    int m[10000]={0};
    while(1<n){
        if (n%k==0){
            m[k]++;
            n=n/k;
        }else
            k++;
    }
    int i=0;
    k=0;
    while(i<10000){
        if(m[i]!=0)k++;
        i++;
    }
    Primes *p = new Primes;
    p->nPrimes=k;
    p->prime = new Prime[k];
    i=0;
    k=0;
    while(i<10000){
        if(m[i]!=0){
            p->prime[k].prime = i;
            p->prime[k].power = m[i];
            k++;
        }
        i++;
    }
    return p;
}

void prntPrm(Primes *p){
    int n = p -> nPrimes;
    int k=0;
    while(k < n){
        cout<<p->prime[k].prime<<"^"<<p->prime[k].power<<" * ";
        k++;
        if(k==n-1)
            break;
    }
    cout<<p->prime[k].prime<<"^"<<p->prime[k].power<<endl;
}


