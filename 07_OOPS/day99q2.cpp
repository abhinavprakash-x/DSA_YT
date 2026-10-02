#include <iostream>
using namespace std;

class Car
{
public:
    string model;
    bool isRunning;
    double fuelLevel;
    int year;
    int speed;

    void startEngine() {
        isRunning = true;
        cout << "Engine started." << endl;
    }

    void stopEngine() {
        isRunning = false;
        cout << "Engine stopped." << endl;
    }

    void accelerate(int amount) {
        if (isRunning) {
            speed += amount;
            cout << "Accelerated to " << speed << " km/h." << endl;
        }
        else {
            cout << "Cannot accelerate. Engine is off." << endl;
        }
    }

    void brake(int amount) {
        if (isRunning) {
            speed -= amount;
            if (speed < 0) speed = 0;
            cout << "Slowed down to " << speed << " km/h." << endl;
        }
        else {
            cout << "Cannot brake. Engine is off." << endl;
        }
    }

    void refuel(double amount) {
        fuelLevel += amount;
        cout << "Refueled " << amount << " liters. Current fuel level: " << fuelLevel << " liters." << endl;
    }

    void printDetails() {
        cout << "Car Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Fuel Level: " << fuelLevel << " liters" << endl;
        cout << "Engine Status: " << (isRunning ? "Running" : "Stopped") << endl;
    }
};

int main()
{
    Car car1;
    car1.model = "Toyota Camry";
    car1.year = 2020;
    car1.fuelLevel = 50.0;
    car1.speed = 0;
    car1.isRunning = false;

    car1.startEngine();
    car1.accelerate(60);
    car1.brake(20);
    car1.refuel(10);
    
    car1.printDetails();
    car1.stopEngine();
    car1.printDetails();

    return 0;
}