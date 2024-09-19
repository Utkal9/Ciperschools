// Write a C++ code that take linked list from user input and a value integer . Delete the value from the linkedlist. Sample Input :- 10->20->30->40 value = 20 Sample Output :- 10->30->40
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
    void deleteData(int val){
        if(head == NULL) return;
        if(head->data == val) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;
        }
        Node* temp = head;
        while(temp -> next != NULL){
            if(temp -> next -> data == val){
                Node* toDelete = temp -> next;
                temp -> next = temp -> next -> next;
                delete(toDelete);
                return;
            }
            temp = temp -> next;
        }
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
    cout<<"Enter which node you delete: ";
    cin>>value;
    ll.deleteData(value);
    ll.printResult();
    return 0;
}