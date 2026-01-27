// Problem Link: https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-08/challenges/level-nodes-2

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

void left_to_right_of_level_node(Node *root, int n)
{
    queue<pair<Node *, int>> q;
    if (root)
    {
        q.push({root, 0});
        while (!q.empty())
        {
            pair<Node *, int> parent = q.front();
            q.pop();
            Node *node = parent.first;
            int level = parent.second;
            if (level == n)
            {
                v.push_back(node->val);
            }

            if (node->left)
                q.push({node->left, level + 1});
            if (node->right)
                q.push({node->right, level + 1});
        }
    }
}

int main()
{
    Node *root = input_tree();
    int n;
    cin >> n;
    left_to_right_of_level_node(root, n);
    if (v.empty())
    {
        cout << "Invalid";
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}