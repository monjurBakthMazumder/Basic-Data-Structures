// Problem Link: https://vjudge.net/contest/780287#problem/G

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y;
    cin >> x >> y;

    if ((x - y) > -3 && (x - y) < 4)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}