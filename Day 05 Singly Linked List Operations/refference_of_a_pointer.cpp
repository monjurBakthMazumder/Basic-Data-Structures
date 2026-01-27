#include <bits/stdc++.h>
using namespace std;

// 1. The Reference Parameter (int *&p)
// This means "p" is NOT a copy. It is an alias (a nickname) 
// for the actual pointer variable passed from the main function.
void fun(int *&p)
{
    // Because p is a reference, changing p here 
    // actually changes the pointer in main().
    p = NULL; 
}

int main()
{
    int x = 10;
    int *p = &x; // p stores the address of x
    
    // 2. Before calling the function
    // Prints the memory address of x (e.g., 0x61ff08)
    cout << p << endl; 

    fun(p);

    // 3. After calling the function
    // Because of the '&' in the function, p is now 0 (NULL).
    // If we hadn't used '&', p would still show the address of x!
    cout << p << endl; 

    return 0;
}