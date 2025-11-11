#include "Circular_Queue.h"

int main() {
    Circular_Queue q1(5);
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.printQueue();
    cout << "Front of Queue: "<< q1.frontQueue() << endl;
    cout << "Rear of Queue: " << q1.rearQueue() << endl;

    q1.dequeue();
    q1.printQueue();
    cout << "Front of Queue: " << q1.frontQueue() << endl;
    cout << "Rear of Queue: " << q1.rearQueue() << endl;

    q1.enqueue(40);
    q1.enqueue(50);
    q1.enqueue(60); // Queue is not Full here 
    q1.printQueue();
    cout << "Front of Queue: " << q1.frontQueue() << endl;
    cout << "Rear of Queue: " << q1.rearQueue() << endl;

    q1.dequeue();
    q1.enqueue(70);
    q1.enqueue(80); // Queue is Full here
    q1.printQueue();
    cout << "Front of Queue: " << q1.frontQueue() << endl;
    cout << "Rear of Queue: " << q1.rearQueue() << endl;


    return 0;
}
