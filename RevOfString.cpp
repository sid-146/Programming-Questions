#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "Sudhanwa";

    for (int i = 0; i < s.length() / 2; i++)
    {
        char temp = s[s.length() - i - 1];
        s[s.length() - 1 - i] = s[i];
        s[i] = temp;
    }
    cout << "rev: " << s << endl;
    return 0;
}
