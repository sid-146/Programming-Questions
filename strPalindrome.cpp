#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "ABCBA";

    int l = s.length(), i;
    for (i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - i - 1])
        {
            // cout << "not" << endl;
            break;
        }
    }
    if (i == l - 1)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "not palindrome" << endl;
    }

    return 0;
}