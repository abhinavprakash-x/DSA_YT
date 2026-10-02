#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<vector<int>> a(n, vector<int>(n, 0));
        
        if(k < n || k > (2 * n) - 1)
        {
            cout << "-1\n";
            continue;
        }

        int lim = 2 * n - k;
        for(int i = 0; i < lim; ++i) a[i][i] = i + 1;
        int num = lim + 1;

        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(a[i][j] == 0)
                {
                    a[i][j] = num;
                    num++;
                }
            }
        }

        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}