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
        cin >> n;

        int a[3];
        cin >> a[0] >> a[1] >> a[2];

        cout << n - min({a[0], a[1], a[2]}) << "\n";
    }
    return 0;
}