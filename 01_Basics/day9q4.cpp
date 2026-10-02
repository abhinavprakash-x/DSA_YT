#include<iostream>
using namespace std;

int main() {

    for (int i = 4; i >= 1; i--){
        for (char j = 'A'; j < 'A'+i; j++){
            cout<<j<<" ";
        }
        cout<< endl;
    }
    return 0;
}