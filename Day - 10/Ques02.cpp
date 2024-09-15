// Ques 2: Write a function bool isPalindrome(const std::string &str) that checks whether a given string is a palindrome (a word, phrase, or sequence that reads the same backward as forward). The function should ignore spaces, punctuation, and case sensitivity. Test your function with various strings in the main() function.

// Example:

// Input: "A man, a plan, a canal, Panama"
// Output: true
#include<iostream>
using namespace std;
bool isPalindrome(const string str){
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        while (left < right && !isalnum(str[left])) left++;
        while (left < right && !isalnum(str[right])) right--;
        if (std::tolower(str[left]) != tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    string str1 = "A man, a plan, a canal, Panama";
    string str2 = "racecar";
    string str3 = "hello";
    cout << "Is palindrome (str1): " << isPalindrome(str1) << endl;
    cout << "Is palindrome (str2): " << isPalindrome(str2) << endl;
    cout << "Is palindrome (str3): " << isPalindrome(str3) << endl;
    return 0;
}