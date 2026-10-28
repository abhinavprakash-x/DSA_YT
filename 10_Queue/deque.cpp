#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class CircularDeque {
private:
    vector<int> data;
    int front;
    int back;
    int capacity;

public:
    CircularDeque(int n)
    {
        data.resize(n);
        front = -1;
        back = -1;
        capacity = n;
    }

    bool isEmpty()
    {
        return front == -1;
    }

    bool isFull()
    {
        return (back + 1) % capacity == front;
    }

    void pushFront(int value)
    {
        if (isFull())
        {
            cout << "Deque is full!" << endl;
            return;
        }

        if (isEmpty()) front = back = 0;
        else front = (front - 1 + capacity) % capacity;

        data[front] = value;
    }

    void pushBack(int value)
    {
        if (isFull())
        {
            cout << "Deque is full!" << endl;
            return;
        }

        if (isEmpty()) front = back = 0;
        else back = (back + 1) % capacity;

        data[back] = value;
    }

    void popFront()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!" << endl;
            return;
        }

        if (front == back) front = back = -1;
        else front = (front + 1) % capacity;
    }

    void popBack()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!" << endl;
            return;
        }

        if (front == back) front = back = -1;
        else back = (back - 1 + capacity) % capacity;
    }

    int getFront()
    {
        if (isEmpty()) return -1;
        return data[front];
    }

    int getBack()
    {
        if (isEmpty()) return -1;
        return data[back];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Deque is empty!" << endl;
            return;
        }

        int count = (back - front + capacity) % capacity + 1;

        for (int i = 0; i < count; i++)
            cout << data[(front + i) % capacity] << " ";
        cout << endl;
    }
};

int main()
{
    CircularDeque dq(5);

    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushFront(5);
    dq.pushFront(1);
    dq.display();       // 1 5 10 20 30

    dq.popFront();
    dq.pushBack(40);
    dq.display();       // 5 10 20 30 40

    dq.popBack();
    dq.display();       // 5 10 20 30

    cout << dq.getFront() << endl; // 5
    cout << dq.getBack() << endl;  // 30

    cout << endl;

    deque<int> stlDeque;
    stlDeque.push_back(10);
    stlDeque.push_back(20);
    stlDeque.push_front(5);
    stlDeque.push_front(1);

    for (auto elem : stlDeque)
        cout << elem << " "; // 1 5 10 20
    cout << endl;

    stlDeque.pop_front();
    stlDeque.pop_back();
    for (auto elem : stlDeque)
        cout << elem << " "; // 5 10
    cout << endl;

    cout << stlDeque.front() << endl; // 5
    cout << stlDeque.back() << endl;  // 10

    return 0;
}