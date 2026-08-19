#include<iostream>
using namespace std;

void q1_print(int c, int &n) {
    if(c == n + 1) return;

    if(c % 2 == 1) cout << c << " ";
    q1_print(c + 1, n);
}

int helper = 10;
void q2_print(int &n) {
    if(helper == n + 1 || n < 10) return;
    cout << helper++ << " ";
    q2_print(n);
}

void q3_print(int &n, int i) {
    if(i == 11) return;
    cout << n << " * " << i << " = " << n * i << endl;
    q3_print(n, i + 1);
}

int main()
{
    //Q1. Print all Odd numbers from 1 to n using Recursion
    int n;
    cout << "Enter n: ";
    cin >> n;
    q1_print(1, n);
    cout << endl;

    //Q2. Print all numbers from 10 to n using Recursion
    //    where n must be greater than 10
    cout << "Enter n: ";
    cin >> n;
    q2_print(n);
    cout << endl;

    //Q3. Multiplication Table
    cout << "Enter n: ";
    cin >> n;
    q3_print(n, 1);

    return 0;
}