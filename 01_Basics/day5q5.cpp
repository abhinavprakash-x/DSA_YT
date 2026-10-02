#include<iostream>
using namespace std;

int main() {
    int n, sum;

    cout<<"Enter the limit n: ";
    cin>> n;

    sum = n*(n+1)*(2*n+1) / 6;
    cout<< sum;

    return 0;
}


/*
OTHER METHOD

sum = 0;
for(int i=1; i<=n; i++){
    sum += i*i;
}

*/