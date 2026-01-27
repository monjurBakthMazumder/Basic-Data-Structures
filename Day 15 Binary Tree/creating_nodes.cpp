#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;   // Pointer to the left child
    Node *right;  // Pointer to the right child
    
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int main()
{
    // 1. Creating the individual Nodes
    Node * root = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);
    Node * e = new Node(60);

    // 2. Connecting them (The "Family Tree" logic)
    root->left = a;   // 10's left child is 20
    root->right = b;  // 10's right child is 30

    a->left = c;      // 20's left child is 40 (20's right is still NULL)

    b->left = d;      // 30's left child is 50
    b->right = e;     // 30's right child is 60

    return 0;
}