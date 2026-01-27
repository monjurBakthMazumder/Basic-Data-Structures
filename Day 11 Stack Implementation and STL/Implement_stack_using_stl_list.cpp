#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    // Internal Storage: The STL list handles all the pointers (prev, next)
    list<int> l;

    // 1. PUSH: Add an element to the TOP
    // In our list, the "Back" is our "Top".
    void push(int val)
    {
        l.push_back(val); // Instant O(1) operation
    }

    // 2. POP: Remove the element from the TOP
    void pop()
    {
        l.pop_back(); // Instant O(1) operation
    }

    // 3. TOP: Peek at the last element
    int top()
    {
        return l.back(); // Returns the last element added
    }

    // 4. SIZE: How many nodes are in the list?
    int size()
    {
        return l.size();
    }

    // 5. EMPTY: Is the list empty?
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x); // Input: 10, 20, 30
    }

    // Output will be: 30, 20, 10 (Reverse of input order)
    while (!st.empty())
    {
        cout << "top " << st.top() << endl;
        st.pop();
    }

    return 0;
}