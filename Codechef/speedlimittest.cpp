#include <iostream>
using namespace std;

float calcSpeed(float dis, float timet)
{
    return dis / timet;
}

string faster(float a, float b)
{
    if (a == b)
        return "Equal";
    else if (a > b)
        return "Alice";
    else
        return "Bob";
}

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int a_dis, b_dis, a_time, b_time;
        cin >> a_dis >> a_time >> b_dis >> b_time;

        float a_speed = calcSpeed(a_dis, a_time);
        float b_speed = calcSpeed(b_dis, b_time);
        cout << faster(a_speed, b_speed) << endl;
    }
    return 0;
}