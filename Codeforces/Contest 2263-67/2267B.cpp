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
        int n;
        cin >> n;

        int cnt[101] = {};
        
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }

        int used[101] = {};
        vector<int> answer;

        int maxFreq = 0;

        while ((int)answer.size() < n)
        {
            int chosen = -1;

            // First try to choose the largest value
            // whose current frequency is below maxFreq.
            for (int x = 100; x >= 1; x--)
            {
                if (cnt[x] > used[x] && used[x] < maxFreq)
                {
                    chosen = x;
                    break;
                }
            }

            // If none exists, increase the maximum frequency.
            if (chosen == -1)
            {
                for (int x = 100; x >= 1; x--)
                {
                    if (cnt[x] > used[x])
                    {
                        chosen = x;
                        break;
                    }
                }
            }

            answer.push_back(chosen);
            used[chosen]++;

            maxFreq = max(maxFreq, used[chosen]);
        }

        for (int x : answer)
        {
            cout << x << ' ';
        }

        cout << '\n';
    }

    return 0;
}