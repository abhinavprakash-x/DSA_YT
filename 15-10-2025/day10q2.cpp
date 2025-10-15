#include<iostream>
using namespace std;

int main() {
    
    for(char i = 'A'; i < 'A'+5; i++){
        for(int j = 1; j <= (5-i+64); j++) cout<<"  ";
        for(char j = 'A'; j <= i; j++) cout<<i<<" ";
        cout<< endl;
    }

    return 0;
}