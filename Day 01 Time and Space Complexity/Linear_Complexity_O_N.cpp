#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Variable Declaration
    // Takes negligible time.
    int n;

    // 2. Input
    // This operation happens only ONCE.
    // Time Complexity: O(1) (Constant Time)
    cin >> n;

    // 3. The Loop ( The Main Driver of Complexity )
    // This loop starts at 0 and runs until it reaches 'n'.
    // If n = 5, it runs 5 times.
    // If n = 1000, it runs 1000 times.
    // Since the number of operations grows directly with 'n', this is O(n).
    for (int i = 0; i < n; i++)
    {
        // 4. Operation Inside Loop
        // This print statement is executed 'n' times.
        cout << i << " ";
    }

    // Total Time Complexity: O(1) + O(n) ≈ O(n)
    // We ignore the small constant parts and focus on the loop.
    return 0;
}