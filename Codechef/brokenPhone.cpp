#include<iostream>

using namespace std;

string brokenPhone(int rep, int neww)
{
    if(rep == neww)
        return "ANY";
    else if (neww>rep)
        return "REPAIR";
    else
        return "NEW PHONE";
}

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int x, y;
        cin >> x >> y;
        cout<<brokenPhone(x,y) << endl;
    }
    return 0;
}