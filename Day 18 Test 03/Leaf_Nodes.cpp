// Problem Link: https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-08/challenges/leaf-nodes-1

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

vector<int> leaf_nodes(Node *root)
{
    vector<int> v;
    if (!root)
    {
        return v;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();
        // 2. oi node ke niya kaj kora
        if (!f->right && !f->left)
        {
            v.push_back(f->val);
        }
        // 3. children push kora
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return v;
}

int main()
{

    Node *root = input_tree();
    vector<int> v = leaf_nodes(root);

    sort(v.begin(), v.end(),greater<int>());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}