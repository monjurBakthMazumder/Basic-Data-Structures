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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    // 1. Edge Case: If the list is empty
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // 2. The Forward Link
    // The current tail's 'next' now points to our new arrival.
    tail->next = newNode;

    // 3. The Backward Link (New for Doubly Linked Lists)
    // Our new node's 'prev' points back to the current tail.
    newNode->prev = tail;

    // 4. Update the Tail
    // We officially move the 'tail' pointer to the new end of the list.
    tail = newNode;
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

    insert_at_tail(head, tail, 100);
    insert_at_tail(head, tail, 200);

    print_forward(head);
    cout << endl;
    print_backward(tail);
    return 0;
}