#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaration: set<Type> s;
    // Sets only store keys, and every key must be unique.
    set<int> s;
    
    int n;
    cin >> n; // Read how many numbers the user wants to enter

    while (n--)
    {
        int val;
        cin >> val;
        
        // INSERTION: O(log N)
        // If 'val' already exists in the set, it won't be added again.
        // The set automatically finds the correct spot to keep the order.
        s.insert(val); 
    }

    // ITERATION: O(N)
    // Sets use an iterator to traverse the tree.
    // Because it's a balanced BST, the output will be in SORTED order.
    for (auto it = s.begin(); it != s.end(); it++)
    {
        // 'it' is a pointer-like object, so we use '*' to get the value.
        cout << *it << endl;
    }

    // SEARCHING: O(log N)
    // .count(value) returns 1 if the value is present, 0 otherwise.
    // In a set, .count() can only ever be 0 or 1.
    cout << "Is 4 in the set? " << s.count(4) << endl;

    return 0;
}