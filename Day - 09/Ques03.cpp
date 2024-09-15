// Ques 3: Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, a pointer to the integer, and a pointer to that pointer. Use all three to print the value of the integer.

#include<iostream>
using namespace std;
int main(){
    int num = 100;
    int* ptr = &num;
    int** ptrToPtr = &ptr;
    cout << "Value using variable: " << num << endl;
    cout << "Value using pointer: " << *ptr << endl;
    cout << "Value using pointer to pointer: " << **ptrToPtr << endl;
    return 0;
}