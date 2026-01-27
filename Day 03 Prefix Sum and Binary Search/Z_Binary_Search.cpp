// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Input n (size) and q (number of queries/questions)
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // 2. THE MOST IMPORTANT STEP: Sorting
    // Binary Search ONLY works if the numbers are in order (1, 2, 3...).
    // sort(start_address, end_address) organizes the array in O(n log n) time.
    sort(a, a + n);

    // 3. Query Loop: Run the search 'q' times
    for (int i = 0; i < q; i++)
    {
        int val;
        cin >> val; // The number we want to find this time
        int flag = 0;

        int l = 0;
        int r = n - 1;

        // 4. Binary Search Logic
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == val)
            {
                flag = 1; // Found it!
                break;
            }
            else if (a[mid] > val)
            {
                r = mid - 1; // Look in the left half
            }
            else
            {
                l = mid + 1; // Look in the right half
            }
        }

        if (flag == 1)
            cout << "found\n";
        else
            cout << "not found\n";
    }

    return 0;
}