// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    // 1. We use a 1-based index (size n+1) to make the math easier for 'L' and 'R'.
    vector<long long int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // 2. PRE-CALCULATION: Creating the Prefix Sum array.
    // pre[i] will store the sum of all elements from v[1] to v[i].
    vector<long long int> pre(n + 1);
    pre[1] = v[1];
    for (int i = 2; i <= n; i++)
    {
        // Current prefix sum = (sum of previous elements) + (current element)
        pre[i] = pre[i - 1] + v[i];
    }

    // 3. ANSWERING QUERIES:
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long int sum;

        // If starting from the very beginning, the sum is just the prefix value at 'r'.
        if (l == 1)
        {
            sum = pre[r];
        }
        else
        {
            // The MAGIC formula: Sum of range [L, R] = Total sum up to R - Total sum up to (L-1).
            // This way, we get the sum in O(1) constant time!
            sum = pre[r] - pre[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}
