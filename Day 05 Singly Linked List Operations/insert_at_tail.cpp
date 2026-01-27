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

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    // 1. Edge Case: Empty List
    // If there's no train yet, the new node becomes the head.
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    // 2. The Search: Finding the last car
    Node *temp = head;
    // We look for the node whose 'next' is NULL.
    // That is the current "caboose" of the train.
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // 3. The Connection
    // Now that 'temp' is at the very last node, 
    // we hook the new node onto it.
    temp->next = newNode;
};

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
};

int main()
{
    // We start with an empty head (NULL)
    Node *head = NULL;

    // Each call will walk from the start to the current end
    insert_at_tail(head, 100); // head becomes 100
    insert_at_tail(head, 200); // walks to 100, adds 200
    insert_at_tail(head, 300); // walks 100 -> 200, adds 300
    
    print_linked_list(head);
    return 0;
}