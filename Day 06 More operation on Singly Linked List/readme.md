
# 🔗 More Operations on Singly Linked List in C++

This repository demonstrates **advanced operations** on a **Singly Linked List** in C++, including:

* Deletion at any position, head, or tail
* Input and traversal
* Reverse printing
* Sorting

All operations include **clear, beginner-friendly explanations**.

---

## 📁 Repository Structure

```text
1. linked_list_input.cpp
2. delete_at_head.cpp
3. delete_at_tail.cpp
4. delete_at_any_position.cpp
5. linked_list_reverse_printing.cpp
6. sort_linked_list.cpp
```

---

## 1️⃣ Input Linked List (Optimized Tail Insertion)

📄 **File:** `linked_list_input.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

// Tail insertion in O(1)
void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (!head) {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// Print linked list
void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main() {
    Node *head = NULL, *tail = NULL;
    int val;

    cout << "Enter numbers (-1 to end):\n";
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    cout << "Linked List:\n";
    print_linked_list(head);
    return 0;
}
```

**Explanation:**

* Uses **tail pointer** for O(1) insertions at end
* Keeps input dynamic
* Stops input on `-1`

---

## 2️⃣ Delete at Head

📄 **File:** `delete_at_head.cpp`

```cpp
// Deletes the first node (head)
void delete_at_head(Node *&head) {
    if (!head) return;        // Empty list
    Node *deleteNode = head;  // Save head
    head = head->next;        // Move head
    delete deleteNode;        // Free memory
}
```

**Usage:**

* Removes the first node
* Updates the **head pointer**
* **Time Complexity:** O(1)

---

## 3️⃣ Delete at Tail

📄 **File:** `delete_at_tail.cpp`

```cpp
void delete_at_tail(Node *head, Node *&tail, int idx) {
    Node *temp = head;
    for (int i = 1; i < idx; i++) temp = temp->next; // Traverse to second-last
    Node *deleteNode = temp->next;   // Node to delete
    temp->next = nullptr;            // Disconnect
    delete deleteNode;               // Free memory
    tail = temp;                     // Update tail
}
```

**Explanation:**

* Traverse to **second-to-last node**
* Disconnect last node
* Update **tail pointer**
* **Time Complexity:** O(N)

---

## 4️⃣ Delete at Any Position

📄 **File:** `delete_at_any_position.cpp`

```cpp
void delete_at_any_position(Node *head, int idx) {
    Node *temp = head;
    for (int i = 1; i < idx; i++) temp = temp->next; // Move to node before target
    Node *deleteNode = temp->next;   // Node to delete
    temp->next = temp->next->next;   // Bypass node
    delete deleteNode;               // Free memory
}
```

**Explanation:**

* Identify **node before target**
* Bypass the **target node**
* Delete to avoid memory leak
* **Time Complexity:** O(N)

---

## 5️⃣ Reverse Printing (Recursive)

📄 **File:** `linked_list_reverse_printing.cpp`

```cpp
void print_reverse(Node *node) {
    if (!node) return;          // Base case
    print_reverse(node->next);  // Recurse to next
    cout << node->val << endl;  // Print after recursion
}
```

**Explanation:**

* Uses **recursion**
* Prints **last node first**
* **Head is preserved**, only prints in reverse
* **Time Complexity:** O(N)

---

## 6️⃣ Sort Linked List (By Value)

📄 **File:** `sort_linked_list.cpp`

```cpp
void sort_linked_list(Node *head) {
    for (Node *i = head; i->next != NULL; i = i->next) {
        for (Node *j = i->next; j != NULL; j = j->next) {
            if (i->val > j->val) swap(i->val, j->val); // Swap data
        }
    }
}
```

**Explanation:**

* Compares **each node with all subsequent nodes**
* Swaps **data values**, not node pointers
* Simple **bubble-sort-like approach**
* **Time Complexity:** O(N²)

---

## ⚙️ How to Compile and Run

```bash
g++ linked_list_input.cpp -o linked_list_input && ./linked_list_input
g++ delete_at_head.cpp -o delete_at_head && ./delete_at_head
g++ delete_at_tail.cpp -o delete_at_tail && ./delete_at_tail
g++ delete_at_any_position.cpp -o delete_at_any_position && ./delete_at_any_position
g++ linked_list_reverse_printing.cpp -o reverse_print && ./reverse_print
g++ sort_linked_list.cpp -o sort_linked_list && ./sort_linked_list
```

---

## ✅ Summary of Operations

| Operation              | Description                                  | Time Complexity |
| ---------------------- | -------------------------------------------- | --------------- |
| Delete at Head         | Remove first node                            | O(1)            |
| Delete at Tail         | Remove last node                             | O(N)            |
| Delete at Any Position | Remove any specific node                     | O(N)            |
| Input Linked List      | Take dynamic input using tail pointer        | O(1) per insert |
| Reverse Printing       | Print linked list in reverse using recursion | O(N)            |
| Sort Linked List       | Sort nodes by value                          | O(N²)           |

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
