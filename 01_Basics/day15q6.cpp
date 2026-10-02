#include<iostream>
#include<cmath>
using namespace std;

int main() {
    
    int num;
    cout<<"Enter a Number: ";
    cin>> num;
    bool isPrime = true;

    for(int i=2; i <= sqrt(num); ++i){
        if(num%i == 0){
            cout<<"Not Prime";
            isPrime = false;
            break;
        }
    }
    if(isPrime) cout<<"Prime";
    
    return 0;
}