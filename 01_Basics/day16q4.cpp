#include<iostream>
#include<cmath>
using namespace std;

int main() {
    
    int num = 0, octalnum;
    cout<<"Enter Octal Number: ";
    cin>> octalnum;

    for(int i=0; octalnum > 0; i++){
        int digit = octalnum % 10;
        octalnum /= 10;
        num += digit * pow(8,i);
    }
    cout<< num;

    return 0;
}