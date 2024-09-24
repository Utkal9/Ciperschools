#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }
    ~Stack() {
        delete[] arr;
    }
    void push(int item) {
        if (isFull()) {
            cout << "Stack Overflow! Unable to push " << item << endl;
            return;
        }
        arr[++top] = item;
        cout << item << " pushed to stack." << endl;
    }
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Unable to pop." << endl;
            return -1;
        }
        return arr[top--];
    }
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty! No top element." << endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty() {
        return top == -1;
    }
    bool isFull() {
        return top == capacity - 1;
    }
};

int main() {
    Stack stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);

    cout << "Top element is: " << stack.peek() << endl;

    cout << stack.pop() << " popped from stack." << endl;
    cout << stack.pop() << " popped from stack." << endl;

    cout << "Top element is: " << stack.peek() << endl;

    return 0;
}