// Write a C++ program that take txt file input and write your details inside that file through c++ and then print this details.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName = "details.txt";
    ofstream outFile(fileName);
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }
    outFile << "Name: Utkal Behera" << endl;
    outFile << "Age: 21" << endl;
    outFile << "Occupation: Software Engineer" << endl;
    outFile.close();
    ifstream inFile(fileName);
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }
    cout << "Details from the file:" << endl;
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
    return 0;
}