#include <iostream>
#include <vector>
using namespace std;

void print_arr(vector<int> &arr);
void mergesort(vector<int> &arr, int start, int end);
void merge(vector<int> &arr, int start, int mid, int end);
void mergesortd(vector<int> &arr, int start, int end);
void merged(vector<int> &arr, int start, int mid, int end);

void print_arr(vector<int> &arr) {
    int n = arr.size();
    for(int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << endl;
}

void mergesort(vector<int> &arr, int start, int end) {
    if(start >= end) return;

    int mid = start + (end - start) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

void merge(vector<int> &arr, int start, int mid, int end) {
    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, idx = 0;

    while(left <= mid && right <= end) {
        if(arr[left] <= arr[right]) temp[idx++] = arr[left++];
        else temp[idx++] = arr[right++];
    }

    while(left <= mid) temp[idx++] = arr[left++];
    while(right <= end) temp[idx++] = arr[right++];

    idx = 0;
    while(start <= end) arr[start++] = temp[idx++];
}

void mergesortd(vector<int> &arr, int start, int end) {
    if(start >= end) return;

    int mid = start + (end - start) / 2;
    mergesortd(arr, start, mid);
    mergesortd(arr, mid + 1, end);
    merged(arr, start, mid, end);
}

void merged(vector<int> &arr, int start, int mid, int end) {
    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, idx = 0;

    while(left <= mid && right <= end) {
        if(arr[left] >= arr[right]) temp[idx++] = arr[left++];
        else temp[idx++] = arr[right++];
    }

    while(left <= mid) temp[idx++] = arr[left++];
    while(right <= end) temp[idx++] = arr[right++];

    idx = 0;
    while(start <= end) arr[start++] = temp[idx++];
}

int main()
{
    vector<int> arr = {36,4,12,6,42,54,3,26,3,1,34,27,89};
    int n = arr.size();

    cout << "Before Sorting: ";
    print_arr(arr);
    mergesort(arr, 0, n - 1);
    cout << "After Sorting: ";
    print_arr(arr);

    // Q1. Descending Order Merge Sort
    arr = {43,23,14,32,45,24,66,56,21,93,24,60,12,58};
    n = arr.size();

    cout << "Before Sorting: ";
    print_arr(arr);
    mergesortd(arr, 0, n - 1);
    cout << "After Sorting: ";
    print_arr(arr);

    return 0;
}

/*
Q2. Count Inversions (GeekforGeeks)

class Solution {
  public:

    long long merge(vector<int> &arr, int start, int mid, int end) {
        vector<int> temp;
        int left = start, right = mid + 1;
        long long count = 0;

        while(left <= mid && right <= end) {
            if(arr[left] <= arr[right]) {
                temp.push_back(arr[left++]);
            }
            else {
                count += mid - left + 1;
                temp.push_back(arr[right++]);
            }
        }

        while(left <= mid) {
            temp.push_back(arr[left++]);
        }

        while(right <= end) {
            temp.push_back(arr[right++]);
        }

        for(int i = 0; i < temp.size(); ++i) {
            arr[start + i] = temp[i];
        }

        return count;
    }

    long long mergesort(vector<int> &arr, int start, int end) {
        if(start >= end) return 0;

        int mid = start + (end - start) / 2;

        long long count = 0;

        count += mergesort(arr, start, mid);
        count += mergesort(arr, mid + 1, end);
        count += merge(arr, start, mid, end);

        return count;
    }

    int inversionCount(vector<int> &arr) {
        return mergesort(arr, 0, arr.size() - 1);
    }
};
*/