/*
1: Difference between Compile time Polymorphism and Runtime Polymorphism
ans: Compile time polymorphism is achieved through function overloading and operator overloading,
        where the method to be invoked is determined at compile time.
     Runtime polymorphism, on the other hand, is achieved through inheritance and virtual functions,
        where the method to be invoked is determined at runtime based on the object type.

2: Overload this Operator ( * Multiply) and Unary Operator (- Minus), with your own Example.
3: Create a Virtual Function Example in C++ with your own example.
*/

#include <iostream>
#include <vector>
using namespace std;

class Complex {
public:
    float real;
    float imag;

    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    Complex operator * (const Complex& c) {
        float r = (real * c.real) - (imag * c.imag);
        float i = (real * c.imag) + (imag * c.real);
        return Complex(r, i);
    }

    Complex operator - () {
        return Complex(-real, -imag);
    }

    Complex operator - (const Complex& c) {
        float r = real - c.real;
        float i = imag - c.imag;
        return Complex(r, i);
    }
};

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    Complex c1(2.0, 3.0);
    Complex c2(4.0, 5.0);

    Complex c3 = c1 * c2;
    Complex c4 = -c1;
    Complex c5 = c2 - c1;

    cout << "Complex Number 1: (" << c1.real << ", " << c1.imag << "i)" << endl;
    cout << "Complex Number 2: (" << c2.real << ", " << c2.imag << "i)" << endl;
    cout << "Multiplication Result: (" << c3.real << ", " << c3.imag << "i)" << endl;
    cout << "Negation Result: (" << c4.real << ", " << c4.imag << "i)" << endl;
    cout << "Subtraction Result: (" << c5.real << ", " << c5.imag << "i)" << endl;

    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw();
    shape2->draw();

    vector<Shape*> shapes = {shape1, shape2};
    for (Shape* shape : shapes) {
        shape->draw();
    }
    
    delete shape1;
    delete shape2;

    return 0;
}