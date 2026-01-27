#include <bits/stdc++.h>
using namespace std;

// Standard Doubly Linked List Node
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

class MyQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    // 1. PUSH: Joining the line (at the back/tail)
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode; // New person is now the end of the line
    }

    // 2. POP: Getting served (at the front/head)
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next; // Move the front to the second person
        delete deleteNode; // Remove the first person from memory

        if (head == NULL)
        { // If the line is now empty
            tail = NULL;
            return;
        }
        head->prev = NULL; // New front has no one in front of them
    }

    // 3. FRONT/BACK: Peeking at the start or end
    int front() { return head->val; }
    int back() { return tail->val; }

    // 4. SIZE/EMPTY: Monitoring the line
    int size() { return sz; }
    int empty() { return head == NULL; }
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