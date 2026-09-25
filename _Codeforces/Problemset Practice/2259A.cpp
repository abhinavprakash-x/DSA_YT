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
        // Code here
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count = 0;
        
        for(int i = 0; i < n; i += k)
        {
            bool Nhoj = true;
            for(int j = i; j < i + k; ++j)
            {
                if(s[j] == '1') continue;
                else Nhoj = false;
            }
            if(Nhoj) count++;
        }

        cout << count << "\n";
    }

    return 0;
}