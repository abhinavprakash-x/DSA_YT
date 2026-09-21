#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        // code here
        int n;
        string s;
        cin >> n >> s;

        int freq_0 = 0, freq_1 = 0;
        for(int i = 0; i < n; ++i)
        {
            if(s[i] == '0') freq_0++;
            else freq_1++;
        }

        if(s[0] == '1')
        {
            cout << freq_0 << "\n";
            continue;
        }

        int ans = INT_MAX;
        int leftOnes = 0;
        int rightZeros = freq_0;

        for(int i = 0; i < n; ++i)
        {
            if(s[i] == '1') leftOnes++;
            else rightZeros--;
            ans = min(ans, leftOnes + rightZeros);
        }
        cout << ans << "\n";
    }
    return 0;
}