#include<iostream>
using namespace std;

int main() {

    int num, factorial = 1;
    cout<<"Enter the Number: ";
    cin>> num;

    while(num >= 1){
        factorial *= num;
        num--;
    }
    cout<< factorial;
    
    return 0;
}