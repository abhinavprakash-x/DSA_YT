/*
1.
        * 
      * * 
    * * * 
  * * * * 
* * * * * 

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i); j++) cout<<"  ";
        for(int j = 1; j <= i; j++) cout<<"* ";
        cout<<endl;
    }

2.
        1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i); j++) cout<<"  ";
        for(int j = 1; j <= i; j++) cout<<i<<" ";
        cout<<endl;
    }

3.
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i); j++) cout<<"  ";
        for(int j = 1; j <= i; j++) cout<<j<<" ";
        cout<<endl;
    }

4.
        A
      A B
    A B C
  A B C D
A B C D E

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i); j++) cout<<"  ";
        for(char j = 'A'; j < 'A'+i; j++) cout<<j<<" ";
        cout<<endl;
    }

5.
        1 
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i); j++) cout<<"  ";
        for(int j = i; j >= 1; j--) cout<<j<<" ";
        cout<<endl;
    }

6.
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i); j++) cout<<"  ";
        for(int j = 1; j <= (2*i-1) ; j++) cout<<"* ";
        cout<<endl;
    }

7.
        1 
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i); j++) cout<<"  ";
        for(int j = 1; j <= i; j++) cout<<j<<" ";
        for(int j = i-1; j >= 1; j--) cout<<j<<" ";
        cout<<endl;
    }

8.
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= (n-i); j++) cout<<"  ";
        for(int j = 1; j <= (2*i-1); j++) cout<<"* ";
        cout<< endl;
    }     

9.
* * * * * * * * * * 
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++) cout<<"* ";
        for(int j = 1; j <= 2*(n-i); j++) cout<<"  ";
        for(int j = 1; j <= i; j++) cout<<"* ";
        cout<< endl;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++) cout<<"* ";
        for(int j = 1; j <= 2*(n-i); j++) cout<<"  ";
        for(int j = 1; j <= i; j++) cout<<"* ";
        cout<< endl;
    }

10.
*                 * 
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * * 
*                 *

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++) cout<<"* ";
        for(int j = 1; j <= 2*(n-i); j++) cout<<"  ";
        for(int j = 1; j <= i; j++) cout<<"* ";
        cout<< endl;
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= i; j++) cout<<"* ";
        for(int j = 1; j <= 2*(n-i); j++) cout<<"  ";
        for(int j = 1; j <= i; j++) cout<<"* ";
        cout<< endl;
    }

11.
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * *
   * *
    *

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (n-i); j++) cout<<" ";
        for(int j = 1; j<= i; j++) cout<<"* ";
        cout<< endl;
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= (n-i); j++) cout<<" ";
        for(int j = 1; j<= i; j++) cout<<"* ";
        cout<< endl;
    }


*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter n: ";
    cin>> n;

    //Paste Pattern Snippet Here

    return 0;
}