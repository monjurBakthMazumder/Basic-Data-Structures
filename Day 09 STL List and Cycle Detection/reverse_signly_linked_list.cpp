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
void reverse_linked_list(Node *&head, Node *&tail, Node *tamp)
{
    if (tamp->next == NULL)
    {
        head = tamp;
        return;
    }
    reverse_linked_list(head, tail, tamp->next);
    // code
    tamp->next->next = tamp;
    tamp->next = NULL;
    tail = tamp;
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

    reverse_linked_list(head, tail, head);
    print_linked_list(head);

    cout << "Head " << head->val << endl;
    cout << "Tail " << tail->val << endl;
    return 0;
}