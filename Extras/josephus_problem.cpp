#include <iostream>
using namespace std;

void josephus(int n, int k)
{
    int result = 0; // The position of the last person remaining (0-indexed)

    for (int i = 1; i <= n; ++i)
    {
        result = (result + k) % i;
    }

    cout << "The position of the last person remaining is: " << result + 1 << endl; // Convert to 1-indexed
}

int main()
{
    int n;
    cout << "Enter the number of people in the circle: ";
    cin >> n;

    josephus(n, 2); // Call the Josephus function with step size 2

    return 0;
}