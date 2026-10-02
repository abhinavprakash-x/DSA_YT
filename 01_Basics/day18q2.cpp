#include<iostream>
using namespace std;

int reverse(int x){
    int rev = 0, digit;
    while(x){
        digit = x % 10;
        x /= 10;
        rev = rev * 10 + digit;
    }
    return rev;
}

int main() {
    
    int num;
    cout<<"Enter a Number (-5000 <-> 5000): ";
    cin>> num;

    if(num > 5000 || num < -5000) cout<<"Invalid Constraint.";
    else cout<<reverse(num);

    return 0;
}