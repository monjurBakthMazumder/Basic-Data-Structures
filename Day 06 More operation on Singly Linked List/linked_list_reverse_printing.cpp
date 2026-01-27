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
// RECURSIVE FUNCTION to print in reverse
void print_reverse(Node *tamp)
{
    // 1. Base Case: If we reach the end of the list, stop going deeper.
    if (tamp == NULL)
    {
        return;
    }

    // 2. Recursive Call: "Wait here, I need to check the next node first!"
    // The function pauses here for the current node and calls itself for the next.
    print_reverse(tamp->next);

    // 3. The Print: This line only executes AFTER the recursive call above finishes.
    // This means the last node in the list will be the first one to print.
    cout << tamp->val << endl;
};

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

    // Call the recursive function starting from the head
    print_reverse(head);
    return 0;
}