#include<iostream>
#include<cmath>
using namespace std;

int main() {
    
    int num, binarynum = 0, mul = 1;
    cout<<"Enter Decimal Number: ";
    cin>> num;

    for(int i=0; num > 0; i++){
        int digit = num % 2;
        num /= 2;
        binarynum = binarynum + mul * digit;
        mul *= 10;
    }
    cout<< binarynum;

    return 0;
}