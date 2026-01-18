#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // The Loop: O(log N)
    // Notice specifically: 'i' starts at 1 (not 0) and 'i' multiplies by 2 (i *= 2).
    // It does NOT do i++ (plus 1).
    //
    // Example trace if n = 16:
    // Iteration 1: i = 1 (print 1) -> i becomes 1*2 = 2
    // Iteration 2: i = 2 (print 2) -> i becomes 2*2 = 4
    // Iteration 3: i = 4 (print 4) -> i becomes 4*2 = 8
    // Iteration 4: i = 8 (print 8) -> i becomes 8*2 = 16 (Loop stops because 16 is not < 16)
    //
    // Total steps: 4.
    // Mathematically: 2^4 = 16. So, log2(16) = 4 steps.
    for (int i = 1; i < n; i *= 2)
    {
        cout << i << " ";
    }
    
    return 0;
}