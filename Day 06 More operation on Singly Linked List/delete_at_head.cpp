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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
};

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
};
// We use Node *&head because we want the change to reflect in main()
void delete_at_head(Node *&head)
{
    // 1. Edge Case Check
    // Always check if the list is already empty to avoid a crash!
    if (head == NULL) return;

    // 2. Save the current head
    // We need a temporary pointer to hold the address of the node 
    // we want to delete so we can free its memory later.
    Node *deleteNode = head;

    // 3. Move the head
    // Tell the 'head' pointer to now point to the second node.
    head = head->next;

    // 4. Clean up
    // Free the memory of the old head node from the Heap.
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    // This removes the very first element you entered
    delete_at_head(head);
    print_linked_list(head);
    return 0;
}