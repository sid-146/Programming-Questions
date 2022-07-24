#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int stu;
    cin >> stu;
    vector<int> present;

    for (int i = 0; i < stu; i++)
    {
        int value;
        cin >> value;
        present[i] = value;
    }

    sort(present.begin(), present.end());

    for (int i = present.front(); i < present.back(); i++)
    {
        cout << present[i] << " ";
    }

    return 0;
}