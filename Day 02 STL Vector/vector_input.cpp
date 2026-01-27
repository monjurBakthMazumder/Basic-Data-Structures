#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // --- METHOD 1: PRE-ALLOCATED ACCESS ---
    // We tell the vector exactly how many slots to make immediately.
    // v(n) creates 'n' elements initialized to 0.
    vector<int> v(n); 

    for (int i = 0; i < n; i++)
    {
        // Since the slots already exist, we can use cin directly 
        // with the index [i], just like a normal array.
        cin >> v[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // --- METHOD 2: DYNAMIC PUSH_BACK ---
    // We start with a completely empty vector (size 0).
    vector<int> v2; 

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        // Since v2 has no slots yet, we can't use v2[i].
        // push_back(x) creates a new slot at the end and puts 'x' in it.
        v2.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}