#include<iostream>
using namespace std;

int sum_cube(int n) {
    if(n == 1) return 1;
    return (n * n * n)+sum_cube(n - 1);
}

bool isPrime(int n, int divisor) {
    if (n <= 2) {
        return (n == 2);
    }
    if (n % divisor == 0) {
        return false;
    }
    if (divisor * divisor > n) {
        return true;
    }
    return isPrime(n, divisor + 1);
}


int main()
{
    //Q1. Sum of Cubes of N natural nos. using Recursion
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Sum of cubes of " << n << " natural nos: " << sum_cube(n);
    cout << endl;

    //Q3. Prime or Not using Recursion
    cout << "Enter n: ";
    cin >> n;
    cout << n << " is Prime? " << isPrime(n, 2) << endl;

    return 0;
}


/*
Q2: Power of Four (Leetcode 342)

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        if(n == 1 || n == 4) return true;
        if(n % 4 != 0) return false;
        return isPowerOfFour(n / 4);
    }
};

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        if(n == 1) return true;

        while(n) {
            if((n & 0b11) == 0) {
                n = n >> 2;
                if(n == 1) return true;
            }
            else return false;
        }
        return false;
    }
};
Since 4^0 = 1 special case
      4^1 = 4,  100
      4^2 = 16, 10000
      4^3 = 64, 1000000

      so always even number of zeros must be present and last bit must be 1
*/