// Write a program that defines a Student class and uses the this pointer in a member function to display the student's details.
#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
    int rollNo;

public:
    Student(string n, int a, int r) : name(n), age(a), rollNo(r) {}
    void displayInfo() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Roll Number: " << this->rollNo << endl;
    }
};

int main() {
    Student student1("Utkal Behera", 21, 16);
    student1.displayInfo();

    return 0;
}