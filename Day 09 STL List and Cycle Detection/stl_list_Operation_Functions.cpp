#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {30, 70, 30, 40, 40, 50, 90, 30, 100, 50};

    // 1. remove(value)
    // Deletes EVERY occurrence of the value 100 from the list.
    // Unlike erase(), you don't need an iterator; just the value!
    l.remove(100);

    // 2. sort()
    // This sorts the list in ascending order (small to large).
    // IMPORTANT: You cannot use std::sort(l.begin(), l.end()) on a list.
    // You MUST use l.sort() because list iterators are not "Random Access".
    l.sort();

    // 3. sort(greater<int>())
    // Sorts the list in descending order (large to small).
    l.sort(greater<int>());

    // 4. unique()
    // Removes consecutive duplicate elements.
    // NOTE: This only works correctly if the list is SORTED first.
    // If the list is {30, 40, 30}, unique() won't do anything.
    l.sort(); 
    l.unique();

    // 5. reverse()
    // Physically flips the list. The head becomes the tail and vice-versa.
    // It reverses the pointers, not just the values.
    l.reverse();

    return 0;
}