#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        long long ans = 0;
        int maxXor = 0;
        int prev = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            ans |= x;

            if(i > 0) maxXor = max(maxXor, prev ^ x);
            prev = x;
        }

        if(maxXor > 0)
        {
            int q = 31 - __builtin_clz((unsigned int)maxXor);
            ans |= (1LL << (q + 1)) - 1;
        }

        cout << ans << '\n';
    }

    return 0;
}