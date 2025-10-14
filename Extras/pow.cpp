#include<iostream>
using namespace std;

double pow(double base, double exponent){
    double power=base;
    for(int i=2; i<=exponent; ++i){
        power *= base;
    }
    return power;
}

int main() {
    
    cout<< pow(1,9)<< endl;
    cout<< pow(6,2)<< endl;
    cout<< pow(2,10)<< endl;
    cout<< pow(1.01, 3.14)<< endl;
    return 0;
}