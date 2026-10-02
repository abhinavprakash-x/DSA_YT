/*
Q1. What is void* and it's use case?
ans. void* is a pointer to a memory address without any data type.

Q2. What is static_cast in c++ ?
ans. a compile time casting method between compatible data types (if conversion is allowed)
     unlike (int)x (c-style typecasting) which can perform reinterpret_cast static_cast
     or const_cast based on context, static_cast is more explicit and only does that.

Q3. What is the difference between these 2 lines
    const char *str = "Hello, World!";
    char *str = "Hello, World!";
ans. const char* --> string literal, immutable, pointer can be pointed anywhere else
     char* --> your own array, mutable, string can be modified
     to make the pointer constant do char *const str
*/

#include<iostream>
using namespace std;

int calculateLength(const char* str)
{
    int len = 0;
    while(str[len] != '\0') len++;
    return len;
}

bool isPallindrome(const char* str)
{
    int len = calculateLength(str);
    for(int i = 0; i < len / 2; ++i) {
        if(str[i] == str[len - i - 1]) continue;
        else return false;
    }
    return true;
}

int main()
{
    //Q4. strlen
    const char* myString = "Hello, World!";
    cout << "Length: " << calculateLength(myString) << endl;

    //Q5. pallindrome
    const char *palindrome1 = "level";
    const char *palindrome2 = "hello";
    cout << "Pallindrome1: " << isPallindrome(palindrome1) << endl;
    cout << "Pallindrome2: " << isPallindrome(palindrome2) << endl;

    return 0;
}