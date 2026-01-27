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

// 1. Optimized Insertion: Using both Head and Tail
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    // 2. Case: The list is empty
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // 3. The Optimized Step:
    // Instead of looping through the whole list with 'temp',
    // we use the 'tail' pointer to jump directly to the end!
    tail->next = newNode; // Connect the current last node to the new one
    tail = newNode;       // Update the tail to be the new last node
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
    // 4. Initialization
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->next = tail;

    // These insertions now take O(1) time instead of O(N)
    insert_at_tail(head, tail, 100);
    insert_at_tail(head, tail, 200);
    
    print_linked_list(head);
    return 0;
}