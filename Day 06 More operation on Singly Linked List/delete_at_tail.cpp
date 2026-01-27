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

// Note: To truly update 'tail' in main, we should use Node *&tail
void delete_at_tail(Node *head, Node *&tail, int idx)
{
    // 1. Traverse to the node just before the tail.
    // In a standard delete_at_tail, we would walk until temp->next == tail.
    Node *tamp = head;
    for (int i = 1; i < idx; i++)
    {
        tamp = tamp->next;
    }

    // 2. Identify the node to be deleted (the current tail).
    Node *deleteNode = tamp->next;

    // 3. The Bypass
    // Set the second-to-last node's next to NULL.
    tamp->next = tamp->next->next; // Since deleteNode was the tail, this becomes NULL.

    // 4. Memory Cleanup
    delete deleteNode;

    // 5. Update the Tail pointer
    // This is vital! 'tail' must now point to the new last node (tamp).
    tail = tamp;
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

    // Assuming we know the index of the second-to-last node
    delete_at_tail(head, tail, 2);
    print_linked_list(head);
    return 0;
}