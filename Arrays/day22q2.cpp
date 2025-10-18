#include<iostream>
using namespace std;

int main() {
    
    int arr[18], sum = 0;
    float avg;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout<<"Enter 18 Elements: ";
    for(int i=0; i<n; ++i){
        cin>> arr[i];
        sum += arr[i];
    }

    avg = sum / n;
    cout<<"Average: "<< avg;

    return 0;
}