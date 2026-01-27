#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p1, p2;
    p1 = make_pair(2, 3);
    cout << p1.first << endl;
    cout << p1.second << endl;

    p2 = {10, 20};
    cout << p2.first << endl;
    cout << p2.second << endl;

    int n;
    // 5
    cin >> n;
    vector<pair<int, int>> v(n);
    // 12 42
    // 54 52
    // 4 5
    // 2 8
    // 2 7
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}