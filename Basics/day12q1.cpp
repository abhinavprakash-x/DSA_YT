#include<iostream>
using namespace std;

int main() {
    
    double temp;
    cout<<"Enter Water Temperature: ";
    cin>> temp;

    if(temp >= 70 && temp < 90) cout<<"Yes.";
    else cout<<"No.";
    
    return 0;
}