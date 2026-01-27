#include <bits/stdc++.h>
using namespace std;

// We create a custom class to represent our Stack
class myStack
{
public:
    // We use a vector as the "internal storage" for our stack
    vector<int> v;

    // 1. PUSH: Adds an element to the top of the stack.
    // In our vector, the "Top" is simply the back of the vector.
    void push(int val)
    {
        v.push_back(val);
    }

    // 2. POP: Removes the element from the top of the stack.
    // Since we follow LIFO, we remove the last element added.
    void pop()
    {
        v.pop_back();
    }

    // 3. TOP: Returns the value of the top element WITHOUT removing it.
    // It's like peeking at the top plate.
    int top()
    {
        return v.back();
    }

    // 4. SIZE: Tells us how many elements are currently in the stack.
    int size()
    {
        return v.size();
    }

    // 5. EMPTY: Returns true if there are no plates (elements) left.
    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myStack st; // Create an instance of our stack

    // INPUT PHASE
    int n;
    cin >> n; // How many elements do we want to add?
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x); // Put 'x' on top of the stack
    }

    // OUTPUT PHASE (The LIFO Magic)
    // We keep printing and removing the top until the stack is empty.
    while (!st.empty())
    {
        // Notice: The last number you typed will be the first one printed!
        cout << "top " << st.top() << endl; 
        st.pop(); // Remove the top element to see the one underneath it
    }

    return 0;
}