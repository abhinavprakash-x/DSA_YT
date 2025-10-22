#include<iostream>
using namespace std;

int main() {
    
    int arr[1000], size, query, i;
    bool found = false;

    cout<<"Enter Array Size: ";
    cin>> size;

    cout<<"Enter Array Elements: ";
    for(i=0; i<size; ++i) cin>> arr[i];

    cout<<"Enter Element: ";
    cin>> query;

    for(i=0; i<size; ++i){
        if(query == arr[i]){
            found = true;
            break;
        }
    }
    if(found) cout<<"Element found at Index: "<< i;
    else cout<<"Element found at Index: "<< -1;

    return 0;
}