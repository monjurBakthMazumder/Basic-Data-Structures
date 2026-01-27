#include <bits/stdc++.h>
using namespace std;

// 1. Define the blueprint for a Node
class Node
{
public:
    int val;    // To store the integer data
    Node *next; // A pointer to store the address of another Node
};

int main()
{
    // 2. Create three separate Node objects (on the Stack)
    Node a, b, c;
    
    // 3. Manually assign values to each node
    a.val = 10;
    b.val = 20;
    c.val = 30;

    // 4. Manual Linking: 
    // We store the 'address' of the next node in the 'next' pointer
    a.next = &b;    // a points to b
    b.next = &c;    // b points to c
    c.next = NULL;  // c points to nothing (End of the list)

    // 5. Viewing the "Hooks":
    // a.next will show a memory address (e.g., 0x61ff08)
    cout << a.val << " " << b.val << " " << c.val << endl;
    cout << a.next << " " << b.next << " " << c.next << endl;

    cout << endl;

    // 6. Accessing Data via Pointers:
    cout << a.val << endl; // Direct access

    // (*a.next).val is the "Old School" way:
    // 1. *a.next -> "Go to the address stored in a.next" (which is node b)
    // 2. .val -> "Get the value from that node"
    cout << (*a.next).val << endl; 

    // a.next->val is the "Modern Shortcut":
    // The arrow (->) does the dereferencing and member access in one step.
    cout << a.next->val << endl; 

    cout << endl;

    // 7. Long Distance Linking (Chaining):
    // Accessing 'c' starting from 'a'
    cout << (*(*a.next).next).val << endl; // Traditional way
    cout << a.next->next->val << endl;     // Cleaner arrow way

    return 0;
}