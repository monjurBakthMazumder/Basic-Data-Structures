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

// Function to insert at a specific index
// Node *&head: We use a reference to the head pointer just in case we need to modify the actual head
void insert_at_any_position(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    // 1. Move 'temp' to the node JUST BEFORE the target index.
    // If we want to insert at index 2, we stop at index 1.
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    // 2. The "Handshake" process:
    // First, connect the new node to the rest of the list.
    newNode->next = temp->next;
    
    // 3. Then, connect the previous node (temp) to the new node.
    temp->next = newNode;
};

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->val << " "; // Modified to print on one line for clarity
        temp = temp->next;
    }
    cout << endl;
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    // Inserting 100 at index 2 (between 10 and 20)
    insert_at_any_position(head, 2, 100);
    
    print_linked_list(head);
    return 0;
}