#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    // Internal storage: A vector acts like a dynamic array
    vector<int> v;

    // 1. PUSH: Add an element to the TOP of the stack
    // In a vector, the "Top" is the very last index.
    void push(int val)
    {
        v.push_back(val);
    }

    // 2. POP: Remove the element from the TOP
    // Since it's LIFO, we remove the most recently added element (the back).
    void pop()
    {
        v.pop_back();
    }

    // 3. TOP: Peek at the top element without removing it
    // Returns the value sitting at the back of the vector.
    int top()
    {
        return v.back();
    }

    // 4. SIZE: How many elements are currently in the stack?
    int size()
    {
        return v.size();
    }

    // 5. EMPTY: Check if the stack has any elements
    // Returns true if size is 0, false otherwise.
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st;
    
    // Adding elements: 40 sits at the very top
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // Always check if empty before accessing the top!
    if (!st.empty())
    {
        cout << "Top element: " << st.top() << endl; // Output: 40
    }

    cout << "Size: " << st.size() << endl; // Output: 4

    // Remove the top (40)
    if (!st.empty())
    {
        st.pop();
    }

    // Now 30 is at the top
    if (!st.empty())
    {
        cout << "New Top element: " << st.top() << endl; // Output: 30
    }

    return 0;
}