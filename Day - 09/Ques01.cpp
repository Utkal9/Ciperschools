// Ques 1: Write a C++ program that declares an integer variable, initializes it, and then declares a pointer that stores the address of this variable. Print the value of the variable using both the variable itself and the pointer.
#include<iostream>
using namespace std;
int main(){
    int a = 45;
    int* ptr = &a;
    cout<< "Value using variable: " << a <<endl;
    cout<< "Value using pointer: " << *ptr <<endl;
    return 0;
}
