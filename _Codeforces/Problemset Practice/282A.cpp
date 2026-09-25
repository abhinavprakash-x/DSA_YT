// https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x = 0;
    cin >> n;

    while(n--)
    {
        string temp;
        cin >> temp;

        if(temp == "++X" || temp == "X++") x++;
        else if(temp == "--X" || temp == "X--") x--;
    }
    cout << x;

    return 0;
}