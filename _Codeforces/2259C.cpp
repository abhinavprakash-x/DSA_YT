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
        cin >> n;
        vector<int> a(n);

        if(n == 1) {
            cin >> a[0];
            a[0] = abs(a[0]);
            cout << a[0] << "\n";
            continue;
        }

        for(int i = 0; i < n; ++i) cin >> a[i];

        int left = 0, right = n - 1;
        bool left_flag = false, right_flag = false;

        while(left <= right) {
            if(a[left] == 0) left++;
            if(a[right] == 0) right--;

            if(left_flag && right_flag)
            {
                if(a[left] == -1) a[left] = 0;
                if(a[right] == -1) a[right] = 0;
                left++;
                right--;
                continue;
            }

            if((a[left] == -1 || a[left] == 1) && !left_flag)
            {
                left_flag = true;
                a[left] = 1;
                left++;
            }

            if((a[right] == -1 || a[right] == 1) && !right_flag)
            {
                right_flag = true;
                a[right] = 1;
                right--;
            }
        }

        for(int i = 0; i < n; ++i) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}