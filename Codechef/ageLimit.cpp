#include<iostream>

using namespace std;

string ageLimit(int low, int up, int age)
{  
    if(age>= low && age < up)
        return "YES";
    else
        return "NO";
}

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        int age, low, up;
        cin >> low >>up>> age;
        cout << ageLimit(low, up, age) << endl;
    }

    return 0;
}