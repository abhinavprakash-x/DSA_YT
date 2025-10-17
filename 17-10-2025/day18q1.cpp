#include<iostream>
using namespace std;

int cube(int x){
    return x*x*x;
}

int main() {
    
    int num;
    cout<<"Enter a Number: ";
    cin>> num;

    cout<<"Cube of Number: "<< cube(num);

    return 0;
}