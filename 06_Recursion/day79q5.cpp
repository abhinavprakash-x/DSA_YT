//Q5: Given a string, write a recursive function to count the number of consonants in it.
#include<iostream>
using namespace std;

int countConsonants(string str, int index) {
    if(index == str.length()) return 0;
    char ch = tolower(str[index]);

    if((ch >= 'a' && ch <= 'z') && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        return 1 + countConsonants(str, index + 1);

    else return countConsonants(str, index + 1);
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Number of consonants: " << countConsonants(str, 0) << endl;

    return 0;
}