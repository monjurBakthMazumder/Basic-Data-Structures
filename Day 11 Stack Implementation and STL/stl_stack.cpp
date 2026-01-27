#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Declaration
    // We create a stack that can hold integers.
    stack<int> st;

    // 2. Inputting Data
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x); // Adds 'x' to the top of the stack
    }

    // 3. Processing Data (The LIFO Loop)
    // We process from the last element entered back to the first.
    while (!st.empty())
    {
        cout << "top " << st.top() << endl; // Peek at the top
        st.pop(); // Remove the top
    }

    // 4. Safety Checks (Crucial!)
    // Calling st.top() or st.pop() on an empty stack causes a crash.
    // Since the loop above cleared the stack, these checks prevent errors.
    if (!st.empty())
    {
        cout << "top " << st.top() << endl;
    }

    if (!st.empty())
    {
        st.pop();
    }

    return 0;
}