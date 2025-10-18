#include<iostream>
using namespace std;

int main() {
    
    for (int i = 1; i <= 6; i++){
        for (int j = 10; j < i+10; j++){
            cout<<j<<" ";
        }
        cout<< endl;
    }

    return 0;
}