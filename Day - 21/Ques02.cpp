// Write C++ program that detect the cycle inside a given linkedlist if their is any cycle present then print true otherwise print false. Input: head = [3,2,0,-4], pos = 1. Output: true. Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
bool hasCycle(Node* head) {
    if (head == nullptr) return false;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }
    return false;
}

Node* createLinkedListWithCycle(int arr[], int n, int pos) {
    Node* head = new Node(arr[0]);
    Node* current = head;
    Node* cycleNode = nullptr;

    for (int i = 1; i < n; i++) {
        current->next = new Node(arr[i]);
        current = current->next;
        if (i == pos) {
            cycleNode = current;
        }
    }

    if (cycleNode != nullptr) {
        current->next = cycleNode;
    }

    return head;
}
void freeList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

int main() {
    int arr[] = {3, 2, 0, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos = 1;

    Node* head = createLinkedListWithCycle(arr, n, pos);
    if (hasCycle(head)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}