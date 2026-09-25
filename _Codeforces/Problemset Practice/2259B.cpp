#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        // Code here
        int n;
        cin >> n;
        int curr;

        int count_0 = 0; // They Clearly follow a Pattern if a number is Odd it is guaranteed to be stuck at 1 after an
        int count_1 = 0; // arbitrary amount of operations. eg. [1,3,5] => [1,1,3] => [1,1,1] => [1,1,1]
        int count_2 = 0; // But for Even numbers there are two terminals [0, 2] => [2, 0] => [0, 2]

        for(int i = 0; i < n; ++i)
        {
            cin >> curr;
            if(curr % 2 != 0) count_1++;
            else if(curr % 4 == 0) count_0++;
            else if(curr % 2 == 0) count_2++;
        }

        cout << max(max(count_0, count_1), count_2) << "\n";
    }

    return 0;
}