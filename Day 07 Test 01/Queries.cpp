// Problem Link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-08/challenges/queries-6-1

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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
};

void delete_at_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

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
    int idx = 0;
    int t;
    cin >> t;
    while (t--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
            print_linked_list(head);
            idx++;
            cout << endl;
        }
        if (x == 1)
        {
            insert_at_tail(head, tail, v);
            print_linked_list(head);
            idx++;
            cout << endl;
        }
        if (x == 2)
        {
            if (v < idx)
            {
                if (v == 0)
                {
                    delete_at_head(head);
                }
                else if (v == idx - 1)
                {
                    delete_at_tail(head, tail, v);
                }
                else
                {
                    delete_at_any_position(head, v);
                }
                idx--;
            }
            print_linked_list(head);
            cout << endl;
        }
    }

    return 0;
}