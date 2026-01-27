// Problem Link: https://vjudge.net/contest/783056#problem/D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            cout << arr[i];
            return 0;
        }
    }
    cout << arr[n - 1];
    return 0;
}
