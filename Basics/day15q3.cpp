#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter the limit n: ";
    cin>> n;

    int i = 0;
    while(i < n){
        ++i;
        if(i%3 == 0 || i%5 == 0) continue;
        cout<<i<<" ";
    }

    return 0;
}