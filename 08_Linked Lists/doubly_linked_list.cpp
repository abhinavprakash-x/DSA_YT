#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
    Node(int val, Node* nextNode, Node* prevNode) : data(val), next(nextNode), prev(prevNode) {}
};

void traverse(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

void insertAtBeginning(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    if (head != nullptr) {
        head->prev = newNode;
    }
    head = newNode;
}

void insertAtPosition(Node*& head, int val, int position) {
    if (position == 0) {
        insertAtBeginning(head, val);
        return;
    }
    Node* newNode = new Node(val);
    Node* current = head;
    for (int i = 0; i < position - 1 && current != nullptr; ++i) {
        current = current->next;
    }
    if (current == nullptr) {
        cout << "Position out of bounds" << endl;
        delete newNode;
        return;
    }
    newNode->next = current->next;
    newNode->prev = current;
    if (current->next != nullptr) {
        current->next->prev = newNode;
    }
    current->next = newNode;
}

void insertAtEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
}

void deleteAtBeginning(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr;
    }
    delete temp;
}

void deleteAtPosition(Node*& head, int position) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    if (position == 0) {
        deleteAtBeginning(head);
        return;
    }
    Node* current = head;
    for (int i = 0; i < position - 1 && current != nullptr; ++i) {
        current = current->next;
    }
    if (current == nullptr || current->next == nullptr) {
        cout << "Position out of bounds" << endl;
        return;
    }
    Node* temp = current->next;
    current->next = temp->next;
    if (temp->next != nullptr) {
        temp->next->prev = current;
    }
    delete temp;
}

void deleteAtEnd(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->prev->next = nullptr;
    delete current;
}

void reverse(Node*& head) {
    Node* current = head;
    Node* temp = nullptr;
    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp != nullptr) {
        head = temp->prev;
    }
}

int main() {
    Node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtBeginning(head, 5);
    insertAtPosition(head, 15, 2);

    traverse(head);

    deleteAtBeginning(head);
    deleteAtPosition(head, 1);
    deleteAtEnd(head);

    traverse(head);

    reverse(head);
    traverse(head);

    return 0;
}