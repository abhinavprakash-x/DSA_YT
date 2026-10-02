#include<iostream>
using namespace std;

int main() {
    
    int arr[20], sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout<<"Enter 20 Elements: ";
    for(int i=0; i<n; ++i){
        cin>> arr[i];
        sum += arr[i];
    }

    cout<<"Sum: "<< sum;

    return 0;
}