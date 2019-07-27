/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Number.h
 * Author: pmk0625
 *
 * Created on July 26, 2019, 5:37 PM
 */

#ifndef NUMBER_H
#define NUMBER_H

class Number{
protected:
    int number1, number2, number3, number4, number5;
public:
    Number(){
        number1=0;
        number2=0;
        number3=0;
        number4=0;
        number5=0;
    }
    void setNumber1(int);
    void setNumber2(int);
    void setNumber3(int);
    void setNumber4(int);
    void setNumber5(int);
    int getNumber1()const;
    int getNumber2()const;
    int getNumber3()const;
    int getNumber4()const;
    int getNumber5()const;
};


void Number::setNumber1(int x1){
    number1 = x1;
}
void Number::setNumber2(int x2){
    number2 = x2;
}
void Number::setNumber3(int x3){
    number3 = x3;
}
void Number::setNumber4(int x4){
    number4 = x4;
}
void Number::setNumber5(int x5){
    number5 = x5;
}
int Number::getNumber1()const{
    return number1;
}
int Number::getNumber2()const{
    return number2;
}
int Number::getNumber3()const{
    return number3;
}
int Number::getNumber4()const{
    return number4;
}
int Number::getNumber5()const{
    return number5;
}




#endif /* NUMBER_H */

