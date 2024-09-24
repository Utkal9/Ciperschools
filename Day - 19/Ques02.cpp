// Write C++ program that take input from the txt file and then print output inside terminal. Take any txt file by yourself.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName = "input.txt";
    ifstream inFile(fileName);
    if (!inFile) {
        cerr << "Error: File could not be opened!" << endl;
        return 1;
    }
    cout << "Contents of the file:" << endl;
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
    return 0;
}