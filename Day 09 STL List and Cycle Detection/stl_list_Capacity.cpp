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
    cout << l.size() << endl;
    cout << l.max_size() << endl;
    cout << l.empty() << endl;
    l.resize(2);

    cout << l.size() << endl;
    cout << l.empty() << endl;
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    l.clear();
    cout << l.size() << endl;
    cout << l.empty() << endl;
    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}