//
// Created by danie on 01/12/2022.
//

#include "Header.h"
using namespace std;

int main(int argc, char *argv[]) {
    string path = argv[1];
    string distance = argv[2];
    vector<Sample> db = ReadFromFile(
            path);  //Sends the file name of a function that reads from it and returns a vector of samples.
    string vectorFromUser;
    if (db.empty()) {
        //Checks if the file is not empty
        cout << "Inserting an empty file! Try again next time." << endl;
        exit(0);
    } else {
        int size = db[0].vectorSize;    //Saves the size of the vectors in the file for input checks
        while (true) {
            //Receives vectors from the user and sends them to input tests and the KNN
            getline(cin, vectorFromUser);
            vector<double> a = CreateVector(vectorFromUser, ' ');
            if (CheckInput(a, size) != -1) {
                //send to KNN
            } else {
                cout << "Input check failed, please try again" << endl;
                exit(0);
            }
        }

    }
}
