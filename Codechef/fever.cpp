    #include<iostream>

    using namespace std;

    string fever(int temp){
        if (temp > 98)
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
            int temp;
            cin >> temp;
            cout << fever(temp)<<endl;
        }
        return 0;
    }