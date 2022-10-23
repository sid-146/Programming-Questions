#include<iostream>
using namespace std;

int bobAtTheBank(int bal, int depo, int deduc, int month)
{
    int losing = depo - deduc;
    return bal + (losing) * month;
}

int main(){
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;

        cout << bobAtTheBank(w, x,y,z) << endl;
    }
    return 0;
}