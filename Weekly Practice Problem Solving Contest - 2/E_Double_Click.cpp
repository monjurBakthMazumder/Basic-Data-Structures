// Problem Link: https://vjudge.net/contest/783056#problem/E

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i + 1] - arr[i]) <= d)
        {
            cout << arr[i+1];
            return 0;
        }
    }
    cout << -1;
    return 0;
}
