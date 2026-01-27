// Problem Link: https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-08/challenges/get-difference

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

void min_val(Node *head, Node *&min)
{
    Node *i = head;
    while (true)
    {
        if (i->val < min->val)
        {
            min = i;
        }
        if (i->next == NULL)
        {
            break;
        }
        i = i->next;
    }
}
void max_val(Node *head, Node *&max)
{
    Node *i = head;
    while (true)
    {
        if (i->val > max->val)
        {
            max = i;
        }
        if (i->next == NULL)
        {
            break;
        }
        i = i->next;
    }
}

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

    Node *min = head;
    Node *max = head;

    min_val(head, min);
    max_val(head, max);
    cout << max->val - min->val << endl;
    return 0;
}