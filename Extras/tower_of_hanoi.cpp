#include <iostream>
using namespace std;

void toh(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << source << " to rod " << destination << endl;
        return;
    }

    toh(n - 1, source, destination, auxiliary);
    cout << "Move disk " << n << " from rod " << source << " to rod " << destination << endl;
    toh(n - 1, auxiliary, source, destination);
}

int main()
{
    int n = 3; // Number of disks
    char source = 'A'; // Source rod
    char auxiliary = 'B'; // Auxiliary rod
    char destination = 'C'; // Destination rod

    toh(n, source, auxiliary, destination);
    cout << "Total moves: " << (1 << n) - 1 << endl; // Total moves = 2^n - 1
    
    return 0;
}