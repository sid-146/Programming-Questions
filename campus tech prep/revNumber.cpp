#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 123456789;
    int rev = 0;
    while (n != 0)
    {
        int rem = n % 10;
        rev *= 10;
        rev += rem;
        n /= 10;
    }
    cout << "Rev :" << rev;

    return 0;
}