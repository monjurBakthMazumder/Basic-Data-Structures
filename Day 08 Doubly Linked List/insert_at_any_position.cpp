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

void insert_at_any_position(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;

    // 1. Traverse to the node JUST BEFORE the target index
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    // 2. The Four-Way Connection
    // Step A: New Node points forward to the original 'next' node
    newNode->next = temp->next;
    
    // Step B: New Node points backward to 'temp'
    newNode->prev = temp;

    // Step C: The node originally ahead of temp now points its 'prev' to New Node
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    
    // Step D: 'temp' points its 'next' to New Node
    temp->next = newNode;
}

int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;

    a->prev = head;
    a->next = tail;

    tail->prev = a;

    insert_at_any_position(head, 2, 100);
    insert_at_any_position(head, 1, 200);

    print_forward(head);
    cout << endl;
    print_backward(tail);
    return 0;
}