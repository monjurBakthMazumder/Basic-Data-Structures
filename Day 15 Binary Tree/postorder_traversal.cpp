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

// Post-order Function: Left -> Right -> Root
void postOrder(Node *root)
{
    // 1. Base Case: If we hit a dead end, go back
    if (root == NULL)
    {
        return;
    }

    // 2. Visit the entire LEFT side first
    postOrder(root->left);

    // 3. Then visit the entire RIGHT side
    postOrder(root->right);

    // 4. Finally, visit the Root (print its value)
    // This only happens after Left and Right are finished!
    cout << root->val << " ";
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

    // Run the traversal
    postOrder(root);

    return 0;
}