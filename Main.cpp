//
// Created by danie on 01/12/2022.
//

#include "Header.h"
using namespace std;

int main(int argc, char *argv[]){
string path=argv[1];
string distance=argv[2];
vector<Sample> db= ReadFromFile(path);
string vectorFromUser;
int size=db[0].vectorSize;
    while (true){
        getline(cin,vectorFromUser);
        vector <double> a=CreateVector(vectorFromUser,' ');
        if(CheckInput(a,size)!=-1){
            //send to KNN
        }
        else{
            cout<<"Input check failed, please try again"<<endl;
            exit(0);
            }
    }

}
