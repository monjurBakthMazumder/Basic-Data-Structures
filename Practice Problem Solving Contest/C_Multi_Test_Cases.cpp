// Problem Link: https://vjudge.net/contest/780287#problem/C

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
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 != 0)
            {
                odd++;
            }
        }
        cout << odd << endl;
    }

    return 0;
}