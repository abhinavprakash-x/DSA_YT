#include<iostream>
using namespace std;

int main() {
    
    int a,b,c;
    cout<<"Enter three Numbers: ";
    cin>> a>> b>> c;

    if(a>b || a>c) cout<<"Yes";
    else cout<<"No";
    
    return 0;
}