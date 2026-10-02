#include<iostream>
using namespace std;

void modifyString(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 'a' + 'A';
        }
        str++;
    }
}

void concatenateAndPrint(char *str1, const char *str2)
{
    while (*str1)
    {
        str1++;
    }

    while ((*str1 = *str2))
    {
        str1++, str2++;
    }
}

void reverseString(char *str)
{
    char *end = str;
    while (*end)
    {
        end++;
    }
    end--;

    while (str < end)
    {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++, end--;
    }
}

void updateValues(int *a, int *b) {
    *a += *b;
    *b = abs(*a - 2 * (*b));
}

void countVowelsAndConsonants(const char *str, int &vowels, int &consonants) {
    vowels = consonants = 0;

    while (*str) {
        char ch = tolower(*str);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        str++;
    }
}

void foo(int *i, int*j) {
    *i = *i + *j;
    *j = *i - *j;
    *i = *i - *j;
}

int main()
{
    cout << "Q2 Real Answer: ";
    char myString[] = "hello World";
    modifyString(myString);
    cout << myString;
    cout << endl;

    cout << "Q3 Real Answer: ";
    char first[] = "Good";
    const char second[] = "Morning";
    concatenateAndPrint(first, second);
    cout << first;
    cout << endl;

    cout << "Q4 Real Answer: ";
    char myString2[] = "Programming";
    reverseString(myString2);
    cout << myString2;
    cout << endl;

    cout << "Q5 Real Answer: ";
    int x = 5, y = 3;
    updateValues(&x, &y);
    cout << x << " " << y;
    cout << endl;

    cout << "Q6 Real Answer: ";
    const char *text = "Hello, World!";
    int numVowels, numConsonants;
    countVowelsAndConsonants(text, numVowels, numConsonants);
    cout << "Vowels: " << numVowels << ", Consonants: " << numConsonants;
    cout << endl;

    cout << "Q7 Real Answer: ";
    int a = 4, b = 5;
    foo(&a, &b);
    cout<<a<<b;
    cout << endl;

    return 0;
}