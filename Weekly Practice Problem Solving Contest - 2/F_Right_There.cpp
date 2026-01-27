// Problem Link: https://vjudge.net/contest/783056#problem/F

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n, x;
        cin >> n >> x;
        if (n > x) cout << "NO\n"; 
        else cout << "YES\n"; 
    }
    return 0;
}
