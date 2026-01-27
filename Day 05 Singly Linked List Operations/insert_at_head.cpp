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

// 1. Passing the pointer by REFERENCE (Node *&head)
// The '&' is crucial! It allows the function to change the actual 
// 'head' variable in the main function, rather than just a copy of it.
void insert_at_head(Node *&head, int val)
{
    // 2. Create the new node
    Node *newNode = new Node(val);

    // 3. Link the NEW node to the OLD head
    // newNode's 'next' now points to the address currently stored in 'head'.
    newNode->next = head;

    // 4. Update the head
    // The 'head' pointer is now updated to point to our NEW node.
    head = newNode;
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
    // Initial list: 10 -> 20 -> 30
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    // Each of these will become the NEW first element
    insert_at_head(head, 100);
    insert_at_head(head, 200);
    
    print_linked_list(head); 
    // Output will be: 200 100 10 20 30
    return 0;
}