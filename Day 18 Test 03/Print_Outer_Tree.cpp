// Problem Link: https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-08/challenges/print-outer-tree

#include <bits/stdc++.h>
using namespace std;

vector<int> v;

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

void level_Order(Node *root)
{
    if (!root)
    {
        cout << "No Tree";
        return;
    }
    stack<Node *> st;
    if (root->left)
    {
        st.push(root->left);
        while (true)
        {
            Node *f = st.top();
            if (!f->left && !f->right)
            {
                break;
            }
            if (f->left)
                st.push(f->left);
            else if (f->right)
                st.push(f->right);
        }
    }
    while (!st.empty())
    {
        Node *f = st.top();
        st.pop();
        cout << f->val << " ";
    }

    if(root) cout << root->val << " ";
    queue<Node *> q;
    if(root->right) q.push(root->right);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();
        // 2. oi node ke niya kaj kora
        cout << f->val << " ";
        // 3. children push kora
        if (f->right)
            q.push(f->right);
        else if (f->left)
            q.push(f->left);
    }
}

int main()
{
    Node *root = input_tree();
    level_Order(root);

    return 0;
}