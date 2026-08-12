/*
Q1: int arr[3][4], 
    cout<<arr;
    cout<<arr[0]
    cout<<arr[0][0]
What will be the output of the program and show us the proper reason behind it.

ans: The output of the program will be errors, because of the missing semi colons
     and the comma instead of semi colon, if we ignore that then the answer will be
     cout << arr --> address of first row first column element of array
     cout << arr[0] --> address of first row first element of array
     cout << arr[0][0] --> value of first row first column element of array
     (garbage value since nothing is assigned yet)
*/

/*
Q2: How memory is deallocated in case of dynamically created 3D arrays in c++.
ans: using delete keyword for normal vars
     and delete[] for arrays
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[3][4]; 
    cout<<arr << endl;
    cout<<arr[0] << endl;
    cout<<arr[0][0] << endl;

    // Q3: Dynamically create 4D Arrays in C++
    int w, x, y, z;
    cout << "4-D Array in C++\nEnter Dimensions: ";
    cin >> w >> x >> y >> z;

    int ****ptr = new int ***[w];
    for(int i = 0; i < w; ++i) {
        ptr[i] = new int **[x];
        for(int j = 0; j < x; ++j) {
            ptr[i][j] = new int *[y];
            for(int k = 0; k < y; ++k) {
                ptr[i][j][k] = new int [z];
            }
        }
    }

    for(int i = 0; i < w; ++i) {
        for(int j = 0; j < x; ++j) {
            for(int k = 0; k < y; ++k) {
                for(int l = 0; l < z; ++l) {
                    ptr[i][j][k][l] = l;
                    cout << ptr[i][j][k][l] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
        cout << endl;
    }

    for(int i = 0; i < w; ++i) {
        for(int j = 0; j < x; ++j) {
            for(int k = 0; k < y; ++k) {
                delete[] ptr[i][j][k];
            }
            delete[] ptr[i][j];
        }
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}