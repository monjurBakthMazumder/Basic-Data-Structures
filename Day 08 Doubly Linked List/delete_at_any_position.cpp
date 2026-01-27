#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};

void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

void delete_at_any_position(Node *head, int idx)
{
    Node *temp = head;

    // 1. Walk to the node right BEFORE the one we want to delete
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    // 2. Identify the node to be removed
    Node *deleteNode = temp->next;

    // 3. The Double Bypass
    // Link the 'next' of current node to the node AFTER the deleted one
    temp->next = temp->next->next; 

    // Link the 'prev' of the node AFTER the deleted one back to current node
    // This completes the two-way bridge!
    if (temp->next != NULL) {
        temp->next->prev = temp;
    }

    // 4. Free memory
    delete deleteNode;
}
int main()
{
    // Setup: 10 <-> 20 <-> 30
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    // Deleting index 1 (the node with value 20)
    delete_at_any_position(head, 1);

    print_forward(head);   // Output: 10 30
    cout << endl;
    print_backward(tail);  // Output: 30 10
    return 0;
}