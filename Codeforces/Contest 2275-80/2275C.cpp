#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        int m = n - 4;

        vector<int> v(m);

        for (int i = 0; i < m; ++i)
            v[i] = a[i] + a[i + 2] - a[i + 4];

        unordered_map<int, long long> freq;

        for (int x : v)
            freq[x]++;

        long long ans = 0;

        for (auto &[value, cnt] : freq)
            ans += cnt * (cnt - 1) / 2;

        for (int i = 0; i + 2 < m; ++i)
            if (v[i] == v[i + 2]) ans--;
        
        for (int i = 0; i + 4 < m; ++i)
            if (v[i] == v[i + 4]) ans--;

        cout << ans << '\n';
    }

    return 0;
}