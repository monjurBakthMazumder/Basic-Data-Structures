#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0; // We keep a counter so size() is O(1) instead of O(n)

    // 1. PUSH: Add to the tail (The Top of the stack)
    void push(int val) // O(1)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL) // First plate in the stack
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode; // The new node is now the new "Top"
    }

    // 2. POP: Remove the tail
    void pop() // O(1)
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev; // Step back to the previous node
        delete deleteNode;  // Free the memory
        
        if (tail == NULL) // If we just deleted the last node
        {
            head = NULL;
            return;
        }
        tail->next = NULL; // The new tail shouldn't point to anything
    }

    // 3. TOP: Look at the tail's value
    int top() // O(1)
    {
        return tail->val;
    }

    // 4. SIZE & EMPTY
    int size() { return sz; }
    bool empty() { return head == NULL; }
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
        st.push(x);
    }

    while (!st.empty())
    {
        cout << "top " << st.top() << endl;
        st.pop();
    }

    return 0;
}