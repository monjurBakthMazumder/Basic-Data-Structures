#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Syntax: priority_queue<Type, Container, Comparator>
    // 1. int: The data type stored.
    // 2. vector<int>: The underlying container used to store the elements.
    // 3. greater<int>: The comparator that ensures the smallest element stays at the top.
    priority_queue<int, vector<int>, greater<int>> pq;

    // Adding elements to the queue. 
    // Internally, these are arranged in a "Min-Heap" structure.
    pq.push(10);
    pq.push(20);
    pq.push(5);  // This is the smallest, so it moves to the top.
    pq.push(50);

    // .top() returns the element at the front (the smallest value).
    // Output: 5
    cout << "Top element: " << pq.top() << endl;

    // .pop() removes the top element (5).
    // The queue then "re-heaps" to find the new smallest value.
    pq.pop();

    // Now 10 is the smallest remaining value.
    // Output: 10
    cout << "New top element after pop: " << pq.top() << endl;

    // .empty() returns a boolean (1 for true, 0 for false).
    // Output: 0 (since the queue still has 10, 20, and 50)
    cout << "Is it empty? " << pq.empty() << endl;

    // .size() returns the number of elements currently in the queue.
    // Output: 3
    cout << "Current size: " << pq.size() << endl;

    return 0;
}