#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class Stack {
private:
    Node* top;
public:
    Stack() : top(nullptr) {}
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }
    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }
    bool isEmpty() {
        return top == nullptr;
    }
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Top element is " << stack.peek() << endl;
    stack.pop();
    cout << "Top element after pop is " << stack.peek() << endl;
    return 0;
}