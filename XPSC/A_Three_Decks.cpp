// Problem Link: https://codeforces.com/problemset/problem/2104/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int total = a + b + c;
        if (total % 3 == 0 && total / 3 >= b )
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}