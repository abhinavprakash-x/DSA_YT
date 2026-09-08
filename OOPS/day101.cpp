#include <iostream>
using namespace std;

class Customer {
private:
    string name;
    const int customerId;

public:
    Customer(string n, int id)
        : name(n), customerId(id) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Customer ID: " << customerId << endl;
    }
};

int main() {
    Customer c1("Abhinav", 101);
    c1.display();

    return 0;
}

/*
Q1. What is the const keyword in C++ and how is it used in the context of the Customer class?
The const keyword in C++ is used to declare variables, member functions, or parameters as constant,
meaning their values cannot be modified after initialization. In the context of the Customer class,
the customerId member variable is declared as const, which means that once it is initialized in the constructor,
its value cannot be changed throughout the lifetime of the object. This ensures that each Customer object has a
unique and immutable customer ID.

And the display() member function is also declared as const, indicating that it does not modify any member variables of the class.
*/

/*
Q2. Difference between abstraction and encapsulation in C++?
Abstraction is the process of hiding the internal details of an object and exposing only the necessary information
to the outside world. It allows you to focus on what an object does rather than how it does it.

Encapsulation is the bundling of data and methods that operate on that data within a single unit, such as a class.
It restricts direct access to some of an object's components, which is a way of preventing unintended interference and misuse of the data.
*/