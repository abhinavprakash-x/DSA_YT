#include<iostream>
using namespace std;

void Swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    
    int a,b;
    cout<<"Enter a and b: ";
    cin>> a>> b;

    Swap(a,b);
    cout<<"After Swapping: \na: "<< a<<"\nb: "<< b;

    return 0;
}