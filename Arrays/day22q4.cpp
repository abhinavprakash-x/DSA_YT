#include<iostream>
using namespace std;

int main() {
    
    char arr[26];

    for(char i='a'; i<='z'; ++i){
        arr[i] = i;
        cout<< arr[i]<<" ";
    }
    
    return 0;
}