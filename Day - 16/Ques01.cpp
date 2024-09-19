// Write a C++ code that take linked list from user input that is in sorted order and a value integer. Now insert the value inside linkedlist such that new likedlist is also in sorted order. Sample Input:- 10->20->30->40 value =25 Sample Output:- 10->20->25->30->40
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head = NULL;
    }
    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
    void printResult(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp -> data<<" -> ";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;
    }
    void addNodeInSortedLinkedList(int val){
        Node* newNode = new Node(val);
        // Case 1: Insert at the beginning if the list is empty or val is less than head
        if (head == NULL || head->data >= val) {
            newNode->next = head;
            head = newNode;
            return;
        }
        // Case 2: Insert somewhere in the middle or at the end
        Node* temp = head;
        while (temp->next != NULL && temp->next->data < val) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
};
int main(){
    LinkedList ll;
    int n,element,value;
    cout<<"Enter the no of Nodes: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter Node: ";
        cin>>element;
        ll.insertAtEnd(element);
    }
    cout<<"Enter which node you want to add: ";
    cin>>value;
    ll.addNodeInSortedLinkedList(value);
    ll.printResult();
    return 0;
}