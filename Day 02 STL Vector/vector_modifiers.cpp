#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1 = {1, 2, 4, 3, 5};

    vector<int> v2;
    v2 = v1;
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    v2.push_back(6);
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    v2.pop_back();
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    v2.insert(v2.begin() + 2, 100);
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    v2.insert(v2.end() - 1, 200);
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    v2.insert(v2.begin() + 1, v1.begin(), v1.end());
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    v2.erase(v2.begin() + 1);
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    v2.erase(v2.begin() + 1, v2.begin() + 5);
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    replace(v2.begin(), v2.end(), 100, 0);
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    auto it = find(v2.begin(), v2.end(), 200);
    if (it == v2.end())
        cout << "Not Fount";
    else
        cout << "Found";
    cout << endl;

    cout << v1[2] << endl;
    cout << v1.back() << endl;
    cout << v1.front() << endl;

    for (auto it = v2.begin(); it < v2.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}