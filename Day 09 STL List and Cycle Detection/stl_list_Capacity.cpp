#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};

    // 1. size(): Returns the number of nodes currently in the list.
    cout << l.size() << endl; // Output: 5

    // 2. max_size(): Returns the maximum number of elements the list can hold
    // based on your computer's RAM/system limits. It's usually a huge number.
    cout << l.max_size() << endl;

    // 3. empty(): Returns true (1) if the list is empty, false (0) otherwise.
    cout << l.empty() << endl; // Output: 0 (False)

    // 4. resize(n): Changes the number of elements.
    // If n < current size, it deletes the extra nodes from the back.
    // If n > current size, it adds new nodes with value 0.
    l.resize(2); 
    // Now list is: {1, 2}

    // 5. clear(): Deletes every single node in the list.
    // After clear(), size() will be 0 and empty() will be true.
    l.clear();
    
    return 0;
}