/*
Q1. Prove that average Time Complexity of push_back operation in vector is O(1) time.
ans: sum[ T(n) ] (from i = 0 to n)
    = T(i_1) + T(i_2) + ..... + T(i_n)
    = T(1) + T(n) + T(1) + T(1) + T(n) + .....    {sometimes its T(n) when copying entire memory otherwise its T(1)}
    divide this by n for average complexity
    = k * T(1) + (n - k) * T(n) / n    {k is arbitrary and k < n}
    = [0, j] * T(1) + [1 - j, 1] * T(n)   {j is arbitrary and j < 1}
    = T(1.05) {or 0.07, or 0.31, or some small decimal value}
    approx = O(1)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_vector(vector<int> temp) {
    int n = temp.size();
    for(int i = 0; i < n; ++i) cout << temp[i] << " ";
}

int main()
{

    // Q2. Find Occurence of an Element
    // ans: use count(first_iterator, last_iterator, key);
    vector<int> nums = {2,3,1,2,3,4,5,3,3,2,5,7};
    cout << "Count 2: "<< count(nums.begin(), nums.end(), 2) << endl;
    cout << "Count 3: "<< count(nums.begin(), nums.end(), 3) << endl;
    cout << "Count 7: "<< count(nums.begin(), nums.end(), 7) << endl;

    // Q3. Find max and min Element
    // ans: use max_element(first_iterator, last_iterator); or min_element(...);
    auto mx_it = max_element(nums.begin(), nums.end());
    auto mn_it = min_element(nums.begin(), nums.end());

    // Q4. Lower bound and Upper bound in a sorted vector
    // ans: use lower_bound(first,last); or lower_bound(first,last);
    sort(nums.begin(), nums.end());
    auto lb_it = lower_bound(nums.begin(), nums.end(), INT_MIN);
    auto ub_it = upper_bound(nums.begin(), nums.end(), INT_MAX);

    // Q5. Pass vector to a function
    // (I'm doing pass by reference since the question didn't ask anything explicitly)
    print_vector(nums);
    return 0;
}