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

// We use Optimized Tail Insertion to keep the input speed at O(1) per element
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

int main()
{
    // Start with a totally empty list
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    // 1. THE INPUT LOOP
    // This keeps running until the user types -1
    while (true)
    {
        cin >> val;
        if (val == -1) 
        {
            break; // Stop taking input
        }
        // 2. Add each new number to the end of the train
        insert_at_tail(head, tail, val);
    }

    // 3. Display the final result
    print_linked_list(head);

    return 0;
}