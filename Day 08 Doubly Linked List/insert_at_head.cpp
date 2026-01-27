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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    // 1. Edge Case: Empty List
    // If the list is empty, the new node is both the head and the tail.
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // 2. Forward Link
    // New node's next points to the current head.
    newNode->next = head;

    // 3. Backward Link (The crucial step for Doubly Linked Lists)
    // The current head's prev must point back to our new node.
    head->prev = newNode;

    // 4. Update the Head
    // Move the 'head' pointer to our new node.
    head = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *tail = new Node(30);

    // head->next = a;

    // a->prev = head;
    // a->next = tail;

    // tail->prev = a;

    insert_at_head(head, tail, 100);
    insert_at_head(head, tail, 200);

    print_forward(head);
    cout << endl;
    print_backward(tail);
    return 0;
}