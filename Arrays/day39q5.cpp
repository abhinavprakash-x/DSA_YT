// Video HW, prefix sum, suffix sum and print all subarrays
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_array(vector<int> &arr, int i, int j) {
    cout << "[ ";
    for(i; i <= j; ++i) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int main() {

    vector<int> arr = {6, 4, 5, -3, 2, 8};
    int n = arr.size();

    vector<int> prefix_sum(n);
    prefix_sum[0] = arr[0];
    for(int i = 1; i < n; ++i) {
        prefix_sum[i] += prefix_sum[i - 1] + arr[i];
    }
    print_array(prefix_sum, 0, n - 1);

    vector<int> suffix_sum(n);
    suffix_sum[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; --i) {
        suffix_sum[i] = suffix_sum[i + 1] + arr[i];
    }
    print_array(suffix_sum, 0, n - 1);

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n - i; ++j) {
            print_array(arr, j, j + i);
        }
    }

    return 0;
}