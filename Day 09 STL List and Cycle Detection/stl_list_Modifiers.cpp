#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1 = {10, 20, 30};
    list<int> l2;
    l2 = l1;
    for (int val : l2)
    {
        cout << val << " ";
    }
    cout << endl;

    list<int> l3;
    l3.assign(l1.begin(), l1.end());
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;

    l3.push_front(5);
    l3.push_back(40);
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;

    l3.pop_back();
    l3.pop_front();
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << *next(l3.begin(), 2) << endl;

    l3.insert(next(l3.begin(), 2), 100);

    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;

    vector<int> v = {1, 2, 3};
    l3.insert(next(l3.begin(), 2), v.begin(), v.end());
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;

    l3.erase(next(l3.begin(), 5));
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;

    l3.erase(next(l3.begin(), 2), next(l3.begin(), 5));
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;

    replace(l3.begin(), l3.end(), 20, 200);
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;

    auto it = find(l3.begin(), l3.end(), 200);
    if (it == l3.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    return 0;
}