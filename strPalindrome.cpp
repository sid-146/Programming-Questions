#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "SudhaahduS";
    bool IsPalindrome = true;
    int l = s.length(), i;
    for (i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - i - 1])
        {
            IsPalindrome = false;
        }
    }

    if (IsPalindrome == false)
        cout << "Not palindrome" << endl;
    else
        cout << "Palindrome" << endl;

    return 0;
}