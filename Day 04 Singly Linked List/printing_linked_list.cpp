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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    // 1. Why use 'temp'?
    // 'head' is the most important pointer. If we move 'head', 
    // we lose the start of our list forever! 
    // We create a 'temp' (temporary) pointer to do the walking for us.
    Node *temp = head;

    // 2. The Traversal Loop
    // 'while (temp)' is shorthand for 'while (temp != NULL)'.
    // It keeps running as long as 'temp' is pointing to a real node.
    while (temp)
    {
        cout << temp->val << endl; // Print the current node's value
        
        // Move to the next node:
        // temp now stores the address of the next node in the chain.
        temp = temp->next; 
    }

    // 3. Re-traversing
    // Once the first loop finishes, 'temp' is NULL. 
    // To print the list again, we just reset a new pointer to 'head'.
    Node *temp2 = head;
    while (temp2)
    {
        cout << temp2->val << endl;
        temp2 = temp2->next;
    }

    return 0;
}