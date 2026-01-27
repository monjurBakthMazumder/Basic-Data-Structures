// Problem Link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/queries-again-1

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
        this->val = val;
        prev = NULL;
        next = NULL;
    }
};
void print1(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print2(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{
    int Q;
    cin >> Q;
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    while (Q--)
    {
        int a, v;
        cin >> a >> v;
        if (a < 0 || a > sz)
        {
            cout << "Invalid" << endl;
            continue;
        }
        Node *newNode = new Node(v);
        if (a == 0)
        {
            if (!head)
            {
                head = tail = newNode;
            }
            else
            {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        }
        else if (a == sz)
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < a - 1; i++)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }
        sz++;
        print1(head);
        print2(tail);
    }
    return 0;
}
