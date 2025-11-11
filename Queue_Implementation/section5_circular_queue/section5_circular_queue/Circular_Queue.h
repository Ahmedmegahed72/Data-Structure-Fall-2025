#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#include <iostream>
using namespace std;

class Circular_Queue {
private:
    int rear;
    int front;
    int length;
    int* arr;
    int maxSize;

public:
    Circular_Queue(int size = 100);
    bool isEmpty();
    bool isFull();
    void enqueue(int element);
    void dequeue();
    int frontQueue();
    int rearQueue();
    void printQueue();
    int queueSearch(int element);
    ~Circular_Queue();
};

#endif