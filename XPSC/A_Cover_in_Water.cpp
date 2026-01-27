// Problem Link: https://codeforces.com/problemset/problem/1900/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int consecutive = 0, empty = 0;
        for (char c : s)
        {
            if (c == '.')
            {
                consecutive++;
                empty++;
                if (consecutive == 3)
                    break;
            }
            else
                consecutive = 0;
        }
        if (consecutive == 3)
            cout << 2 << endl;
        else
            cout << empty << endl;
    }
    return 0;
}