#include <bits/stdc++.h>
using namespace std;

int main()
{
    // By default, priority_queue<int> is a Max-Heap.
    // It uses a vector internally and the 'less<int>' comparator.
    priority_queue<int> pq;

    // INSERTION: O(log N)
    // The heap property ensures the largest element moves to the root.
    pq.push(10);
    pq.push(20);
    pq.push(5);
    pq.push(50); // This is the largest, so it becomes the 'top'.

    // .top() returns the largest element.
    // Output: 50
    cout << "Top element (Max): " << pq.top() << endl;

    // .pop() removes the current top (50). O(log N)
    // The structure then promotes the next largest value to the top.
    pq.pop();

    // Now 20 is the largest remaining value.
    // Output: 20
    cout << "New top after pop: " << pq.top() << endl;

    // .empty() returns 1 (true) if empty, 0 (false) if not.
    // Output: 0
    cout << "Is empty? " << pq.empty() << endl;

    // .size() returns the count of elements.
    // Output: 3
    cout << "Current size: " << pq.size() << endl;

    return 0;
}