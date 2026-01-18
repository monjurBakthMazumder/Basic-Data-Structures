#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    // 1. Input
    // We need values for both 'n' and 'm'.
    cin >> n >> m; 

    // 2. Outer Loop
    // Runs 'n' times.
    // Think of this as the "Rows" in a grid.
    for (int i = 0; i < n; i++)
    {
        // 3. Inner Loop
        // Runs 'm' times.
        // Think of this as the "Columns" in a grid.
        // CRITICAL: This entire loop runs fully for EVERY single 'i'.
        for (int j = 0; j < m; j++)
        {
            // 4. Operation
            // Total executions = n * m
            cout << i << " " << j << endl;
        }
    }
    
    // Complexity Calculation:
    // If n = 5 and m = 5:
    // Outer runs 5 times. Inner runs 5 times.
    // Total = 5 * 5 = 25 operations.
    // Complexity = O(n * m)
    // If n is equal to m, it becomes O(n^2) (Quadratic).

    return 0;
}