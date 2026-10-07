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
        string s;
        cin >> n >> s;

        stack<int> st;
        vector<bool> printed(n, false);

        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1') st.push(i); // 1

            else if (s[i] == '2') // 2
            {
                if (!st.empty())
                {
                    printed[st.top()] = true;
                    st.pop();
                }
                else printed[i] = true;
            }

            else printed[i] = true; // 3
        }

        vector<int> not_printed;

        for (int i = 0; i < n; ++i)
        {
            if (!printed[i]) not_printed.push_back(i + 1);
        }

        cout << not_printed.size() << '\n';

        for (int x : not_printed)
            cout << x << ' ';
            
        cout << '\n';
    }

    return 0;
}