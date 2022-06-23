#include <iostream>
#include <vector>

using namespace std;

/*
    vector is dynamic array
    vector size doubled when array out of bound is encountered
    if size 4 and when 5th element is entered then new vector with size 8 will be formed and all the values in the old vector is copied to new vector

*/
int main()
{
    vector<int> v;

    cout << "capacity" << v.capacity() << endl;
    v.push_back(1);
    cout << "capacity" << v.capacity() << endl;
    v.push_back(2);

    cout << "capacity" << v.capacity() << endl;
    v.push_back(3);

    cout << "capacity" << v.capacity() << endl;
    v.push_back(4);

    cout << "element at 2 " << v.at(2) << endl;

    cout << v.back() << endl;
    cout << v.front() << endl;

    v.pop_back();

    for (int i : v)
    {
        cout << i << endl;
    }

    return 0;
}