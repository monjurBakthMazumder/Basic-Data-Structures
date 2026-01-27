// Problem Link : https://www.hackerrank.com/contests/ds-course-grand-contest-semi-final-round-a-batch-08/challenges/silent-days-in-the-city

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
    vector<int> v;
    int silentDays = 0;
    v.push_back(silentDays);
    for (int i = 1; i < n-1; i++)
    {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
        {
            silentDays++;
            v.push_back(silentDays);
        }
        else
        {
            v.push_back(silentDays);
        }
    }
    v.push_back(silentDays);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        int count = v[min(b-1, n-2)] - v[max(a-2,0)];
        cout << count << endl;
    }
    return 0;
}