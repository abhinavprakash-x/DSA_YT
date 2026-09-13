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
        int n, m;
        cin >> n >> m;

        vector<long long> a(n);

        for (int i = 0; i < n; ++i)
            cin >> a[i];

        // Special case: choosing exactly 1 element
        if (m == 1)
        {
            cout << *max_element(a.begin(), a.end()) << '\n';
            continue;
        }

        // Max heap containing the m-1 smallest elements
        // seen before the current element.
        priority_queue<long long> pq;

        long long sum = 0;
        long long ans = LLONG_MIN;

        for (int i = 0; i < n; ++i)
        {
            // If we have exactly m-1 elements before a[i],
            // a[i] can be the final selected element.
            if ((int)pq.size() == m - 1)
            {
                ans = max(ans, 1LL * m * a[i] - sum);
            }

            // Include a[i] as a possible element among
            // the first m-1 selected elements for future positions.
            if ((int)pq.size() < m - 1)
            {
                pq.push(a[i]);
                sum += a[i];
            }
            else if (a[i] < pq.top())
            {
                sum -= pq.top();
                pq.pop();

                pq.push(a[i]);
                sum += a[i];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}