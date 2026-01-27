// Problem Link: https://vjudge.net/contest/783056#problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (
            s == "abc" ||
            s == "acb" ||
            s == "bac" ||
            s == "cba"
        )
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