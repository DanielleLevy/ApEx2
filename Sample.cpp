//
// Created by danie on 04/12/2022.
//
#include <iostream>
#include <vector>
using namespace std;

class Sample{
public:
    string type;
    int vectorSize;
    vector <double> deatils;
    string label;

    Sample(string typeFromUser,int size, vector <double> a, string l){
        type=typeFromUser;
        vectorSize=size;
        deatils=a;
        label=l;
    }
};
