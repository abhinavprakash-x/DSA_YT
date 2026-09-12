#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int count_1 = 0, count_0 = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] == 1) count_1++;
            else count_0++;
        }
       if(count_0 > count_1) cout << "Elsie" << endl;
       else cout << "Bessie" << endl;
    }

    return 0;
}