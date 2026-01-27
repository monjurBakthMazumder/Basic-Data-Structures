#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Declaration
    // This creates a queue that stores integers.
    queue<int> q;

    // 2. Inputting Data
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val); // Adds 'val' to the back of the queue
    }

    // 3. Peeking at the Ends
    // front(): returns the oldest element (at the start of the line).
    // back(): returns the newest element (at the end of the line).
    cout << q.front() << " " << q.back() << " " << q.size() << endl;

    // 4. Processing the Line
    while (!q.empty())
    {
        // We print the person at the front, then tell them to leave the line.
        cout << q.front() << " ";
        q.pop(); // Removes the front element
    }

    return 0;
}