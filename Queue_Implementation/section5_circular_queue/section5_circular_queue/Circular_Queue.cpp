#include "Circular_Queue.h"

Circular_Queue::Circular_Queue(int size) {
    if (size <= 0)
        maxSize = 100;
    else
        maxSize = size;

    front = 0;
    rear = maxSize - 1;
    length = 0;
    arr = new int[maxSize];
}

bool Circular_Queue::isEmpty() { return length == 0; }
bool Circular_Queue::isFull() { return length == maxSize; }

void Circular_Queue::enqueue(int element) {
    if (isFull()) cout << "Queue Full! Can't Enqueue.\n";
    else {
        rear = (rear + 1) % maxSize;
        arr[rear] = element;
        length++;
    }
}

void Circular_Queue::dequeue() {
    if (isEmpty()) cout << "Queue Empty! Can't Dequeue.\n";
    else {
        front = (front + 1) % maxSize;
        length--;
    }
}

int Circular_Queue::frontQueue() {
    if (isEmpty()) {
        cout << "Queue is empty!\n";
        return -1;
    }
    return arr[front];
}

int Circular_Queue::rearQueue() {
    if (isEmpty()) {
        cout << "Queue is empty!\n";
        return -1;
    }
    return arr[rear];
}

void Circular_Queue::printQueue() {
    if (!isEmpty()) {
        cout << "Queue elements: ";
        for (int i = front; i != rear; i = (i + 1) % maxSize)
            cout << arr[i] << " ";
        cout << arr[rear] << endl;
    }
    else cout << "Queue is empty!\n";
}

int Circular_Queue::queueSearch(int element) {
    int pos = -1;
    if (!isEmpty()) {
        for (int i = front; i != rear; i = (i + 1) % maxSize) {
            if (arr[i] == element) {
                pos = i;
                break;
            }
        }
        if (pos == -1 && arr[rear] == element)
            pos = rear;
    }
    else cout << "Queue is empty!\n";
    return pos;
}

Circular_Queue::~Circular_Queue() {
    delete[] arr;
}
