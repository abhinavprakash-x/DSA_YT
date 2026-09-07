// n Bit Binary number having more 1's in all prefixes

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void recurse(int n, string& temp, vector<string>& ans, int count1, int count0, int idx)
    {
        if(count1 < count0) return;
        
        if(idx == n)
        {
            ans.push_back(temp);
            return;
        }
        
        temp.push_back('1');
        recurse(n, temp, ans, count1 + 1, count0, idx + 1);
        temp.pop_back();
        
        temp.push_back('0');
        recurse(n, temp, ans, count1, count0 + 1, idx + 1);
        temp.pop_back();
    }
  
    vector<string> nBitBinary(int n) {
        // code here
        string temp;
        vector<string> ans;
        recurse(n, temp, ans, 0, 0, 0);
        return ans;
    }
};

int main()
{
    int n;
    cout << "Enter the number of bits: ";
    cin >> n;

    Solution solution;
    vector<string> result = solution.nBitBinary(n);

    cout << "The " << n << "-bit binary numbers with more 1's in all prefixes are:\n";
    for (const string& binary : result)
    {
        cout << binary << endl;
    }

    return 0;
}