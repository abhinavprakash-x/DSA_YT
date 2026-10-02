#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> bad;

        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if(a[i] != i + 1) bad.push_back(a[i]);
        }

        reverse(bad.begin(), bad.end());
        bool possible = true;
        int j = 0;

        for(int i = 0; i < n; ++i)
        {
            if(a[i] == i + 1) continue;
            else if(bad[j++] == i + 1) continue;
            else
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}