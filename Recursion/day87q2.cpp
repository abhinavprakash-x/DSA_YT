#include <iostream>
#include <vector>
using namespace std;

void print_subsequence(const vector<int>& current_subsequence) {
    cout << "Subsequence: ";

    for (int x : current_subsequence) {
        cout << x << " ";
    }

    cout << endl;
}

void sum_subsequences(int arr[], int n, int index, int current_sum, vector<int>& ans, vector<int>& current_subsequence) {
    if (index == n) {
        ans.push_back(current_sum);
        printf("Current sum: %d\n", current_sum); // Show the current sum
        print_subsequence(current_subsequence); // Call to print the subsequence
        return;
    }

    // Include the current element in the sum
    current_subsequence.push_back(arr[index]);
    sum_subsequences(arr, n, index + 1, current_sum + arr[index], ans, current_subsequence);
    current_subsequence.pop_back();

    // Exclude the current element from the sum
    sum_subsequences(arr, n, index + 1, current_sum, ans, current_subsequence);
}

int main()
{
    //Q2: Given an array of size n, print all the sums possible from its subsequences along with the subsequences.
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> sums;
    vector<int> current_subsequence;
    sum_subsequences(arr, n, 0, 0, sums, current_subsequence);

    return 0;
}