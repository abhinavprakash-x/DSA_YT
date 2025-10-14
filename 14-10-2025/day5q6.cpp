#include<iostream>
using namespace std;

int main() {
    int n, sum;

    cout<<"Enter the limit n: ";
    cin>> n;

    sum = n*n*(n+1)*(n+1) / 4;
    cout<< sum;

    return 0;
}


/*
OTHER METHOD

sum = 0;
for(int i=1; i<=n; i++){
    sum += i*i*i;
}

*/