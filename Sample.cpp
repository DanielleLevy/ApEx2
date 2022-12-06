//
// Created by danie on 04/12/2022.
//
#include <iostream>
#include <vector>
#include "Sample.h"

using namespace std;

Sample::Sample(string typeFromUser,int size, vector <double> a, string l){
        type=typeFromUser;
        vectorSize=size;
        deatils=a;
        label=l;
    }

