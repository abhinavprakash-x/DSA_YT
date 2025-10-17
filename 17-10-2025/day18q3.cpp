#include<iostream>
using namespace std;

void three_swap(int &a, int &b, int &c){
    int temp = a;
    a = c;
    c = b;
    b = temp;
}
int main() {
    
    int a,b,c;
    cout<<"Enter a: ";
    cin>> a;
    cout<<"Enter b: ";
    cin>> b;
    cout<<"Enter c: ";
    cin>> c;

    three_swap(a,b,c);

    cout<<"After Swapping: \na: "<< a<<"\nb: "<< b<<"\nc: "<< c;

    return 0;
}