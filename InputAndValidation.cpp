//
// Created by danie on 06/12/2022.
//


#include "Header.h"
using namespace std;

vector<Sample> ReadFromFile(string fileName){
    vector<Sample> db;
    vector<string> row;
    vector<double> detail;
    string line, word,label;
    int size, startSize,counter=0;
    fstream file (fileName.c_str(), ios::in);
    if(file.is_open())
    {
        while(getline(file, line))
        {
            row.clear();
            detail.clear();
            stringstream str(line);

            while(getline(str, word, ','))
                row.push_back(word);
            size= row.size()-1;
            if(counter==0){
                startSize=size;
            }
            if(startSize!=size){
                cout<<"The table contains vectors of different length, try another table."<<endl;
                exit(0);
            }
            label=row.back();
            for (int i=0;i<row.size()-1;i++){
                detail.push_back(stod(row[i]));
            }
            Sample a= Sample(size,detail,label);
            db.push_back(a);
            counter++;
        }
        return db;
    }
    else
        cout<<"Could not open the file\n";
    return db;
}
vector <double> CreateVector(string str, char seprate) {
        /*this function get create a vector from the input
         * input: str- the line that the user put
         *        seprate- A character that tells us how the numbers are separated
         * output: vector full with numbers, if the input was ok*/

        vector<double> v;
        if(str.size()==0){//check if the str empty
            cout<<"you should insert numbers only"<<endl;
            exit(0);
        }
        string number;  //holds the number until the next seprate
        double numberAfterConv;    // wiil hold the number to insert to the vector
        for (int i=0;i<str.size();i++){     // Go through each character in the string
            if(isalpha(str[i]) ){           //Checks if the character is a letter
                cout<<"you should insert numbers only"<<endl;
                cout<<str[i];
                exit(0);
            }
            if (str[i]!=seprate){       //Checks whether the character isn't the separator character (in this case a space)
                number=number+str[i];   //If we haven't reached the separator character, it adds the character to the number
            }
            else if(number.size()!=0 && str[i]==seprate){   //Checks whether we have reached the separator character and there is content in the number
                try{
                    numberAfterConv=stod(number); //Converting a string to a number
                }
                catch(...){
                    //If the conversion was not successful, it was probably not a number: prints an error and exits the program
                    cout<<"error. you should insert numbers only"<<endl;
                    exit(0);
                }
                v.push_back(numberAfterConv);   //If the conversion was successful, pushes the number into the vector
                number.clear(); //If the conversion was successful, pushes the number into the vector
            }
            else{
                //If we have reached a space but there is no value for the number, we will continue until there is a character that is not a space
                continue;
            }
        }
        if(number.size()!=0) {
            //If there is a last number that is not followed by a space, a check is made on it and it is inserted into the vector
            try{
                numberAfterConv=stod(number);
            }
            catch(...){
                cout<<"error. you should insert numbers only"<<endl;
                exit(0);
            }
            v.push_back(numberAfterConv);
        }
        return v;   //Returning the vector
    }

    int CheckInput(vector <double> vector1,int size){
        //The function receives vector and the expected size of the vector
        if (vector1.size()!=size){
            //The vector is not the required size
            cout<<"you should insert a vector at size: " << size <<endl;
            return -1;
        }
        if (vector1.size()==0){
            //If the magnitude of one of the vectors is equal to 0
            cout<<"vector size is 0, The vector must contain at least one number  "<<endl;
            return -1;
        }
        return 0;
    }


