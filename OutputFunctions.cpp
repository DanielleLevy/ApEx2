//
// Created by danie on 01/12/2022.
//
#include <iostream>
#include <cmath>
#include "Header.h"

void printFun(double number)
{
    /*This function receives the result and prints it in the desired round */
    if(floor(number)==ceil(number)){//If the number int, it will print it with one number after the period
        cout.precision(1);
        cout<<fixed<<number<<endl;
    }
    else{  //Otherwise, it will be printed with 16 digits after the period
        cout.precision(16);
        cout<<fixed<<number<<endl;
    }
}