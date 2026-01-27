#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // 1. We input the number of strings we want to store.
    cin >> n;

    // 2. CRITICAL STEP: cin.ignore()
    // When you press 'Enter' after typing 'n', a "newline character" (\n) 
    // stays in the input buffer. cin.ignore() clears it so the next 
    // getline() doesn't accidentally read that empty 'Enter' as a string.
    cin.ignore();

    // 3. Declaration
    // This creates a vector with 'n' empty strings.
    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        // 4. Input methods:
        // cin >> v[i];      // Only reads one word (stops at space).
        getline(cin, v[i]);  // Reads the whole line (including spaces).
    }

    // 5. Range-based for loop
    // This is a modern way to say: "For every string 's' inside vector 'v'..."
    for (string s : v)
    {
        cout << s << endl;
    }

    return 0;
}