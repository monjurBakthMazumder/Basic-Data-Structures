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
int main()
{

    Node *head = new Node(10);
    Node *a = new Node(10);
    Node *b = new Node(10);
    Node *c = new Node(10);
    Node *d = new Node(10);
    Node *e = new Node(10);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = head;

    Node *slow = head;
    Node *fast = head;

    int flag = 0;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            // cycle detected
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "Cycle detected";
    }
    else
    {
        cout << "No Cycle";
    }

    return 0;
}