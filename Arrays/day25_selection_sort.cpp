#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i < n-1; ++i){
        int small_idx = i;
        for(int j = i+1; j < n; j++){
            if(arr[small_idx] > arr[j])
                small_idx = j;
        }
        swap(arr[small_idx], arr[i]);
    }
}

void selection_sort(char arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int small_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[small_idx] > arr[j])
                small_idx = j;
        }
        swap(arr[small_idx], arr[i]);
    }
}

void descending_selection_sort(int arr[], int n){
    for(int i = 0; i < n-1; ++i){
        int big_idx = i;
        for(int j = i+1; j < n; j++){
            if(arr[big_idx] < arr[j])
                big_idx = j;
        }
        swap(arr[big_idx], arr[i]);
    }
}

void reverse_selection_sort(int arr[], int n){
    for(int i = n-1; i > 0; --i){
        int big_idx = i;
        for(int j = i-1; j >= 0; --j){
            if(arr[j] > arr[big_idx]){
                big_idx = j;
            }
        }
        swap(arr[big_idx], arr[i]);
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

    selection_sort(a, size);
    print_array(a, size);

    descending_selection_sort(a, size);
    print_array(a, size);

    reverse_selection_sort(a, size);
    print_array(a, size);

    char b[] = {'x','s','b','a','c','e','q','l','k','t'};
    size = sizeof(b) / sizeof(b[0]);

    selection_sort(b, size);
    for(int i = 0; i < size; i++)
        cout<< b[i]<<" ";

    return 0;
}