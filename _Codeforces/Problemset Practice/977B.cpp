// https://codeforces.com/problemset/problem//977/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    unordered_map<string, int> freq;
    string ans;
    int maxFreq = -1;

    for(int i = 0; i < n - 1; ++i)
    {
        string curr = s.substr(i, 2);
        freq[curr]++;

        if(maxFreq < freq[curr])
        {
            maxFreq = freq[curr];
            ans = curr;
        }
    }
    cout << ans;

    return 0;
}