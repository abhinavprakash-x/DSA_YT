#include<iostream>
using namespace std;

int main()
{
    //Q1. Print the address of the first index of the char array in c++.
    char str[8] = {'a','b','h','i','n','a','v', '\0'};
    cout << (void*)str << endl;

    //Q2. Print the address of the char variable in c++.
    char c = 'A';
    cout << (void*)&c << endl;          // We use (void*) because cout otherwise prints the character as &c -> char*

    //Q3. Print the address of String in c++.
    char *ptr = str;
    for(int i = 0; i < 8; ++i) {
        cout << (void*)ptr << endl;
        ptr++;
    }

    //Q4. What is the difference between arr and &arr.
    int arr[5] = {1,2,3,4,5};
    cout << arr << endl;        // arr is a pointer to first element of array   type = int*
    cout << &arr << endl;       // &arr is a pointer to entire array            type = int (*)[5]
    //So arr + 1 = 2nd element but &arr + 1 = 2nd array

    //Q5. Create a pointer which will store the address of the last element.
    // Then print all the elements from the last index to 0th index with the help of a pointer.
    int* ptr2 = &arr[4];
    for(int i = 0; i < 5; i++) {
        cout << *ptr2 << endl;
        ptr2--;
    }

    return 0;
}