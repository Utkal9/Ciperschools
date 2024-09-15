// Write a function int stringLength(const std::string &str) that returns the length of a given string. Test your function with various strings in the main() function.

//  Sample Input:- str1 = "Hello, World!"
//  Output:- 13

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    cout<<"Enter the string: ";
    getline(cin, str1);
    cout << str1.length() << endl;
    return 0;
}