// Problem Link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-08/challenges/remove-duplicate-9-1

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

void delete_at_any_position(Node *head, int idx)
{
    Node *tamp = head;
    for (int i = 1; i < idx; i++)
    {
        tamp = tamp->next;
    }
    Node *deleteNode = tamp->next;
    tamp->next = tamp->next->next;
    delete deleteNode;
}

void delete_at_tail(Node *head, Node *&tail, int idx)
{
    Node *tamp = head;
    for (int i = 1; i < idx; i++)
    {
        tamp = tamp->next;
    }
    Node *deleteNode = tamp->next;
    tamp->next = tamp->next->next;
    delete deleteNode;
    tail = tamp;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
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

    int a = 0;

    for (Node *i = head; i != NULL; )
    {
        int b = a + 1;
        for (Node *j = i->next; j != NULL;)
        {
            if (i->val == j->val)
            {
                j = j->next;
                delete_at_any_position(head, b);
            }
            else
            {
                j = j->next;
                b++;
            }
        }
        a++;
        i = i->next;
    }
    print_linked_list(head);

    return 0;
}