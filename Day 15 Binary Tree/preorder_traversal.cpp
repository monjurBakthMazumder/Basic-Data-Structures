#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Pre-order Function: Root -> Left -> Right
void preOrder(Node *root)
{
    // 1. Base Case: If the node doesn't exist, stop.
    if (root == NULL)
    {
        return;
    }

    // 2. Visit the ROOT first
    // We print the value as soon as we arrive at the node.
    cout << root->val << " "; 

    // 3. Then go deep into the LEFT subtree
    preOrder(root->left);

    // 4. Finally, go deep into the RIGHT subtree
    preOrder(root->right);
}

int main()
{
    // Creating the tree structure
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

    // Output will show the "discovery" order
    preOrder(root);

    return 0;
}