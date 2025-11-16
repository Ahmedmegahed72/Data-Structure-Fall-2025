#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    // Insert at beginning
    void insertFront(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // Insert at end
    void insertEnd(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    // Delete by value
    void remove(int value) {
        if (head == nullptr) return;

        Node* temp = head;

        // If head is the node to delete
        if (temp->data == value) {
            head = temp->next;
            if (head != nullptr) head->prev = nullptr;
            delete temp;
            return;
        }

        while (temp != nullptr && temp->data != value) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Value not found!" << endl;
            return;
        }

        // Remove the node
        if (temp->next != nullptr)
            temp->next->prev = temp->prev;

        if (temp->prev != nullptr)
            temp->prev->next = temp->next;

        delete temp;
    }

    // Display forward
    void displayForward() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Display backward
    void displayBackward() {
        if (head == nullptr) return;

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next; // go to end
        }

        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertFront(10);
    dll.insertFront(5);
    dll.insertEnd(20);
    dll.insertEnd(30);

    cout << "Forward: ";
    dll.displayForward();

    cout << "Backward: ";
    dll.displayBackward();

    dll.remove(20);
    cout << "After deleting 20: ";
    dll.displayForward();

    return 0;
}
