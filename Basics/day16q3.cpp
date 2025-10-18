#include<iostream>
#include<cmath>
using namespace std;

int main() {
    
    int num, octalnum = 0, mul = 1;
    cout<<"Enter Decimal Number: ";
    cin>> num;

    for(int i=0; num > 0; i++){
        int digit = num % 8;
        num /= 8;
        octalnum = octalnum + mul * digit;
        mul *= 10;
    }
    cout<< octalnum;

    return 0;
}