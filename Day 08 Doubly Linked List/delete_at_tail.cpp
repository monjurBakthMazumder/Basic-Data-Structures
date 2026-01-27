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

void delete_at_tail(Node *&head, Node *&tail)
{
    // 1. Save the current tail
    // We need to keep the address of the last node so we can delete it later.
    Node *deleteNode = tail;

    // 2. Step Backward
    // The tail pointer moves back to the node that was just before it.
    tail = tail->prev;

    // 3. Free the memory
    // Physically remove the old tail node from the Heap.
    delete deleteNode;

    // 4. Handle Edge Cases
    // Case A: If the list is now empty, the head must also be NULL.
    if (tail == NULL)
    {
        head = NULL;
        return;
    }

    // Case B: Update the new tail
    // The new last node should not point to anything in front of it.
    tail->next = NULL;
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

    // Deleting the node with value 30
    delete_at_tail(head, tail);

    print_forward(head);  // Output: 10 20
    cout << endl;
    print_backward(tail); // Output: 20 10
    return 0;
}