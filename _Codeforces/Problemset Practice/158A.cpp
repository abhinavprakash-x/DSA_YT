// https://codeforces.com/problemset/problem/158/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, qualified = 0;
    cin >> n >> k;
    vector<int> scores(n, 0);

    for(int i = 0; i < n; ++i)
        cin >> scores[i];

    for(int i = 0; i < n; ++i)
    {
        if(scores[i] > 0 && scores[i] >= scores[k - 1])
            qualified++;
    }
    cout << qualified;

    return 0;
}