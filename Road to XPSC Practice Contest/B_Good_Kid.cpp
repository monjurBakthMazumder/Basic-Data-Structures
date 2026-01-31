// Problem Link: https://vjudge.net/contest/785738#problem/B

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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int idx = min_element(a.begin(), a.end()) - a.begin();
        a[idx]++;

        long long product = 1;
        for (long long x : a)
            product *= x;
        cout << product << "\n";
    }
    return 0;
}
