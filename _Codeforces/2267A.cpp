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
        string s;
        char c;
        cin >> n >> c >> s;

        int coins = 0;

        int start = 0;
        int end = n - 1;

        while (start < end)
        {
            if (s[start] == s[end]) {}
            else if(s[start] == c || s[end] == c) coins++;
            else coins += 2;

            start++;
            end--;
        }
        cout << coins << "\n";
    }
    return 0;
}