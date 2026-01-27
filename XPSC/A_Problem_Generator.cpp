// Problem Link: https://codeforces.com/problemset/problem/1980/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int fre[7] = {0};
        for (char c : s)
            fre[c - 'A']++;

        int count = 0;
        for (int i = 0; i < 7; i++)
            if (fre[i] < m)
                count += m - fre[i];

        cout << count << endl;
    }
    return 0;
}