// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
using namespace std;

void abbreviate(string& s)
{
    int n = s.size();
    if (n <= 10) return;

    s = s[0] + to_string(n - 2) + s[n - 1];
}

int main()
{
    int n;
    cin >> n;
    
    while (n--)
    {
        string s;
        cin >> s;

        abbreviate(s);
        cout << s << '\n';
    }

    return 0;
}