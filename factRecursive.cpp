#include <bits/stdc++.h>

using namespace std;

int f(int n)
{
    if (n > 1)
    {
        return n * f(n - 1);
    }
    return 1;
}

int main()
{
    int n = 10;
    int ans = f(n);
    cout << ans;
}