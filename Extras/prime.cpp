#include<iostream>
using namespace std;

int main() {

    int n,i,j;
    cout<<"Enter the limit n: ";
    cin>> n;

    for(i=1; i<=n; ++i){
        bool isPrime = true;
        for(j=2; j <= (i/2); ++j){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) cout<< i<< " ";
    }

    return 0;
}

/*
NB: Line 12: j <= (i/2);
This is inefficient instead use j <= sqrt(i)
sqrt(i) is stored in cmath header file!!
*/