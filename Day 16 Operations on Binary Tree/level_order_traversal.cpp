#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_Order(Node *root)
{
    if (!root)
        return;

    // 1. Create a Queue to store pointers to nodes
    queue<Node *> q;
    q.push(root); // Start with the Root

    while (!q.empty())
    {
        // A. Remove the node from the front of the queue
        Node *f = q.front();
        q.pop();

        // B. Process the node (Print its value)
        cout << f->val << " ";

        // C. Add the children to the back of the queue
        // They will wait their turn until the current level is finished.
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;

    a->left = c;

    b->left = d;
    b->right = e;

    level_Order(root);

    return 0;
}