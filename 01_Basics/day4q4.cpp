#include<iostream>
using namespace std;

int main() {
    int age;

    cout<<"Enter Your Age: ";
    cin>> age;

    if(age <= 12) cout<<"YES";
    else if(age >= 65) cout<<"YES";
    else cout<<"NO";

    return 0;
}