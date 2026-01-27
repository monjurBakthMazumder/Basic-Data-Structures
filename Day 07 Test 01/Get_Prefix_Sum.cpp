// Problem Link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-08/challenges/get-prefix-sum

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long int prefix[n];
    prefix[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << prefix[i] << " ";
    }
    return 0;
}