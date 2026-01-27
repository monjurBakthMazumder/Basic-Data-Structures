#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1. Default Constructor
    // Creates an empty list (size = 0).
    list<int> l1; 

    // 2. Size Constructor
    // Creates a list with 10 nodes, all initialized with 0.
    list<int> l2(10); 

    // 3. Size with Value Constructor
    // Creates a list with 10 nodes, each containing the value 5.
    list<int> l3(10, 5); 

    // 4. Initializer List (C++11)
    // Directly setting the values at creation.
    list<int> l4 = {1, 2, 3, 4, 5};

    // 5. Copy Constructor
    // Creates a brand new list 'l5' that is an exact copy of 'l4'.
    list<int> l5(l4); 

    // 6. Range Constructor (From Array)
    // Copies values from the memory range of an array.
    int a[5] = {1, 5, 4, 9, 2};
    list<int> l6(a, a + 5); 

    // 7. Range Constructor (From Vector)
    // You can even copy data from a different container like a vector!
    vector<int> v = {8, 1, 6, 3, 4};
    list<int> l7(v.begin(), v.end()); 

    return 0;
}