#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev; // NEW: Points to the previous node
    Node *next; // Points to the next node
    
    Node(int val)
    {
        this->prev = NULL; // Initially, no one is behind
        this->val = val;
        this->next = NULL; // Initially, no one is ahead
    }
};
// Moving Forward: Just like a Singly Linked List
void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next; // Move to the "next" person
    }
}
// Moving Backward: The new superpower of DLL
void print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev; // Move to the "previous" person
    }
}

int main()
{
    // 1. Create three separate nodes in the Heap
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    // 2. The Forward Links (Next pointers)
    head->next = a;      // 10 -> 20
    a->next = tail;      // 20 -> 30

    // 3. The Backward Links (Prev pointers)
    // This is what makes it "Doubly" linked
    a->prev = head;      // 10 <- 20
    tail->prev = a;      // 20 <- 30

    // 4. Verification
    print_forward(head);  // Output: 10 20 30
    cout << endl;
    print_backward(tail); // Output: 30 20 10
    
    return 0;
}