#include<iostream>
using namespace std;

int findMax(int arr[], int n) {
    if(n == 1) return arr[0];
    return max(arr[n - 1], findMax(arr, n - 1));
}

int product(int arr[], int n) {
    if(n == 0) return 1;
    return arr[n - 1] * product(arr, n - 1);
}

int countEven(int arr[], int n) {
    if(n == 0) return 0;
    return (arr[n - 1] % 2 == 0) + countEven(arr, n - 1);
}

int main()
{
    //Q1. Find the Maximum Element in an Array using Recursion
    int arr[] = {1, 2, 3, 4, 5, 32, 3, -6, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Element in the Array: " << findMax(arr, n) << endl;

    //Q2. Find the Product of all Elements in an Array using Recursion
    cout << "Product of all Elements in the Array: " << product(arr, n) << endl;

    //Q3. Find the Number of even elements in an Array using Recursion
    cout << "Number of even elements in the Array: " << countEven(arr, n) << endl;

    return 0;
}