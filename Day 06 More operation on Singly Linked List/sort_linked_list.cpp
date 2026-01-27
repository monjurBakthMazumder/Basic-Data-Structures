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

void sort_linked_list(Node *head)
{
    // 1. The Outer Loop (Pointer i)
    // This pointer picks a node and compares it with everything after it.
    // We stop at i->next != NULL because there's nothing to compare the last node with yet.
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        // 2. The Inner Loop (Pointer j)
        // This pointer starts from the node right after 'i' and goes to the very end.
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            // 3. The Comparison
            // If the value at 'i' is larger than 'j', they are in the wrong order.
            if (i->val > j->val)
            {
                // We swap the DATA (values), not the physical nodes/pointers.
                swap(i->val, j->val);
            }
        }
    }
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

    sort_linked_list(head);
    print_linked_list(head);
    return 0;
}