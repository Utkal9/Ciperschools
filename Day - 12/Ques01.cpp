// Ques 1 : Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value. Input: A linked list with elements 10 -> 20 -> 30 -> 40
// Output: 10 20 30 40

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};

void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create nodes
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    // Print the linked list
    printLinkedList(head);

    // Clean up memory
    Node* current = head;
    Node* nextNode;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
    return 0;
}