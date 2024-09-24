// Ques 1: You are tasked with creating a Person class in C++ that stores details of a person, such as firstName, lastName, and age. The class should:

// Have a constructor that takes firstName, lastName, and age as arguments and initializes the member variables.
// Include a method getFullName() that returns the full name of the person (a concatenation of firstName and lastName).
// Add a method getDetails() that returns the firstName, lastName, and age in a tuple.
// Demonstrate the usage of structured bindings to unpack the tuple returned by getDetails().

#include <iostream>
#include <tuple>
#include <string>
using namespace std;
class Person {
private:
    string firstName;
    string lastName;
    int age;

public:
    Person(const string& fName, const string& lName, int age) 
        : firstName(fName), lastName(lName), age(age) {}
    string getFullName() const {
        return firstName + " " + lastName;
    }
    tuple<string, string, int> getDetails() const {
        return make_tuple(firstName, lastName, age);
    }
};

int main() {
    Person person("Utkal", "Behera", 21);
    cout << "Full Name: " << person.getFullName() << endl;
    auto [fName, lName, age] = person.getDetails();
    cout << "Details: " << fName << " " << lName << ", Age: " << age << endl;

    return 0;
}