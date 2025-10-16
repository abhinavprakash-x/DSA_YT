#include<iostream>
#include<cmath>
using namespace std;

int main() {
    
    int num = 0, binarynum;
    cout<<"Enter Binary Number: ";
    cin>> binarynum;

    for(int i=0; binarynum > 0; i++){
        int digit = binarynum % 10;
        binarynum /= 10;
        if(digit) num += pow(2,i);
    }
    int octalnum = 0, mul = 1;

    for(int i=0; num > 0; i++){
        int digit = num % 8;
        num /= 8;
        octalnum = octalnum + mul * digit;
        mul *= 10;
    }
    cout<< octalnum;

    return 0;
}