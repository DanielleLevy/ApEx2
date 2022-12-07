//
// Created by danie on 01/12/2022.
//

#include "Header.h"
using namespace std;

int main(int argc, char *argv[]){
//    vector <double> a; //init vector number one
//    vector <double> b; //init vector number two
//    string vectorOne; // init string to get the input
//    string vectorTwo; // init string to get the input
//    getline(cin,vectorOne); //get the input
//    a=CreateVector(vectorOne,' ',a); //create the first vector
//    getline(cin,vectorTwo);         //get the input
//    b=CreateVector(vectorTwo,' ',b); //create the second vector
//    double result; //save the result
//    if(CheckInput(a,b)!=-1){  //if the vectors pass the validation check , calculate:
//        printFun(euclideanDistance(a,b));
//        printFun(manhattanDistance(a,b));
//        printFun(chebyshec (a,b));
//        printFun(canberraD(a,b));
//        printFun(minkowskiDistance(a,b));
//    }
//    else{
//        cout<<"Input check failed, please try again"<<endl;
//        exit(0);
//    }
string path=argv[1];
string vector=argv[2];
vector<Sample> db= ReadFromFile(path);
for(int i =0;i<db.size();i++)
    {
    cout<<db[i].label <<endl;
    for(int j =0;j<db[i].deatils.size();j++){
        cout<<db[i].deatils[j] <<endl;
    }
    }
return 0;

}
