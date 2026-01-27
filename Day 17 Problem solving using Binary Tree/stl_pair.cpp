#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Declaration
    // A pair links two values of any type. Here, both are integers.
    pair<int, int> p1, p2;

    // 2. Using make_pair()
    // This is the traditional way to assign values to a pair.
    p1 = make_pair(2, 3);
    
    // Accessing values: Use .first and .second
    cout << p1.first << endl;  // Output: 2
    cout << p1.second << endl; // Output: 3

    // 3. Using Initializer List (C++11 and newer)
    // You can use curly braces {} for a cleaner syntax.
    p2 = {10, 20};
    cout << p2.first << " " << p2.second << endl;

    // 4. Vector of Pairs
    // This is very common in competitive programming to store 2D data.
    int n;
    cin >> n; // Example: 5
    
    // Create a vector where each element is a pair of two integers.
    vector<pair<int, int>> v(n);

    // Inputting into a vector of pairs
    for (int i = 0; i < n; i++)
    {
        // We access each pair by index, then its internal parts by .first/.second
        cin >> v[i].first >> v[i].second;
    }

    // Printing the vector of pairs
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}