# APEX2

## How to compile:
write the following in the terminal , after each one press enter:

1. git clone git@github.com:DanielleLevy/ApEx2.git
2. cd ApEx2
3. make

## How to run:
1. make sure youre in ApEx2. if not write cd ApEx2
2. write :
./a.out k pathfile distance
3. press enter
4. write the vector in command line
5. press enter
6. steps 4-5 again and again 
7. if you want to stop press ctrl+C


## Description:
This is the second exercise out of 4 exercises in the "Advanced Programming 1" course. The exercise is a continuation of the first exercise in the course. In this part of the exercise we divided the work between us, each of us performed several departments and functions as detailed below:

1. Sample - we created a "sample" class (in the cpp file and in the h file). The class is initialized by three things: the size of the sample (it is assumed that the sample is an integer size - int), the details of the sample (a vector that will contain all the details - the vectors of the sample), and a label of each sample (each sample is classified into a type of flower, the label is a string).

2. Distance - we created a "distance" class (in the cpp file and in the h file). The class is initialized by a "choice" string that you will receive from the user and according to the entered string there is a sending and classification to the type of distance expressed in the KNN algorithm. We created a calc function which, according to the entered string, sends to another distance calculation function among the 5 implemented in exercise 1: Euclidean distance (AUC), Manhattan distance (MAN), Chebyshev distance (CHB), Canberra distance (CAN), Minkowski distance (MIN).
All five distance functions are implemented in this class, each function receives two vectors when needed and returns the distance between them according to its implementation.

3. KNN - we created a class that according to the KNN algorithm solves the problem (in the cpp file and in the h file). The class is initialized by 5 things: data base (a vector of samples - from the requested file), distance (a string of the type of distance that the user entered), K (a positive integer of the number of neighbors requested), vector from the user (a vector of doubles, after converting the string that the user inserted as a vector into a literal vector of double).
The class contains a function to find the requested label of the vector from the user. The function goes through all the samples in the database and calculates the distance between each sample and the given vector. It stores the distances in a vector type variable, which contains pairs of distance and sample. Then, we implemented the bubble sort algorithm to sort the distances so that the smallest distances (and their labels) are first. Then, we made a vector of strings of labels that contained the first K labels, these are the labels of the samples with the smallest distance to the vector (K nearest neighbors). We used a map to find the label that returns the most from the list of labels. We return this label - as a string.
* If there is more than one label that is the most common, we will return one of the most common labels in the list.

4. main - we created a main function that we run. The function accepts 4 arguments: command to run, K (converted to int), string of file and string of distance type. Send K and the distance to check arguments (will be detailed later). Create a vector of samples called Data Base that will contain all the samples we read from the file. Check that K is not too large and that the database is not empty, and return error messages accordingly. We created a loop that as long as the user enters vectors it will continue to work. The loop creates a vector from the user's input string (the vector received from the user). If the vector passes input tests, the database, K, distance type and vector is sent to the KNN class, and the resulting solution is printed (the label of the K closest neighbors to the user's vector, according to the appropriate file and distance type). If the input checks fail, we will return an error message.

5. InputAndValidation - we created a file of 4 functions that check the input and make sure that everything is correct and, if not, return an error message accordingly:
A. A function that accepts as input a file and returns a vector of samples received in it. The function verifies that the file is opened, that all the vectors in the file are the same size, that the vectors in the file contain only numbers.
B. A function that receives as input a string and a delimiter and returns a vector of samples from the input. The function verifies that the string is not empty, that the string is of numbers, and does additional checks such as verifying that there are no spaces.
C. A function that receives as input a vector of double and size and returns -1 if the vector is of size 0 or not of a size that matches the vectors in the file and returns 0 if everything is normal.
D. A function that checks the correctness of the arguments, it receives K and the name of a distance function. The function checks that K is greater than 1 (the test on the upper limit of K is performed in main), and that the string of the distance function is one of the 5 requested functions.
* Because of the conversion of K to int in main by atoi, if K is a fraction then it is rounded, and if it is a negative number we treat it as 0 and then it fails in checking the arguments here.

More comments:
1. In each vector the numbers are separated by one space.
2. Running the program should be from the "main.cpp" file only.
3. The program works in such a way that the user enters a vector, receives an answer and can then enter another vector and so on. Each time a new KNN problem will be created (but still with the same arguments of K, file and distance function) the program will only end when the user stops inserting vectors (or if there is any error as detailed above - then an error message will also be printed).
4. When the user provides the file name as input, the file should be in the same folder as the code. If the file is not there, the user should bring the path of the file.
5. This program was written in the CPP language, developed in the CLION development environment and adapted to run on Bar Ilan University servers (U2/PLANET), as requested.
