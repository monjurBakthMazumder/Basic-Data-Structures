#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;    // The data we want to store
    Node *next; // A pointer to store the ADDRESS of the next node

    // CONSTRUCTOR: This runs automatically when we create a Node
    Node(int val)
    {
        this->val = val;     // Set the cargo
        this->next = NULL;   // By default, it's not connected to anything (NULL)
    }
};

int main()
{
    // 1. Creating 3 separate "train cars"
    Node a(10), b(20), c(30);

    // 2. Linking them together
    // a's 'next' pointer now stores the memory address of 'b'
    a.next = &b;
    // b's 'next' pointer now stores the memory address of 'c'
    b.next = &c;

    // 3. Printing values and addresses
    cout << a.val << " " << b.val << " " << c.val << endl;
    cout << a.next << " " << b.next << " " << c.next << endl;

    cout << endl;

    // 4. THE POWER OF LINKING (Dereferencing)
    cout << a.val << endl;           // Value of a
    cout << a.next->val << endl;     // Go to the address in a.next (which is b) and get its value
    cout << a.next->next->val << endl; // Go from a -> b -> c and get c's value

    return 0;
}