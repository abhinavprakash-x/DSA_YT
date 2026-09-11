// https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string digits;

    for(char c : s)
    {
        if(c != '+') digits += c;
    }

    sort(digits.begin(), digits.end());
    int n = s.size();

    int idx = 0;
    for(int i = 0; i < n; i = i + 2)
        s[i] = digits[idx++];

    cout << s;

    return 0;
}