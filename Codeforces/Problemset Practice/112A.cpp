// https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int ans = 0;

    for(int i = 0; i < n; ++i)
    {
        ans = tolower(s1[i]) - tolower(s2[i]);
        if(ans != 0) break;
    }

    if(ans < 0) cout << "-1";
    else if(ans > 0) cout << "1";
    else cout << "0";

    return 0;
}