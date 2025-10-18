#include<iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"Enter the limit n: ";
    cin>> n;

    int i = 1;
    while(i <= n){
        if(i%2 == 0) cout<<i<<" ";
        ++i;
    }
    cout<< endl;
    i = 1;
    do{
        if(i%2 == 0) cout<<i<<" ";
        ++i;
    } while(i <= n);

    return 0;
}