#include <bits/stdc++.h>

using namespace std;

void fibonacci(int num, int sum, int first, int second)
{
    if (num > 0)
    {
        cout << first << " ";
        int sum = first + second;
        first = second;
        second = sum;
        return fibonacci(num - 1, sum, first, second);
    }
}

int main()
{
    fibonacci(10, 0, 0, 1);
    return 0;
}
