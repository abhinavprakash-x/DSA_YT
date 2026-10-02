#include<iostream>
using namespace std;

int main() {
    
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= (5-i); j++) cout<<"  ";
        for(char j = 'A'; j < 'A'+i; j++) cout<<j<<" ";
        for(char j = 'A'+i-2; j >= 'A'; j--) cout<<j<<" ";
        cout<<endl;
    }

    return 0;
}