#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int* arr;

public:
    // Constructor
    Queue(int s) {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Destructor
    ~Queue() {
        delete[] arr;
    }

    // Function to check if queue is empty
    bool isEmpty() {
        return (front == -1);
    }

    // Function to check if queue is full
    bool isFull() {
        return (rear == size - 1);
    }

    // Enqueue ==> add element
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full!\n";
            return;
        }
        if (isEmpty()) front = 0;
        arr[++rear] = value;
        cout << value << " inserted into the queue.\n";
    }

    // Dequeue ==> remove element
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }

        cout << arr[front] << " removed from the queue.\n";

        // one element in the queue
        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
    }


    // Get the front element
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return arr[front];
    }

    // Display all elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {

    // input from user
    /*int size;
    cout << "Enter the size of the Queue: ";
    cin >> size;
    Queue q(size);*/

    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    cout << "Front element: " << q.peek() << endl;

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // Queue full
    q.display();

    return 0;
}
