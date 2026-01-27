#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};

    // 1. l.front()
    // Returns a reference to the FIRST element in the list.
    cout << l.front() << endl; // Output: 1

    // 2. l.back()
    // Returns a reference to the LAST element in the list.
    cout << l.back() << endl;  // Output: 5

    // 3. l.begin()
    // Returns an ITERATOR (pointer-like object) pointing to the first node.
    // To get the value, we must "dereference" it with the asterisk (*).
    cout << *l.begin() << endl; // Output: 1

    // 4. next(iterator, steps)
    // Since we can't do l.begin() + 2, we use next().
    // It starts at begin() and "walks" forward 1 step.
    cout << *next(l.begin(), 1) << endl; // Output: 2 (the element at index 1)

    return 0;
}