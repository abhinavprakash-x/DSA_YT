// https://codeforces.com/problemset/problem/4/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> user_count;

    for(int i = 0; i < n; ++i)
    {
        int curr_size = user_count.size();
        bool found = false;
        int idx = -1;
        string curr_name;
        cin >> curr_name;
        for(int j = 0; j < curr_size; ++j)
        {
            if(curr_name == user_count[j].first)
            {
                user_count[j].second++;
                found = true;
                idx = j;
            }
        }
        if(!found)
        {
            user_count.push_back({curr_name, 0});
            cout << "OK\n";
        }
        if(found) cout << user_count[idx].first << user_count[idx].second << "\n";
    }

    return 0;
}