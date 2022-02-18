#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 10;

    int f = 0, s = 1;

    if (n <= 3)
    {
        cout << "0 1" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << f << " ";
            int temp = f + s;
            f = s;
            s = temp;
        }
    }

    return 0;
}