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

void delete_at_any_position(Node *head, int idx)
{
    // 1. Move a temporary pointer to the node JUST BEFORE the target.
    // To delete index 2, we stop at index 1.
    Node *tamp = head;
    for (int i = 1; i < idx; i++)
    {
        tamp = tamp->next;
    }

    // 2. Identify the "Victim" node
    // This is the node we want to get rid of.
    Node *deleteNode = tamp->next;

    // 3. The Bypass (The most important step!)
    // We tell the previous node (tamp) to skip the deleteNode 
    // and point to the node that comes AFTER it.
    tamp->next = tamp->next->next;

    // 4. Clean up the memory
    // Since this node was created with 'new', it stays in the Heap.
    // We must manually delete it to prevent "Memory Leaks."
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

   // Input loop: keeps adding to tail until -1 is entered
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    // Example: Deleting the node at index 2
    delete_at_any_position(head, 2);
    print_linked_list(head);
    return 0;
}