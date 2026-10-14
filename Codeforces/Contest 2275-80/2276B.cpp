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
        string s;
        cin >> s;

        int n = s.size();
        bool inc = false, dec = false;

        for(int i = 1; i < n - 1; i++)
        {
            if(s[i - 1] == s[i] && s[i] == s[i + 1])
                inc = true;

            if(s[i - 1] == s[i + 1] && s[i] != s[i - 1])
                dec = true;
        }

        cout << 1 + inc + dec << '\n';
    }

    return 0;
}