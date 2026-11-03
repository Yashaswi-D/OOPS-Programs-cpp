#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1 == str2)
    {
        cout << "Both strings are equal";
    }
    else if (str1 > str2)
    {
        cout << "First string is greater than second string (Lexicographically)";
    }
    else if (str1 < str2)
    {
        cout << "First string is smaller than second string (Lexicographically)";
    }

    return 0;
}

