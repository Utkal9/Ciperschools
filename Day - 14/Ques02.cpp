// Write a program that defines a Rectangle class with a copy constructor
#include <iostream>
using namespace std;
class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w, int h) : width(w), height(h) {}
    Rectangle(const Rectangle &rect) {
        width = rect.width;
        height = rect.height;
    }
    void display() const {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    Rectangle rect1(10, 5);
    Rectangle rect2 = rect1;

    cout << "Original Rectangle: ";
    rect1.display();

    cout << "Copied Rectangle: ";
    rect2.display();

    return 0;
}