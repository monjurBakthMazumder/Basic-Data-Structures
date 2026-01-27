#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l1 = {10, 20, 30};
    
    // 1. Assignment Operator (=)
    // Copies all elements from l1 into l2.
    list<int> l2;
    l2 = l1; 

    // 2. Assign Function
    // Another way to copy. Useful if you only want to copy a specific range.
    list<int> l3;
    l3.assign(l1.begin(), l1.end());

    // 3. Adding to Ends
    l3.push_front(5);  // Adds 5 to the beginning -> {5, 10, 20, 30}
    l3.push_back(40);   // Adds 40 to the end -> {5, 10, 20, 30, 40}

    // 4. Removing from Ends
    l3.pop_back();      // Removes the last element (40)
    l3.pop_front();     // Removes the first element (5)

    // 5. Insert at Specific Position
    // insert(iterator, value)
    // We use next() to move the iterator to index 2.
    l3.insert(next(l3.begin(), 2), 100); 

    // 6. Insert a Range (like a Vector)
    // You can "inject" a whole vector into the middle of a list!
    vector<int> v = {1, 2, 3};
    l3.insert(next(l3.begin(), 2), v.begin(), v.end());

    // 7. Erase (Delete)
    // Deletes the single node at the calculated position.
    l3.erase(next(l3.begin(), 5));

    // 8. Erase a Range
    // Deletes everything between two iterators.
    l3.erase(next(l3.begin(), 2), next(l3.begin(), 5));

    // 9. Replace (Global Function)
    // replace(start, end, old_val, new_val)
    // Finds every 20 and turns it into 200.
    replace(l3.begin(), l3.end(), 20, 200);

    // 10. Find (Global Function)
    // find(start, end, value)
    // If find() reaches end(), it means the value wasn't there.
    auto it = find(l3.begin(), l3.end(), 200);
    if (it == l3.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }

    return 0;
}