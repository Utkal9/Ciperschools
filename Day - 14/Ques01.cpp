// Ques 1: Define a car class with properties brand name , model, engine, number of seats and method displayInfo that display the all information of class.
#include <iostream>
#include <string>
using namespace std;
class Car {
public:
    string brand;
    string model;
    string engine;
    int seats;

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Number of Seats: " << seats << endl;
    }
};

int main() {
    Car myCar;

    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.engine = "1.8L";
    myCar.seats = 5;

    myCar.displayInfo();

    return 0;
}