/*
Q1. What is a Symbol Table?
ans: It is a data structure that stores identifiers and addresses and size.
Name(identifier)  Type(data type)  Scope(local/global)  Category(constant, function, etc.)	Additional Info(read only, etc.)
*/

// Q2.
#include<iostream>
using namespace std;

int main()
{
    int num = 10;
    int *p = &num;
    cout << num << endl;
    cout << *p << endl;
    cout << &num << endl;
    cout << p << endl;
    cout << &p << endl;

    *p += 5;
    cout << num << endl;
    cout << *p << endl;
    cout << &num << endl;
    cout << p << endl;
    cout << &p << endl;
    return 0;
}