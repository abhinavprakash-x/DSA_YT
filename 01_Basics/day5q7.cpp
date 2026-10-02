#include<iostream>
using namespace std;

int main() {
    int n, a=0, b=1, c;

    cout<<"Enter n: ";
    cin>> n;

    if (n == 0) {
        cout << a;
        return 0;
    } else if (n == 1) {
        cout << b;
        return 0;
    }
    
    for(int i=2; i<=n; ++i){
        c = a + b;
        a = b;
        b = c;
    }
    cout<< c;

    return 0;
}