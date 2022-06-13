#include <iostream>

using namespace std;

bool isPrime(int num)
{
    bool cnt = true;

    for (int j = 2; j <= num / 2; j++)
    {
        if (num % j == 0)
            cnt = false;
    }

    if (cnt)
        return false;
    else
        return true;
}

int main()
{
    int n, count = 0, arr[200], sum = 0, k = 0;
    bool cnt, ans;

    cout << "Enter Number" << endl;
    cin >> n;

    for (int i = 2; i < n + 1; i++)
    {
        cnt = true;

        for (int j = 2; j <= n / 2; j++)
        {
            if (i % j == 0)
            {
                cnt = false;
            }

            if (cnt)
            {
                arr[k] = i;
            }
        }
    }

    for (int i = 0; i < k; i++)
    {
        sum = sum + arr[i];
        ans = isPrime(sum);

        if (ans)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}