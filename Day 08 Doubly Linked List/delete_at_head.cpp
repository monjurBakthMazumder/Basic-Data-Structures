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

void delete_at_head(Node *&head, Node *&tail)
{
    // 1. Save the current head
    // We store the address of the node we want to delete so we can free it later.
    Node *deleteNode = head;

    // 2. Move the Head pointer
    // The second node now becomes the new 'head'.
    head = head->next;

    // 3. Free the memory
    // Remove the old first node from the Heap.
    delete deleteNode;

    // 4. Handle Edge Cases
    // Case A: If the list is now empty, the 'tail' must also be NULL.
    if (head == NULL)
    {
        tail = NULL;
        return;
    }

    // Case B: Update the new head
    // Since this is now the FIRST node, its 'prev' MUST point to NULL.
    // If you forget this, print_backward might try to access deleted memory!
    head->prev = NULL;
}

int main()
{
    // List: 10 <-> 20 <-> 30
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    // Deleting 10
    delete_at_head(head, tail);

    print_forward(head);  // Output: 20 30
    cout << endl;
    print_backward(tail); // Output: 30 20
    return 0;
}