

# 🔗 Singly Linked List in C++

A **Singly Linked List** is a fundamental data structure where each **node** contains:

* **Data** (the value you want to store)
* **Pointer** (address of the next node in the sequence)

Unlike arrays, linked lists allow **dynamic memory allocation** and **efficient insertion/deletion** at any position.

This repository teaches **linked lists from scratch**, starting from node creation to traversal.

---

## 📌 What You Will Learn

1. How to **create nodes** in C++
2. How to **link nodes manually and dynamically**
3. How to **traverse and print a linked list**
4. Using **constructors and pointers** effectively
5. Difference between **stack allocation** and **heap allocation**

---

## 📁 Repository Structure

```text
├── creating_a_node.cpp
├── creating_a_node_constructor.cpp
├── dynamic_node.cpp
└── printing_linked_list.cpp
```

---

## 1️⃣ Creating a Node (Manual / Stack Allocation)

📄 **Code:** `creating_a_node.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;    // Data
    Node *next; // Pointer to next node
};

int main() {
    Node a, b, c;

    a.val = 10; b.val = 20; c.val = 30;

    // Manual linking
    a.next = &b; 
    b.next = &c; 
    c.next = NULL; // End of list

    // Accessing values
    cout << a.val << " " << b.val << " " << c.val << endl;

    // Traversing manually
    cout << a.next->val << endl;       // 20
    cout << a.next->next->val << endl; // 30

    return 0;
}
```

**Explanation:**

* Nodes are **stack objects** (`a`, `b`, `c`)
* `next` stores the **address of the next node**
* `a.next->val` dereferences the pointer to access data

✅ **Use:** Simple, small lists for learning purposes

---

## 2️⃣ Creating a Node with a Constructor

📄 **Code:** `creating_a_node_constructor.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;

    // Constructor automatically sets value & next
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {
    Node a(10), b(20), c(30);

    // Linking nodes
    a.next = &b; 
    b.next = &c;

    // Traversal
    cout << a.val << " " << a.next->val << " " << a.next->next->val << endl;

    return 0;
}
```

**Explanation:**

* Constructor **automates initialization**
* Prevents uninitialized pointer errors
* Access values using `->` when using **pointers**

✅ **Use:** Cleaner, safer node creation

---

## 3️⃣ Dynamic Node Creation (Heap Allocation)

📄 **Code:** `dynamic_node.cpp`

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

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // Linking dynamically
    head->next = a; 
    a->next = b;

    // Traversal
    cout << head->val << " " << head->next->val << " " << head->next->next->val << endl;

    return 0;
}
```

**Explanation:**

* `new Node(10)` creates a node in **heap memory**
* `head`, `a`, `b` are **pointers to nodes**
* Use `->` operator to **access members** via pointer

✅ **Use:** Large lists, dynamic memory, flexible size

---

## 4️⃣ Traversing and Printing a Linked List

📄 **Code:** `printing_linked_list.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) { this->val = val; this->next = NULL; }
};

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a; a->next = b; b->next = c;

    Node *temp = head; // Temporary pointer for traversal
    while(temp) {
        cout << temp->val << endl;
        temp = temp->next; // Move to next node
    }

    return 0;
}
```

**Explanation:**

* Always use a **temporary pointer** to traverse
* Do not move `head` pointer, otherwise you lose the start of the list
* `while(temp)` continues until the **end (NULL)**

✅ **Use:** Print all elements safely

---

## ⚙️ How to Compile and Run

```bash
g++ creating_a_node.cpp -o creating_a_node
./creating_a_node

g++ creating_a_node_constructor.cpp -o constructor_node
./constructor_node

g++ dynamic_node.cpp -o dynamic_node
./dynamic_node

g++ printing_linked_list.cpp -o print_list
./print_list
```

---



# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in CSE (Running) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!