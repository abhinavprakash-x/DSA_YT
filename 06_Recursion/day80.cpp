#include<iostream>
using namespace std;

bool findElement(int arr[], int start, int end, int X) {
    if(start > end) return false;
    int mid = (start + end) / 2;

    if(arr[mid] == X) return true;
    else if(arr[mid] < X) return findElement(arr, start, mid - 1, X);
    else return findElement(arr, mid + 1, end, X);
}

void reverseArray(int arr[], int start, int end) {
    if(start >= end) return;
    swap(arr[start], arr[end]);
    reverseArray(arr, start + 1, end - 1);
}

void rotateArray(int arr[], int start, int end) {
    if (start >= end) return;
    swap(arr[start], arr[end]);
    rotateArray(arr, start + 1, end);
}

int main()
{
    //Q1. Given an array in non increasing order, write a recursive function to find if an element is present in the array.
    int arr[] = {10, 9, 8, 7, 7, 6, 5, 4, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Found 7? " << (findElement(arr, 0, n - 1, 7) ? "Yes" : "No") << endl;
    cout << "Found 3? " << (findElement(arr, 0, n - 1, 3) ? "Yes" : "No") << endl;

    //Q2. Write a recursive function to reverse an array.
    cout << "Reversed Array: ";
    reverseArray(arr, 0, n - 1);
    for(int i = 0; i < n; i++) {    
        cout << arr[i] << " ";
    }
    cout << endl;

    //Q3. Write a recursive functon to rotate an array by one position to the Right.
    cout << "Array after rotating by one position to the Right: ";
    rotateArray(arr, 0, n - 1);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}