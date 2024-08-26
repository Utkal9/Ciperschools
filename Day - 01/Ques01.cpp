#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    string s2;
    cout<<"Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    cout << "Concatenated string: "<< s1+s2;
    return 0;
}