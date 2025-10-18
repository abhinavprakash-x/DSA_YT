#include<iostream>
using namespace std;

int main() {
    
    int num, temp;
    cout<<"Enter the Number: ";
    cin>> num;
    temp = num;

    int factorial = 1;
    while(num >= 1){
        factorial *= num--;
    }
    cout<<factorial<< endl;

    factorial = 1;
    do{
        factorial *= temp--;
    } while(temp >= 1);
    cout<<factorial;
    
    return 0;
}