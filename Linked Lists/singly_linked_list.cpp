#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
    Node(int val, Node* nextNode) : data(val), next(nextNode) {}
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
}

void deleteAtBeginning(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
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
    while (current->next->next != nullptr) {
        current = current->next;
    }
    delete current->next;
    current->next = nullptr;
}

void reverse(Node*& head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    traverse(head);

    insertAtBeginning(head, 0);
    insertAtEnd(head, 4);
    insertAtPosition(head, 5, 2);

    traverse(head);

    deleteAtBeginning(head);
    deleteAtEnd(head);
    deleteAtPosition(head, 1);

    traverse(head);
    reverse(head);
    traverse(head);

    return 0;
}

// Note: The Code is 0 indexed, meaning the first position is 0.