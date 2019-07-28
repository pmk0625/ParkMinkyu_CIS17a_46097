/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SavingsAccount.h
 * Author: pmk0625
 *
 * Created on July 27, 2019, 7:54 PM
 */

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

//Class
class SavingsAccount
{
public:
        SavingsAccount(float);               //Constructor
        void  Transaction(float);            //Procedure
        float Total(float=0,int=0);	     //Savings Procedure
        float TotalRecursive(float=0,int=0);
        void  toString();                    //Output Properties
private:
        float Withdraw(float);               //Utility Procedure
        float Deposit(float);                //Utility Procedure
        float Balance;                       //Property
        int   FreqWithDraw;                  //Property
        int   FreqDeposit;                   //Property
};


#endif /* SAVINGSACCOUNT_H */

