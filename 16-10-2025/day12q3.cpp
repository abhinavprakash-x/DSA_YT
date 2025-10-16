#include<iostream>
using namespace std;

int main() {
    
    int age;
    cout<<"Emter Your Age in Years: ";
    cin>> age;

    if(age >= 13 && age <= 19) cout<<"Teenager.";
    else cout<<"Not Teenager.";
    
    return 0;
}