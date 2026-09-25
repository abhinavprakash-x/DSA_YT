#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    while (n--)
    {
        // code here
        long long a, b, c, score;
        cin >> a >> b >> c;

        score = max(llabs(a - b), llabs(a + c - b));
        cout << score << "\n";
    }
    return 0;
}