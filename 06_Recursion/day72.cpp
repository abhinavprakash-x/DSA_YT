#include<iostream>
using namespace std;

void q1_print(int n) {
    if(n == 0) return;
    cout << "Coder Army " << n << endl;
    q1_print(n - 1);
}

void q2_print(int n) {
    if(n == 0) return;

    if(n % 2 == 1) {
        cout << n << " ";
    }
    q2_print(n - 1);
}

void q3_print(int n, int &N) {
    if(n == N + 1) return;
    cout << n << " ";
    q3_print(n + 1, N);
}

int main()
{
    //Q1. Print "Coder Army" 10 times using Recursion
    q1_print(10);

    //Q2. Print all Odd numbers from n to 1 using Recursion
    int n;
    cout << "Enter n: ";
    cin >> n;
    q2_print(n);
    cout << endl;

    //Q3. Print all numbers from 1 to N using Recursion
    int N;
    cout << "Enter N: ";
    cin >> N;
    q3_print(1, N);
    cout << endl;

    return 0;
}