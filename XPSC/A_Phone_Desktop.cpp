// Problem Link: https://codeforces.com/problemset/problem/1974/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int screen = y / 2;
        int rest = screen * 7;
        if (y % 2 != 0)
        {
            screen++;
            rest += 11;
        }
        if (x > rest)
        {
            x -= rest;
            screen += x / 15;
            if (x % 15 != 0)
            {
                screen++;
            }
        }

        cout << screen << endl;
    }
    return 0;
}