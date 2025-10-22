#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = 0; i < n-1; ++i){
        bool swapped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

void bubble_sort(char arr[], int n){
    for(int i = 0; i < n-1; ++i){
        bool swapped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

void descending_bubble_sort(int arr[], int n){
    for(int i = 0; i < n-1; ++i){
        bool swapped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

void reverse_bubble_sort(int arr[], int n){
    for(int i = n-1; i > 0; --i){
        bool swapped = false;
        for(int j = n-1; j >= 1; --j){
            if(arr[j] < arr[j-1]){
                swap(arr[j], arr[j-1]);
                swapped = true;
            }
        }
        if(!swapped) break;
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

    bubble_sort(a, size);
    print_array(a, size);

    descending_bubble_sort(a, size);
    print_array(a, size);

    reverse_bubble_sort(a, size);
    print_array(a, size);

    char b[] = {'x','s','b','a','c','e','q','l','k','t'};
    size = sizeof(b) / sizeof(b[0]);

    bubble_sort(b, size);
    for(int i = 0; i < size; i++)
        cout<< b[i]<<" ";

    return 0;
}