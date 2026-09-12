// Inheritance in C++
#include <iostream>
using namespace std;

class Base
{
private:
    int baseData;
    void privateMethod()
    {
        cout << "This is a private method." << baseData << endl;
    }
protected:
    int protectedData;
    void protectedMethod()
    {
        cout << "This is a protected method." << protectedData << endl;
    }
public:
    int publicData;
    void publicMethod()
    {
        cout << "This is a public method." << publicData << endl;
    }
};

class Derived : public Base
{
public:
    void accessBaseMembers()
    {
        // baseData is private, so it cannot be accessed directly
        // privateMethod(); // This will cause a compilation error

        // protectedData and protectedMethod() can be accessed in the derived class
        protectedData = 10;
        protectedMethod();

        // publicData and publicMethod() can be accessed in the derived class
        publicData = 20;
        publicMethod();
    }
};

class Human
{
public:
    void speak()
    {
        cout << "Human is speaking." << endl;
    }
};

class Student : public Human
{
public:
    void study()
    {
        cout << "Student is studying." << endl;
    }
};

class Teacher : public Human
{
public:
    void teach()
    {
        cout << "Teacher is teaching." << endl;
    }
};

int main()
{
    cout << "Inheritance in C++" << endl;
    Base baseObj;
    baseObj.publicData = 5;
    baseObj.publicMethod();

    Derived derivedObj;
    derivedObj.accessBaseMembers();

    Student studentObj;
    studentObj.speak();
    studentObj.study();

    Teacher teacherObj;
    teacherObj.speak();
    teacherObj.teach();

    return 0;
}