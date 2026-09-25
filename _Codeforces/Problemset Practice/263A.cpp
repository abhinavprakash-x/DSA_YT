// https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[5][5];

    for(int i = 0; i < 25; ++i)
    {
        int row = i / 5;
        int col = i % 5;
        cin >> matrix[row][col];
    }

    for(int i = 0; i < 25; ++i)
    {
        int row = i / 5;
        int col = i % 5;

        if(matrix[row][col] == 1)
        {
            cout << abs(row - 2) + abs(col - 2);
            return 0;
        }
    }

    return 0;
}