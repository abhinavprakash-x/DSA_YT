#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> degree(n, 0);

        for(int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            degree[u - 1]++;
            degree[v - 1]++;
        }

        int maxDegree = 0;
        bool isolated = false;

        for(int i = 0; i < n; i++)
        {
            if(degree[i] == 0) isolated = true;
            maxDegree = max(maxDegree, degree[i]);
        }

        if(isolated) cout << "Brain Melt\n";
        else if(m == n - 1 && maxDegree == n - 1) cout << "2\n";
        else cout << "Many\n";
    }

    return 0;
}