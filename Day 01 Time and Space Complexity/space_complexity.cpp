#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. We declare a single integer 'n'. 
    // This takes up a tiny, fixed amount of memory: O(1) space.
    int n;
    cin >> n;

    // 2. We declare a 2D array (a matrix) of size n x n.
    // This is where the "Space Complexity" comes from.
    // If n = 10, you have 100 slots. If n = 1000, you have 1,000,000 slots.
    // Since the memory grows by the square of the input, this is O(n^2).
    int a[n][n];

    // 3. We use a loop to fill the diagonal of the matrix.
    // The loop uses a counter 'i', which is just one more integer: O(1) space.
    // Even though we are looping, we aren't creating *new* memory inside it.
    for(int i=0; i<n; i++){
        cin >> a[i][i];
    }

    return 0;
}