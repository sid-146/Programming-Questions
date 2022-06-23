#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 4> arr = {1, 2, 3, 4};

    int size = arr.size();

    cout << size << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i];

    cout << endl;

    cout << "element at 3" << arr.at(3) << endl;
    cout << "empty?" << arr.empty() << endl;

    cout << "first" << arr.front() << endl;
    cout << "last" << arr.back() << endl;

    return 0;
}