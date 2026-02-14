#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long int> v;

    long long int max_val = -1;
    for (long long int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            max_val = max(max_val, arr[i]);
        }
    }
    for (long long int i = 0; i < n - 1; i++)
    {
        for (long long int j = i + 1; j < n; j++)
        {
            long long int val = arr[i] + arr[j];
            if (val % 2 == 0)
            {
                max_val = max(max_val, val);
            }
        }
    }
    // if (max_val % 2 != 0)
    // {
    //     cout << -1;
    // }
    // else
    // {
    //     cout << max_val;
    // }
    cout << max_val;

    return 0;
}