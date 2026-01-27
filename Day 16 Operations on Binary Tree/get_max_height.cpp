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

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *p = q.front();
        q.pop();
        // 2. oi node ke niya kaj kora
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }
        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        p->left = myLeft;
        p->right = myRight;

        // 3. children push kora
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

int max_height(Node *root)
{
    // 1. Base Case: An empty tree has no height.
    if (!root)
    {
        return 0;
    }

    // 2. Leaf Case: A single node (leaf) has a height of 0.
    // (Note: Some definitions say height is 1, but usually edges are counted).
    if (!root->left && !root->right)
    {
        return 0;
    }

    // 3. Recursive Step: Get heights of left and right subtrees.
    int l = max_height(root->left);
    int r = max_height(root->right);

    // 4. Return the maximum of the two + 1 for the current level.
    return max(l, r) + 1;
}

int main()
{
    Node *root = input_tree();
    cout << max_height(root);
    return 0;
}