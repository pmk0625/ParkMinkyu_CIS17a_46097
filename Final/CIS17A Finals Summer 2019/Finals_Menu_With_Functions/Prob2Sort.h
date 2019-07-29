/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Prob2Sort.h
 * Author: pmk0625
 *
 * Created on July 27, 2019, 7:57 PM
 */
#include <cstdlib>
#ifndef PROB2SORT_H
#define PROB2SORT_H

//Class
template<class T>
class Prob2Sort
{
private:
        int *index;                                 //Index that is utilized in the sort
public:
        Prob2Sort(){index=NULL;};                   //Constructor
        ~Prob2Sort(){delete []index;};              //Destructor
        T * sortArray(const T*,int,bool);           //Sorts a single column array
        T * sortArray(const T*,int,int,int,bool);   //Sorts a 2 dimensional array represented as a 1 dim array
}; 


#endif /* PROB2SORT_H */

