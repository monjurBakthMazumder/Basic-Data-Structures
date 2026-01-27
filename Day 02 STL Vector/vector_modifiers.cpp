#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 4, 3, 5};

    // 1. Assignment (=)
    // You can copy an entire vector into another with a single '='.
    vector<int> v2;
    v2 = v1; 

    // 2. push_back and pop_back
    // push_back adds to the end; pop_back removes from the end.
    v2.push_back(6); // {1, 2, 4, 3, 5, 6}
    v2.pop_back();    // {1, 2, 4, 3, 5}

    // 3. insert() 
    // Uses 'iterators' (v2.begin() is the start).
    // insert(position, value)
    v2.insert(v2.begin() + 2, 100); // Inserts 100 at index 2
    
    // insert(position, start_of_other, end_of_other)
    // This inserts all elements of v1 into v2 at index 1.
    v2.insert(v2.begin() + 1, v1.begin(), v1.end());

    // 4. erase()
    // erase(position) -> removes one element
    v2.erase(v2.begin() + 1); 
    
    // erase(start, end) -> removes a range of elements
    v2.erase(v2.begin() + 1, v2.begin() + 5);

    // 5. replace() (From <algorithm> header)
    // Changes all occurrences of 100 into 0.
    replace(v2.begin(), v2.end(), 100, 0);

    // 6. find() (From <algorithm> header)
    // Searches for the value 200.
    auto it = find(v2.begin(), v2.end(), 200);
    if (it == v2.end()) // If 'it' reaches the end, the value wasn't found.
        cout << "Not Found";
    else
        cout << "Found";
    cout << endl;

    // 7. Direct Access
    cout << v1[2] << endl;    // Access by index
    cout << v1.front() << endl; // First element
    cout << v1.back() << endl;  // Last element

    return 0;
}