#include<iostream>
using namespace std;

int main() {
    int age;

    cout<<"Enter Your Age: ";
    cin>> age;

    if(age>=18) cout<<"You are "<< age<< " Years Old.";
    else cout<<"You are a Teenager.";
    
    return 0;
}