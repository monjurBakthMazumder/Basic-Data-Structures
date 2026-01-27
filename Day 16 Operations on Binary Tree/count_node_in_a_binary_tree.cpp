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

int count_nodes(Node *root)
{
    // 1. Base Case: If the node is NULL, it doesn't exist.
    // We return 0 because there is nothing to count here.
    if (!root)
    {
        return 0;
    }

    // 2. Recursive Step: Count the children
    // Go all the way down the left and right subtrees.
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);

    // 3. The "Plus One" Rule
    // We add the left count + right count + 1 (the current node).
    return l + r + 1;
}
int main()
{
    Node *root = input_tree();
    cout << count_nodes(root);
    return 0;
}