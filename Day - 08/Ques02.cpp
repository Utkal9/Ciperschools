// Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.

// Sample Input:- String ="Hello, World!"
// character=’l’
// Output:- 3

#include<iostream>
#include<string>
using namespace std;
int countCharacter(string str, char ch){
    int count = 0;
    int length = str.length();
    for(int i=0; i<length; i++){
        if(str[i] == ch){
            count++;
        }
    }
    return count;
}
int main(){
    string str;
    char ch;
    cout<<"Enter the string: ";
    getline(cin, str);
    cout<<"Enter the character: ";
    cin>>ch;
    cout<<countCharacter(str, ch)<<endl;
    return 0;
}