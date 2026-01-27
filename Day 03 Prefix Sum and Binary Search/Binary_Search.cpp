#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // IMPORTANT: For Binary Search to work, the array MUST be sorted.
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int val; // The number we are looking for
    cin >> val;
    int flag = 0; // 0 means not found, 1 means found

    // 'l' is the Left boundary, 'r' is the Right boundary
    int l = 0;
    int r = n - 1;

    // We keep searching as long as the Left boundary hasn't crossed the Right
    while (l <= r)
    {
        // Calculate the middle index
        int mid = (l + r) / 2;

        if (a[mid] == val)
        {
            // Case 1: We found it!
            flag = 1;
            break;
        }
        else if (a[mid] > val)
        {
            // Case 2: The middle value is too BIG.
            // So, our value must be in the left half.
            // Move the Right boundary to (mid - 1).
            r = mid - 1;
        }
        else
        {
            // Case 3: The middle value is too SMALL.
            // So, our value must be in the right half.
            // Move the Left boundary to (mid + 1).
            l = mid + 1;
        }
    }

    if (flag == 1) cout << "Found\n";
    else cout << "Not Found \n";

    return 0;
}