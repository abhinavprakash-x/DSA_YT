#include<iostream>
using namespace std;

int main() {
    
    char character1 = 'a', character2 = 'A';

    while(character1 <= 'z'){
        cout<<character1<<" ";
        character1++;
    }
    cout<< endl;
    while(character2 <= 'Z'){
        cout<<character2<<" ";
        character2++;
    }
    
    return 0;
}