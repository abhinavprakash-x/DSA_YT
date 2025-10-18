#include<iostream>
using namespace std;

int main() {
    
    int arr[] = {4,3,23,44,34,13,64,75,69,53,11};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=0; i<n-1; ++i){
        for(int j=0; j<n-i-1; ++j){
            if(arr[j+1] < arr[j]){
                swap(arr[j+1], arr[j]);
            }
        }
    }

    cout<<"Third Smallest Element is: "<< arr[2];

    return 0;
}



/*
7. What is Byte Addressable?
Every Byte of Memory has a unique Address associated to it, this concept
is called Byte Addressable/.
*/