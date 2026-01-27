#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    // 1. Dynamic Allocation using 'new'
    // 'head' is not a Node; it is a POINTER that stores the address of a Node.
    // 'new Node(10)' creates the node in the Heap and returns its address.
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // 2. Linking the pointers
    // Since 'head' and 'a' are already pointers, we don't need the '&' symbol.
    // We just pass the address stored in 'a' into the 'next' of 'head'.
    head->next = a;
    a->next = b;

    // 3. Accessing values
    // Because we are working with pointers, we ALWAYS use the arrow (->) operator.
    cout << head->val << endl;         // 10
    cout << head->next->val << endl;   // Go to 'a', print 20
    cout << head->next->next->val << endl; // Go to 'a', then 'b', print 30

    return 0;
}