// Ques 2: Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data at the end of a singly linked list. nput: A linked list with elements 10 -> 20 -> 30, and a new data 40
// Output: The linked list becomes 10 -> 20 -> 30 -> 40

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
void insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}
int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printLinkedList(head);
    insertAtEnd(head, 40);
    printLinkedList(head);

    Node* current = head;
    Node* nextNode;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
    return 0;
}