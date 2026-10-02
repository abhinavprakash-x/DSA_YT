#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {5, 3, 6, 75, 32, 12, 7, 9, 2, 51};
    int max1 = INT_MIN, max2 = INT_MIN;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; ++i) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    cout << "Largest Element: " << max1 << endl;
    cout << "2nd Largest Element: " << max2;

    return 0;
}
