#include<iostream>
using namespace std;

int main() {
    
    for (int i = 1; i <= 5; i++){
        for (char j = 'F'; j <= 'F'+5; j++){
            cout<<j<<" ";
        }
        cout<< endl;
    }

    return 0;
}