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

    // 1. Handle the Root
    if (val == -1)
        root = NULL; // -1 means no node
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root); // Put the root in the "Waiting List"

    while (!q.empty())
    {
        // 2. Take the next node from the queue to find its children
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r; // Input values for Left and Right children

        Node *myLeft, *myRight;

        // 3. Create Left Child
        if (l == -1)
            myLeft = NULL;
        else
        {
            myLeft = new Node(l);
            q.push(myLeft); // Add to waiting list to find ITS children later
        }

        // 4. Create Right Child
        if (r == -1)
            myRight = NULL;
        else
        {
            myRight = new Node(r);
            q.push(myRight); // Add to waiting list
        }

        // 5. Connect children to the current parent (p)
        p->left = myLeft;
        p->right = myRight;
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
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();
        // 2. oi node ke niya kaj kora
        cout << f->val << " ";
        // 3. children push kora
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

void insert(Node *&root, int val)
{
    if (!root)
    {
        root = new Node(val);
    }
    if (root->val > val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(val);
        }
        else
        {
            insert(root->left, val);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(val);
        }
        else
        {
            insert(root->right, val);
        }
    }
}

int main()
{

    Node *root = input_tree();
    int val;
    cin >> val;
    level_Order(root);
    cout << endl;
    insert(root, val);
    level_Order(root);

    return 0;
}