#include <iostream>
using namespace std;

int main() {
    
    int octalnum;
    cout << "Enter Octal Number: ";
    cin >> octalnum;

    int decimal = 0, power = 1;
    for(int i = 0; octalnum > 0; i++) {
        int digit = octalnum % 10;
        octalnum /= 10;
        decimal += digit * power;
        power *= 8;
    }
    
    int binary = 0, mul = 1;
    for(int i = 0; decimal > 0; i++) {
        int digit = decimal % 2;
        decimal /= 2;
        binary += mul * digit;
        mul *= 10;
    }

    cout << "Binary Number: " << binary << endl;

    return 0;
}