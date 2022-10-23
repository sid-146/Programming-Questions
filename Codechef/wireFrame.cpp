#include <iostream>

using namespace std;

int wireFrame(int len, int bred, int cost)
{
    return 2 * (len + bred) * cost;
}

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        cout << wireFrame(n, m, x) << endl;
    }
    return 0;
}