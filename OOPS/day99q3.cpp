#include <iostream>
using namespace std;

class Laptop
{
public:
    string brand;
    string processor;
    bool isOn;
    double screenSize;
    double batteryLevel; // in percentage
    int ram; // in GB
    int storage; // in GB

    void powerOn() {
        isOn = true;
        cout << "Laptop powered on." << endl;
    }

    void powerOff() {
        isOn = false;
        cout << "Laptop powered off." << endl;
    }

    void openApps(int numApps) {
        if (isOn && batteryLevel > 0) {
            cout << "Opened " << numApps << " apps." << endl;
            batteryLevel -= numApps * 2; // Each app consumes 2% battery
            if (batteryLevel < 0) batteryLevel = 0;
        }
        else {
            cout << "Cannot open apps. Laptop is off or battery is dead." << endl;
        }
    }

    void closeApps(int numApps) {
        if (isOn && batteryLevel > 0) {
            cout << "Closed " << numApps << " apps." << endl;
            batteryLevel += numApps * 1; // Closing apps restores 1% battery per app
            if (batteryLevel > 100) batteryLevel = 100;
        }
        else {
            cout << "Cannot close apps. Laptop is off or battery is dead." << endl;
        }
    }

    void charge(double amount) {
        batteryLevel += amount;
        if (batteryLevel > 100) batteryLevel = 100;
        cout << "Charged " << amount << "%. Current battery level: " << batteryLevel << "%" << endl;
    }

    void printSpecs() {
        cout << "Laptop Brand: " << brand << endl;
        cout << "Processor: " << processor << endl;
        cout << "Screen Size: " << screenSize << " inches" << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "Battery Level: " << batteryLevel << "%" << endl;
        cout << "Power Status: " << (isOn ? "On" : "Off") << endl;
    }
};

int main()
{
    Laptop laptop1;
    laptop1.brand = "Dell";
    laptop1.processor = "Intel i7";
    laptop1.screenSize = 15.6;
    laptop1.ram = 16;
    laptop1.storage = 512;
    laptop1.batteryLevel = 50; // 50% battery
    laptop1.isOn = false;

    laptop1.printSpecs();
    laptop1.powerOn();
    laptop1.openApps(5);
    laptop1.printSpecs();

    laptop1.closeApps(3);
    laptop1.printSpecs();

    laptop1.charge(30);
    laptop1.printSpecs();

    laptop1.powerOff();
    laptop1.openApps(2); // Should not open apps since laptop is off
    laptop1.printSpecs();

    return 0;
}