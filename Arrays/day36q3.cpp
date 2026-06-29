// Magnetic Force Between Two Balls (Leetcode 1552)
#include <iostream>
#include <vector>
#include <algorithm>
#include <assert.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n = position.size();
        int start = 1, end = position.back() - position.front(), mid, ans = 0;

        while(start <= end) {
            mid = start + (end - start) / 2;
            int count = 1, pos = position[0];

            for(int i = 0; i < n; ++i) {
                if (pos + mid <= position[i]) {
                    count++;
                    pos = position[i];
                }
            }

            if(count < m) end = mid - 1;
            else {
                ans = mid;
                start = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> pos = {1,2,3,4,7};
    assert(obj.maxDistance(pos, 3) == 3);
    pos = {5,4,3,2,1,1000000000};
    assert(obj.maxDistance(pos, 2) == 999999999);
    cout<<"All Test Cases Passed";
    return 0;
}