
---

# 🔗 STL List & Linked List Operations in C++

This repository contains **C++ programs demonstrating STL `list` operations**, as well as **custom linked list implementations** including **cycle detection** and **reversal of singly and doubly linked lists**.

The content is **beginner-friendly**, with detailed explanations and examples for each concept.

---

## 📝 Summary of Contents

| S/N | File                                        | Concept / Operation         | Description                                                                              |
| --- | ------------------------------------------- | --------------------------- | ---------------------------------------------------------------------------------------- |
| 1   | `stl_list_Constructor.cpp`                  | List Construction           | Demonstrates **all STL list constructors**: default, size, size+value, copy, range.      |
| 2   | `stl_list_Capacity.cpp`                     | List Capacity               | Shows **size, max_size, empty, resize, clear** functions for lists.                      |
| 3   | `stl_list_element_access_and_iterators.cpp` | Access & Iterators          | Explains **front(), back(), begin(), next()** to access list elements.                   |
| 4   | `stl_list_Modifiers.cpp`                    | Modifiers                   | Covers **push, pop, insert, erase, assign, replace, find** operations.                   |
| 5   | `stl_list_Operation_Functions.cpp`          | Operations                  | Shows **remove, sort, unique, reverse** for lists.                                       |
| 6   | `cycle_detect_in_linked_list.cpp`           | Cycle Detection             | Detects **loops in a singly linked list** using **Floyd’s Tortoise and Hare algorithm**. |
| 7   | `reverse_signly_linked_list.cpp`            | Singly Linked List Reversal | Reverses a **singly linked list recursively**.                                           |
| 8   | `reverse_doubly_linked_list.cpp`            | Doubly Linked List Reversal | Reverses a **doubly linked list by swapping node values**.                               |

---

## 1️⃣ STL List Basics (C++ `list`)

### 1.1 Constructors

```cpp
list<int> l1;            // Empty list
list<int> l2(5);         // List with 5 elements, default 0
list<int> l3(5, 10);     // List with 5 elements, each 10
list<int> l4 = {1,2,3};  // Initializer list
list<int> l5(l4);        // Copy constructor
```

> **Beginner Tip:** Think of `list` as a **doubly linked list in STL**, capable of dynamic insertion and deletion at both ends.

**Time Complexity:**

* Construction: `O(n)` if initializing with n elements
  **Space Complexity:** `O(n)`

---

### 1.2 Capacity Functions

```cpp
list<int> l = {1,2,3,4,5};
cout << l.size() << endl;    // Number of elements
cout << l.max_size() << endl; // Maximum possible elements
cout << l.empty() << endl;    // Checks if list is empty
l.resize(3);                  // Resize to 3 elements
l.clear();                     // Deletes all elements
```

---

### 1.3 Access & Iterators

```cpp
list<int> l = {10, 20, 30};
cout << l.front() << endl;          // First element
cout << l.back() << endl;           // Last element
auto it = l.begin();                
cout << *next(it,1) << endl;        // Element at index 1
```

---

### 1.4 Modifiers

```cpp
list<int> l = {10, 20, 30};
l.push_front(5);          // Add at front
l.push_back(40);          // Add at back
l.pop_front();             // Remove front
l.pop_back();              // Remove back
l.insert(next(l.begin(),1), 100); // Insert at position
l.erase(next(l.begin(),1));        // Delete at position
```

---

### 1.5 Operations

```cpp
l.remove(30);             // Delete all occurrences of 30
l.sort();                  // Sort ascending
l.sort(greater<int>());    // Sort descending
l.unique();                // Remove consecutive duplicates
l.reverse();               // Reverse the list
```

> **Note:** `std::sort()` does not work on `list` iterators. Use `l.sort()`.

---

## 2️⃣ Singly Linked List – Cycle Detection

**Algorithm:** Floyd’s Tortoise and Hare

* Uses **two pointers**: slow moves 1 step, fast moves 2 steps.
* If there’s a cycle, **slow and fast will meet**.

```cpp
Node *slow = head, *fast = head;
while(fast && fast->next){
    slow = slow->next;
    fast = fast->next->next;
    if(slow == fast){
        cout << "Cycle detected\n";
        break;
    }
}
```

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

> Beginner Tip: Imagine two runners on a circular track – if they meet, it proves the loop exists.

---

## 3️⃣ Reversing Linked Lists

### 3.1 Singly Linked List (Recursive)

```cpp
void reverse_linked_list(Node *&head, Node *&tail, Node *node){
    if(node->next == NULL){
        head = node; return;
    }
    reverse_linked_list(head, tail, node->next);
    node->next->next = node;
    node->next = NULL;
    tail = node;
}
```

**Time Complexity:** `O(n)`
**Space Complexity:** `O(n)` (due to recursion)

---

### 3.2 Doubly Linked List (Swapping Values)

```cpp
for(Node *i=head, *j=tail; i!=j && i->prev!=j; i=i->next, j=j->prev){
    swap(i->val, j->val);
}
```

**Time Complexity:** `O(n)`
**Space Complexity:** `O(1)`

---

## ✅ Key Takeaways for Beginners

* **STL `list`**: Dynamic, doubly-linked structure with easy operations.
* **Cycle detection**: Always check for loops in linked lists to avoid infinite traversals.
* **Reversal**: Singly linked lists can be reversed recursively, doubly linked lists can be reversed by swapping or re-linking.
* **Iterators**: STL list uses iterators, not index-based access like arrays.

---

## 4️⃣ Example Usage

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {1,2,3,4};
    l.push_front(0);
    l.push_back(5);
    l.remove(2);
    l.sort();
    for(auto x:l) cout<<x<<" "; // Output: 0 1 3 4 5
}
```

> This demonstrates **basic STL list usage** with insertion, deletion, sorting, and iteration.

---


# Author

**Md Monjur Bakth Mazumder**  
**Software Engineer | Lead Frontend Developer**

Software Engineer & Lead Frontend Developer at [Qrinux](https://www.qrinux.com/)  
Software Engineer & Lead Frontend Developer at [Boom Box E-Solutions](https://www.boomboxesolutions.com/)

📧 [Email me](mailto:md.monjurmbm2001@gmail.com)  
🌐 [Portfolio](https://mdmonjurbakthmazumder.netlify.app)

Passionate about building clean, maintainable, and scalable applications

### ⭐ If you find this helpful, don’t forget to **star** the repository!