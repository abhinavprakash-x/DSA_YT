#include<iostream>
using namespace std;

int factorial(int num){

    if(num < 0) return 0;
    else if(num==0) return 1;

    int fact = 1;
    while(num >= 1){
        fact *= num;
        num--;
    }
    return fact;
}

int nCr(int n, int r){
    return factorial(n) / (factorial(n-r) * factorial(r));
}

int main() {
    
    int n,r;
    cout<<"Enter nCr values (n,r): ";
    cin>> n>> r;

    cout<<"nCr = "<< nCr(n,r);

    return 0;
}