#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // 1. Outer Loop: Linear O(N)
    // This runs from 0 to n-1.
    // Total iterations: N
    for (int i = 0; i < n; i++) 
    {
        // 2. Inner Loop: Logarithmic O(log N)
        // Notice 'j' starts at 1 and multiplies by 2 (j *= 2).
        // Example if n=16: j goes 1, 2, 4, 8 (4 steps).
        // Since the steps grow exponentially, the count is log2(n).
        for (int j = 1; j < n; j *= 2) 
        {
            cout << "Hello ";
        }
    }

    // Calculation:
    // Outer Loop (N) * Inner Loop (log N) = O(N log N)
    
    return 0;
}