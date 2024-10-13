#include <iostream>
using namespace std;

class PriorityQueue {
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size;

public:
    PriorityQueue() : size(0) {}

    void enqueue(int value) {
        if (size >= MAX_SIZE) {
            cout << "Priority Queue Overflow\n";
            return;
        }
        int i;
        for (i = size - 1; i >= 0 && arr[i] < value; i--) {
            arr[i + 1] = arr[i];
        }
        arr[i + 1] = value;
        size++;
    }

    void dequeue() {
        if (size <= 0) {
            cout << "Priority Queue Underflow\n";
            return;
        }
        size--;
    }

    int peek() {
        if (size <= 0) {
            cout << "Priority Queue is empty\n";
            return -1;
        }
        return arr[0];
    }

    bool isEmpty() {
        return size == 0;
    }
};

int main() {
    PriorityQueue pq;
    pq.enqueue(30);
    pq.enqueue(50);
    pq.enqueue(10);

    cout << "Top element is " << pq.peek() << endl;

    pq.dequeue();
    cout << "Top element after dequeue is " << pq.peek() << endl;

    return 0;
}