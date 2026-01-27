#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    // Internal storage: STL list handles all pointers and memory
    list<int> l;

    // 1. PUSH: Adding to the end of the line
    void push(int val) // O(1)
    {
        l.push_back(val); // Standard list function
    }

    // 2. POP: Removing from the very front
    void pop() // O(1)
    {
        l.pop_front(); // Standard list function
    }

    // 3. FRONT: Peeking at the first element
    int front() // O(1)
    {
        return l.front();
    }

    // 4. BACK: Peeking at the last element
    int back() // O(1)
    {
        return l.back();
    }

    // 5. SIZE & EMPTY
    int size() { return l.size(); }
    int empty() { return l.empty(); }
};

int main()
{
    MyQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    cout << q.front() << " " << q.back() << " " << q.size() << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}