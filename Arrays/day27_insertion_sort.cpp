#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; ++i){
        for(int j = i; j > 0; --j){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
            } else {
                break;
            }
        }
    }
}

void descending_insertion_sort(int arr[], int n){
    for(int i = 1; i < n; ++i){
        for(int j = i; j > 0; --j){
            if(arr[j] > arr[j-1]){
                swap(arr[j], arr[j-1]);
            } else {
                break;
            }
        }
    }
}

void reverse_insertion_sort(int arr[], int n) {
    for (int i = n - 2; i >= 0; --i) {
        for (int j = i; j < n - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            } else break;
        }
    }
}

void print_array(int arr[], int n){
    for(int i = 0; i < n; ++i)
        cout<< arr[i]<< " ";
    cout<< endl;
}

int main() {
    
    int a[] = {2,5,1,3,8,6,3,2,4,9,5,11};
    int size = sizeof(a) / sizeof(a[0]);

    insertion_sort(a, size);
    print_array(a, size);

    descending_insertion_sort(a, size);
    print_array(a, size);

    reverse_insertion_sort(a, size);
    print_array(a, size);

    return 0;
}