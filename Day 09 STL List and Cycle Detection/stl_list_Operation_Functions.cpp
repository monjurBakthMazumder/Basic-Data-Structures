#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {
        30,
        70,
        30,
        40,
        40,
        50,
        90,
        30,
        100,
        50,
    };
    l.remove(100);
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.sort();
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.sort(greater<int>());
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.sort();
    l.unique();
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    l.reverse();
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}