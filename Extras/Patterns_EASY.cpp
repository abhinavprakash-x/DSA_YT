/*
1.
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout<<"* ";
        }
        cout<< endl;
    }

2.
10 10 10 10 10 
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10
10 10 10 10 10

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout<<"10 ";
        }
        cout<< endl;
    }

3.
1 1 1 1 1 
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout<<i<<" ";
        }
        cout<< endl;
    }

4.
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout<<j<<" ";
        }
        cout<< endl;
    }

5.
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

    for (int i = 1; i <= n; i++){
        for (int j = n; j >= 1; j--){
            cout<<j<<" ";
        }
        cout<< endl;
    }

6.
1 4 9 16 25 
1 4 9 16 25
1 4 9 16 25 
1 4 9 16 25
1 4 9 16 25

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout<<j*j<<" ";
        }
        cout<< endl;
    }

7.
a a a a a 
b b b b b
c c c c c
d d d d d
e e e e e

    for (char i = 'a'; i < 'a'+n; i++){
        for (int j = 1; j <= n; j++){
            cout<<i<<" ";
        }
        cout<< endl;
    }

8.
a b c d e 
a b c d e
a b c d e
a b c d e
a b c d e

    for (int i = 1; i <= n; i++){
        for (char j = 'a'; j < 'a'+n; j++){
            cout<<j<<" ";
        }
        cout<< endl;
    }

9.
1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25 

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout<<j + (n*(i-1))<<" ";
        }
        cout<< endl;
    }
OR use another variable count (starting from 1) and update count = count+1 in 'j' loop
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << count++ << " ";
        }
        cout << endl;
    }

10.
* 
* *
* * *
* * * *
* * * * *

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<< endl;
    }

11.
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<< endl;
    }

12.
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<i<<" ";
        }
        cout<< endl;
    }

13.
1 
2 1
3 2 1
4 3 2 1
5 4 3 2 1

    for (int i = 1; i <= n; i++){
        for (int j = i; j >= 1; j--){
            cout<<j<<" ";
        }
        cout<< endl;
    }

14.
a 
b b
c c c
d d d d
e e e e e

    for (char i = 'a'; i < 'a'+n; i++){
        for (int j = 1; j <= i-96; j++){
            cout<<i<<" ";
        }
        cout<< endl;
    }
OR
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char('a' + i) << " ";
        }
        cout << endl;
    }

15.
* * * * * 
* * * * 
* * * 
* * 
* 

    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            cout<<"* ";
        }
        cout<< endl;
    }

16.
1 2 3 4 5 
2 3 4 5
3 4 5
4 5
5

    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            cout<<j<<" ";
        }
        cout<< endl;
    }

17.
5 
5 4
5 4 3
5 4 3 2
5 4 3 2 1

    for(int i = 1; i <= n; i++){
        for(int j = n; j >= n-i+1 ; j--){
            cout<<j<<" ";
        }
        cout<< endl;
    }

*/



#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter n: ";
    cin>> n;

    // Paste Loop Code Here
    
    return 0;
}