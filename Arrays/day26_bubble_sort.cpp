#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    //
}

void descending_bubble_sort(int arr[], int n){
    //
}

void reverse_bubble_sort(int arr[], int n){
    //
}

void bubble_sort(char arr[], int n){
    //
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