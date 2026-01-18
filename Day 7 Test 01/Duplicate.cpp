// Problem Link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-08/challenges/duplicate-12

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
    int flag = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}