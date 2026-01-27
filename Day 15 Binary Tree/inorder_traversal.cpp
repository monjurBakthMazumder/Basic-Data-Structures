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

void inOrder(Node *root)
{
    // Base Case: If the node is empty, go back
    if (root == NULL)
    {
        return;
    }

    // 1. Visit the LEFT subtree completely
    inOrder(root->left); 

    // 2. Visit the ROOT (print the value)
    cout << root->val << " "; 

    // 3. Visit the RIGHT subtree
    inOrder(root->right); 
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

    inOrder(root);

    return 0;
}