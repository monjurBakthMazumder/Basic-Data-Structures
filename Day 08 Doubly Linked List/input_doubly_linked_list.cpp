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
    
    // 1. Case: The list is empty
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // 2. The Forward Connection
    // The current tail's 'next' points to the new arrival
    tail->next = newNode;

    // 3. The Backward Connection (New for Doubly Linked List)
    // The new arrival's 'prev' points back to the current tail
    newNode->prev = tail;

    // 4. Update the Tail
    // The new arrival is now officially the end of the line
    tail = newNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    // Input loop: reads numbers until -1 is entered
    while (true)
    {
        cin >> val;
        if (val == -1) break;
        
        insert_at_tail(head, tail, val);
    }

    print_forward(head);
    cout << endl;
    print_backward(tail);
    
    return 0;
}