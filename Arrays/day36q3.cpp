// Magnetic Force Between Two Balls (Leetcode 1552)
#include <iostream>
#include <vector>
#include <algorithm>
#include <assert.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        // Code here
    }
};

int main() {
    Solution obj;
    vector<int> pos = {1,2,3,4,7};
    assert(obj.maxDistance(pos, 3) == 3);
    vector<int> pos = {5,4,3,2,1,1000000000};
    assert(obj.maxDistance(pos, 2) == 999999999);
    cout<<"All Test Cases Passed";
    return 0;
}