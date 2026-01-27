// Problem Link: https://codeforces.com/problemset/problem/2106/A

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
        int count = 0;
        for (char c : s)
        {
            if (c == '1')
            {
                count++;
            }
        }
        int result = 0;
        for (char c : s)
        {
            if (c == '1')
            {
                result += count - 1;
            }
            else
            {
                result += count + 1;
            }
        }
        cout << result << endl;
    }
    return 0;
}