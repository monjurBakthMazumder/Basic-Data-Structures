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

int main()
{
    // 1. Creating Nodes
    Node *head = new Node(10);
    Node *a = new Node(10);
    Node *b = new Node(10);
    Node *c = new Node(10);
    Node *d = new Node(10);
    Node *e = new Node(10);

    // 2. Creating a Cycle (The Loop)
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = head; // This makes it a circle! 'e' points back to the 'head'.

    // 3. Initialize Two Pointers
    Node *slow = head; // Moves 1 step (The Tortoise)
    Node *fast = head; // Moves 2 steps (The Hare)

    int flag = 0; // A simple signal: 0 means no cycle, 1 means cycle found

    // 4. The Racing Loop
    // 'fast' will reach NULL first if there is no cycle.
    // We check fast->next so fast->next->next doesn't crash.
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;        // Move 1 step
        fast = fast->next->next;  // Move 2 steps

        // 5. The Meeting Point
        // If slow and fast land on the EXACT same memory address, a cycle exists.
        if (slow == fast)
        {
            flag = 1; // Cycle detected!
            break;
        }
    }

    // 6. Output the Result
    if (flag)
    {
        cout << "Cycle detected" << endl;
    }
    else
    {
        cout << "No Cycle" << endl;
    }

    return 0;
}