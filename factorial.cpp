#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n = 10;
    int fact = 1;

    for (int i = n; i > 0; i--)
    {
        fact *= i;
    }
    cout << "Fact: " << fact << endl;

    return 0;
}
