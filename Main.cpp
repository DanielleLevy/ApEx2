//
// Created by danie on 01/12/2022.
//

#include "Header.h"
#include "Knn.h"
using namespace std;

int main(int argc, char *argv[]) {
    // Receiving the three arguments from the user from the command line:
    int k = atoi(argv[1]);
    string path = argv[2];
    string distance = argv[3];

    argumentsCheck(k,path,distance);

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
                // Creates a new KNN problem, solves it and prints the answer to the screen -
                // the label of the K nearest neighbors to the given vector according to the given distance function:
               Knn answer(db, distance, k, a);
                cout << answer.findTheLabel()<<endl;
            } else {
                cout << "Input check failed, please try again" << endl;
                exit(0);
            }
        }

    }
}

