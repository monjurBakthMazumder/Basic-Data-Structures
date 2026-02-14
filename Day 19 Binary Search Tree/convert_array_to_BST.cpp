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
Node *convert(int arr[], int n, int l, int r)
{
    if (l > r)
    {
        return NULL;
    }
    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);
    Node *leftRoot = convert(arr, n, l, mid - 1);
    Node *rightRoot = convert(arr, n, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Node *root = convert(arr, n, 0, n - 1);
    level_Order(root);
    return 0;
}