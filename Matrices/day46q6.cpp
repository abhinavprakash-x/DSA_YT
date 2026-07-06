// Q6: Binary Search in a 2D array which is sorted in decreasing order.

#include <iostream>
#include <vector>
#include <algorithm>
#include <assert.h>
using namespace std;

class Solution {
public:
    bool binary_search(vector<vector<int>> &mat, int target) {
        // Code here
        int m = mat.size();
        int n = mat[0].size();

        int start = 0, end = (m * n) - 1;
        int mid, row, col;

        while(start <= end) {
            mid = start + (end - start) / 2;
            row = mid / n;
            col = mid % n;

            if(mat[row][col] == target) return true;
            else if(mat[row][col] < target) end = mid - 1;
            else start = mid + 1;
        }
        return false;
    }
};

int main() {
    Solution obj;
    vector<vector<int>> matrix = {{16, 15, 14, 13},
                                  {12, 11, 10,  9},
                                  { 8,  7,  6,  5},
                                  { 4,  3,  2,  1}};

    assert(obj.binary_search(matrix, 11));
    assert(!obj.binary_search(matrix, 18));
    assert(obj.binary_search(matrix, 8));

    vector<vector<int>> matrix2 = {{17, 16, 15, 14, 13},
                                  {12, 11, 10,  9,  8},
                                  { 7,  6,  5,  4,  3},
                                  { 2,  1,  0, -1, -2}};
    
    assert(obj.binary_search(matrix2, -1));
    assert(obj.binary_search(matrix2, 13));
    assert(!obj.binary_search(matrix2, -5));
    assert(!obj.binary_search(matrix2, 19));

    cout<<"All Test Cases Passed";
    return 0;
}