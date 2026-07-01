// Maximum Difference between Two Elements such that Larger Element Appears after the Smaller Element
#include <iostream>
#include <vector>
#include <algorithm>
#include <assert.h>
using namespace std;

class Solution {
public:
    int maxDifference(vector<int>& arr) {
        //code here
        int n = arr.size();
        int max_suffix = arr[n - 1];
        int diff, ans = INT_MIN;

        for(int i = n - 2; i >= 0; --i) {
            diff = max_suffix - arr[i];
            max_suffix = max(max_suffix, arr[i]);
            ans = max(ans, diff);
        }
        return (ans > 0) ? ans : -1;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {9, 5, 8, 12, 2, 3, 7, 4};
    assert(obj.maxDifference(arr) == 7);
    arr = {2, 3, 10, 6, 4, 8, 1};
    assert(obj.maxDifference(arr) == 8);
    arr = {4, 3, 3, 2, 1};
    assert(obj.maxDifference(arr) == -1);
    cout<<"All Test Cases Passed";
    return 0;
}