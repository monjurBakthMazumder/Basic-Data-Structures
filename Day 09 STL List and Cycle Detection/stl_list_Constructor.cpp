#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1;
    list<int> l2(10);
    list<int> l3(10, 5);
    for (auto it = l3.begin(); it != l3.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    list<int> l4 = {1, 2, 3, 4, 5};
    list<int> l5(l4);
    for (int val : l5)
    {
        cout << val << " ";
    }
    cout << endl;

    int a[5] = {1, 5, 4, 9, 2};
    list<int> l6(a, a + 5);
    for (int val : l6)
    {
        cout << val << " ";
    }
    cout << endl;

    vector<int> v = {8, 1, 6, 3, 4};
    list<int> l7(v.begin(), v.end());
    for (int val : l7)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}