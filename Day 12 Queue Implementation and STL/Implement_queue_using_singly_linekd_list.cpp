#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class MyQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    // 1. PUSH: Adding to the back
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        { // First item in queue
            head = tail = newNode;
            return;
        }
        tail->next = newNode; // Old tail points to new node
        tail = newNode;       // New node becomes the new tail
    }

    // 2. POP: Removing from the front
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next; // The second person is now the front
        delete deleteNode; // Free the memory of the old front

        // If the queue is now empty, reset tail to NULL
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    // 3. FRONT/BACK: Peek at the ends
    int front() { return head->val; }
    int back() { return tail->val; }

    // 4. SIZE/EMPTY
    int size() { return sz; }
    bool empty() { return head == NULL; }
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