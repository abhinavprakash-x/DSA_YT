#include <iostream>
using namespace std;

class Demo {
public:
    int* ptr;

    Demo(int value) {
        ptr = new int(value);
    }

    ~Demo() {
        delete ptr;
    }
};

class Demo2 {
public:
    int* ptr;

    Demo2(int value) {
        ptr = new int(value);
    }

    // Deep copy constructor
    Demo2(const Demo2& other) {
        ptr = new int(*other.ptr);
    }

    ~Demo2() {
        delete ptr;
    }
};

class Demo3 {
public:
    int id;

    Demo3(int value) : id(value) {
        cout << "Constructor called for " << id << endl;
    }

    ~Demo3() {
        cout << "Destructor called for " << id << endl;
    }
};

int main() {
    Demo obj1(10);
    Demo obj2 = obj1;  // Shallow copy

    cout << *obj1.ptr << endl;  // 10
    cout << *obj2.ptr << endl;  // 10

    *obj2.ptr = 50;

    cout << *obj1.ptr << endl;  // 50 (both obj1 and obj2 point to the same memory)
    cout << *obj2.ptr << endl;  // 50

    Demo2 obj3(20);
    Demo2 obj4 = obj3;  // Deep copy

    cout << *obj3.ptr << endl;  // 20
    cout << *obj4.ptr << endl;  // 20

    *obj4.ptr = 100;

    cout << *obj3.ptr << endl;  // 20 (obj3 and obj4 point to different memory)
    cout << *obj4.ptr << endl;  // 100

    Demo3 obj5(1);
    Demo3 obj6(2);
    Demo3 obj7(3);

    return 0;
}



/*
Q1. Difference between Shallow Copy and Deep Copy in C++?
In C++, shallow copy and deep copy refer to two different ways of copying objects that contain pointers.
1. Shallow Copy:
   - A shallow copy creates a new object and copies the values of the member variables from the original object to the new object.
   - If the original object contains pointers, the shallow copy will copy the pointer values, meaning both objects will point to the same memory location.
   - This can lead to issues such as double deletion or unexpected changes in one object affecting the other.
2. Deep Copy:
   - A deep copy creates a new object and allocates separate memory for the member variables, including any pointers.
   - It copies the actual data pointed to by the pointers, ensuring that the new object has its own copy of the data.
   - This prevents issues related to shared memory and allows each object to manage its own resources independently.
*/

/*
Q2. Why are destructors called in reverse order of construction in C++?
In C++, destructors are called in the reverse order of construction to ensure proper resource management and
cleanup. When an object is created, its constructor is called, and when it goes out of scope or is explicitly
deleted, its destructor is called. The reverse order of destruction ensures that:
1. Dependencies are handled correctly: If an object A depends on another object B, and both are created in a certain order,
    destroying them in reverse order ensures that B is destroyed before A. This prevents potential access to already destroyed resources.

2. Resource management: If an object allocates resources (like memory, file handles, etc.) in its constructor, it is important
    to release those resources in the destructor. By destroying objects in reverse order, we ensure that resources are released
    in the correct sequence, preventing resource leaks and undefined behavior.

3. Stack unwinding: In case of exceptions, the stack unwinding process will call destructors in reverse order of construction,
    ensuring that all resources are properly cleaned up even in the presence of errors.
*/