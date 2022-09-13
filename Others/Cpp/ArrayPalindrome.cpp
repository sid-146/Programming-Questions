// ! Find minimum number of merge operations to make array palindrome

/*
Given a list of non-negative integers, find the minimum number of merge operations
to make a palindrome. A merge operation can only be performed on two adjacent elements
The result of a merge operation is that the two adjacent elements are replaced with their sum.

Testcase:
    input -> [6,1,3,7]
    output -> 1

    explanation : merge index 0 and 1 i.e [6, 1] = [7,3,7]

    [6,1,4,3,1,7]
    ans = 2
    merge index 0,1 and 3, 4
    [7,4,4,7]

    [1,3,3,1]
    ans = 0
    already palindrome
*/

#include <iostream>

using namespace std;

int ArrayPalindrome(int arr[], int n)
{
    int i = 0, j = n - 1, mergeCount = 0;

    while (i <= n / 2)
    {
        // cout << "Running " << i << endl;
        if (arr[i] < arr[j])
        {
            if (arr[i] + arr[i + 1] == arr[j])
                mergeCount++;
        }
        else if (arr[i] > arr[j])
        {
            if (arr[i] == arr[j] + arr[j - 1])
            {
                mergeCount++;
            }
        }

        i++;
        j--;
    }

    return mergeCount;
}

int main()
{
    int arr[6] = {3, 7, 7, 1, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // cout << "Running" << endl;
    int ans = ArrayPalindrome(arr, n);

    cout << ans << endl;

    return 0;
}