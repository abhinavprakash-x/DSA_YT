#include <iostream>
#include <vector>
using namespace std;

void print_arr(vector<int> &arr);
int partition(vector<int> &arr, int start, int end);
void quicksort(vector<int> &arr, int start, int end);
int partitiond(vector<int> &arr, int start, int end);
void quicksortd(vector<int> &arr, int start, int end);

void print_arr(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << endl;
}

void quicksort(vector<int> &arr, int start, int end) {
    if(start >= end) return;

    int pivot = partition(arr, start, end);
    quicksort(arr, start, pivot - 1);
    quicksort(arr, pivot + 1, end);
}

int partition(vector<int> &arr, int start, int end) {
    int pos = start;
    for(int i = start; i <= end; ++i) {
        if(arr[i] <= arr[end]) swap(arr[i], arr[pos++]);
    }
    return pos - 1;
}

void quicksortd(vector<int> &arr, int start, int end) {
    if(start >= end) return;

    int pivot = partitiond(arr, start, end);
    quicksortd(arr, start, pivot - 1);
    quicksortd(arr, pivot + 1, end);
}

int partitiond(vector<int> &arr, int start, int end) {
    int pos = start;
    for(int i = start; i <= end; ++i) {
        if(arr[i] >= arr[end]) swap(arr[i], arr[pos++]);
    }
    return pos - 1;
}

int main()
{
    vector<int> arr = {36,4,12,6,42,54,3,26,3,1,34,27,89};
    int n = arr.size();

    cout << "Before Sorting: ";
    print_arr(arr);
    quicksort(arr, 0, n - 1);
    cout << "After Sorting: ";
    print_arr(arr);

    // Q1. Descending Order Quick Sort
    arr = {43,23,14,32,45,24,66,56,21,93,24,60,12,58};
    n = arr.size();

    cout << "Before Sorting: ";
    print_arr(arr);
    quicksortd(arr, 0, n - 1);
    cout << "After Sorting: ";
    print_arr(arr);

    return 0;
}

/*
Q2. What is a stable algorithm? Find whether Bubble sort, Selection Sort, Insertion Sort, Merge Sort and Quicksort are stable algorithms.
ans. A sorting algorithm is stable if two elements with the same key keep their original relative order after sorting.
     eg. let's say arr = [ a: 5, b: 6, c: 5]
     now after sort arr = [a: 5, c: 5, b: 6]
     see how a and c had same values and they preserved their relative ordering that is stable sort.
     Selection sort and Quick sort are not Stable. Merge Sort is Stable depending on the implementation.
     Bubble and Insertion sort are Stable.


Q3. What is an in-place algorithm? Find whether Bubble sort, Selection Sort, Insertion Sort, Merge Sort and Quicksort are in-place algorithms.
ans. An algorithm is in-place if it requires only constant extra memory, O(1), apart from the input array itself.
     (no extra array needed to perform sorting => in-place sorting)
     Merge sort is not an in-place sorting algorithm, the rest of them all are.
*/