#include<iostream>
using namespace std;

void function(int &n){
    if(n>0){
        int temp = n-1;
        cout<<"Hello Coder Army\n";
        function(temp);
    }
}

int main() {
    
    int n;
    cout<<"Enter the limit n: ";
    cin>>n;

    function(n);

    return 0;
}