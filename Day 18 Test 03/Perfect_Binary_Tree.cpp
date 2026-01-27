// Problem Link: https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-08/challenges/perfect-binary-tree

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

int max_depth(Node *root)
{
    if (!root)
    {
        return 0;
    }
    if (!root->left && !root->right)
    {
        return 1;
    }
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return max(l, r) + 1;
}

int total_node(Node *root)
{
    int total = 0;
    if (!root)
    {
        return total;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();
        // 2. oi node ke niya kaj kora
        total++;
        // 3. children push kora
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return total;
}

int main()
{
    Node *root = input_tree();
    int depth = max_depth(root);
    int total = total_node(root);
    if (pow(2, depth) - 1 == total)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}