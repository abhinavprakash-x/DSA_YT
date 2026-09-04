#include <iostream>
#include <vector>
using namespace std;

void sum_subsequences(int arr[], int n, int index, int current_sum, vector<int>& ans) {
    if (index == n) {
        ans.push_back(current_sum);
        return;
    }

    // Include the current element in the sum
    sum_subsequences(arr, n, index + 1, current_sum + arr[index], ans);

    // Exclude the current element from the sum
    sum_subsequences(arr, n, index + 1, current_sum, ans);
}

int main()
{
    //Q1: Given an array of size n, print all the sums possible from its subsequences.
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans;

    sum_subsequences(arr, n, 0, 0, ans);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}