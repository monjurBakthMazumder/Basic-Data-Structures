#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << l.front() << endl;
    cout << l.back() << endl;
    cout << *next(l.begin(), 1) << endl;

    cout << *l.begin() << endl;

    return 0;
}