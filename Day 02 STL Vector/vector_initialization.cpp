#include <bits/stdc++.h>
using namespace std;

int main()
{
    // TYPE 1: The "Empty Shell"
    // Creates a vector with 0 elements. It's ready, but empty.
    vector<int> v1;
    cout << v1.size() << endl; // Output: 0

    // TYPE 2: The "Fixed Size" (Default Values)
    // Creates a vector with 5 slots, all filled with 0 by default.
    vector<int> v2(5);
    cout << v2.size() << endl; // Output: 5

    // TYPE 3: The "Custom Fill"
    // Creates 5 slots and fills every single one with the number 9.
    // Syntax: vector<type> name(size, value);
    vector<int> v3(5, 9);
    for (int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " "; // Output: 9 9 9 9 9
    }
    cout << endl;

    // TYPE 4: The "Clone" (Copy Constructor)
    // Creates a brand new vector 'v4' that is an exact copy of 'v3'.
    vector<int> v4(v3);
    for (int i = 0; i < v4.size(); i++) {
        cout << v4[i] << " "; // Output: 9 9 9 9 9
    }
    cout << endl;

    // TYPE 5: The "Array Converter"
    // Takes an old-school C-style array and copies its contents into a vector.
    // 'a' is the start, 'a + 5' is the end point.
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v5(a, a + 5);
    for (int i = 0; i < v5.size(); i++) {
        cout << v5[i] << " "; // Output: 1 2 3 4 5
    }
    cout << endl;

    // TYPE 6: The "Direct List" (C++11 and above)
    // The most modern way: just list the numbers in curly braces {}.
    vector<int> v6 = {1, 2, 3, 4, 6};
    for (int i = 0; i < v6.size(); i++) {
        cout << v6[i] << " "; // Output: 1 2 3 4 6
    }
    cout << endl;

    return 0;
}