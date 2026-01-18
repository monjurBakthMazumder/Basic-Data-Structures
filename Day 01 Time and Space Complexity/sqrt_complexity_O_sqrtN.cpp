#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Loop Condition: i <= sqrt(n)
    // Instead of going all the way to 'n', we stop at the square root.
    //
    // Example: If n = 36
    // sqrt(36) is 6.
    // The loop runs for i = 1, 2, 3, 4, 5, 6.
    // Total steps = 6.
    //
    // Compare this to O(N):
    // O(N) would run 36 times.
    // O(sqrt N) runs only 6 times.
    // It is much faster!
    for (int i = 1; i <= sqrt(n); i++) 
    {
        // Printing the current number
        cout << i << " ";
    }
    
    return 0;
}