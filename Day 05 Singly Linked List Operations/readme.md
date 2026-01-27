

# 🔗 Singly Linked List Operations in C++

A **Singly Linked List** is a linear data structure in which each node contains:

1. **Data** (the value stored)
2. **Pointer to the next node**

Unlike arrays, linked lists **do not require contiguous memory** and can grow dynamically.

This repository contains **essential operations** on singly linked lists with **full, beginner-friendly explanations**.

---

## 📁 Repository Structure

```text
1. insert_at_head.cpp
2. insert_at_tail.cpp
3. insert_at_tail_optimized.cpp
4. insert_at_any_position.cpp
5. refference_of_a_pointer.cpp
```

---

## 1️⃣ Insert at Head

📄 **File:** `insert_at_head.cpp`

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

// Function to insert at head
void insert_at_head(Node *&head, int val) {
    Node *newNode = new Node(val); // 1. Create a new node
    newNode->next = head;          // 2. Point new node to current head
    head = newNode;                // 3. Update head to new node
}

// Function to print the linked list
void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_head(head, 100); // Insert 100 at head
    insert_at_head(head, 200); // Insert 200 at head

    print_linked_list(head); // Output: 200 100 10 20 30
    return 0;
}
```

**Explanation:**

* Always create a **new node** before inserting
* Update the **next pointer** of the new node to point to the current head
* Change the **head pointer** to the new node
* **Time Complexity:** O(1)

---

## 2️⃣ Insert at Tail (Regular)

📄 **File:** `insert_at_tail.cpp`

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

// Function to insert at tail
void insert_at_tail(Node *&head, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) { // If list is empty
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) { // Traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode; // Connect new node at the end
}

// Function to print the linked list
void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = NULL;

    insert_at_tail(head, 100);
    insert_at_tail(head, 200);
    insert_at_tail(head, 300);

    print_linked_list(head); // Output: 100 200 300
    return 0;
}
```

**Explanation:**

* Traverse to the **last node**
* Connect the new node
* **Time Complexity:** O(N) – slower for large lists

---

## 3️⃣ Insert at Tail (Optimized)

📄 **File:** `insert_at_tail_optimized.cpp`

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

// Optimized function using head and tail pointers
void insert_at_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) { // If list is empty
        head = tail = newNode;
        return;
    }
    tail->next = newNode; // Directly connect at tail
    tail = newNode;       // Update tail
}

// Function to print the linked list
void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->next = tail;

    insert_at_tail(head, tail, 100);
    insert_at_tail(head, tail, 200);

    print_linked_list(head); // Output: 10 20 30 100 200
    return 0;
}
```

**Explanation:**

* Maintain **both head and tail pointers**
* Direct insertion at **O(1) time**
* Great for dynamic lists with frequent tail insertions

---

## 4️⃣ Insert at Any Position

📄 **File:** `insert_at_any_position.cpp`

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

void insert_at_any_position(Node *&head, int idx, int val) {
    Node *newNode = new Node(val);
    Node *temp = head;

    for (int i = 1; i < idx; i++) {
        temp = temp->next; // Move to node before target
    }

    newNode->next = temp->next; // Connect new node to next node
    temp->next = newNode;       // Connect previous node to new node
}

void print_linked_list(Node *head) {
    Node *temp = head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any_position(head, 2, 100); // Insert 100 at index 2

    print_linked_list(head); // Output: 10 100 20 30
    return 0;
}
```

**Explanation:**

* Move to the node **just before the target index**
* Perform the **“handshake”** to insert
* Works for **any position except head**

---

## 5️⃣ Reference of a Pointer

📄 **File:** `refference_of_a_pointer.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

void fun(int *&p) { // Reference to pointer
    p = NULL; // Changes the original pointer
}

int main() {
    int x = 10;
    int *p = &x;

    cout << p << endl; // Address of x
    fun(p);
    cout << p << endl; // NULL

    return 0;
}
```

**Explanation:**

* `int *&p` is a **reference to pointer**
* Modifying `p` inside the function affects the **original pointer**
* Essential for **head/tail modification** in linked list functions

---

## ⚙️ How to Compile and Run

```bash
g++ insert_at_head.cpp -o insert_at_head && ./insert_at_head
g++ insert_at_tail.cpp -o insert_at_tail && ./insert_at_tail
g++ insert_at_tail_optimized.cpp -o insert_at_tail_optimized && ./insert_at_tail_optimized
g++ insert_at_any_position.cpp -o insert_at_any_position && ./insert_at_any_position
g++ refference_of_a_pointer.cpp -o pointer_reference && ./pointer_reference
```

---

## ✅ Summary

| Operation                | Time Complexity | Notes                                     |
| ------------------------ | --------------- | ----------------------------------------- |
| Insert at Head           | O(1)            | Always fast                               |
| Insert at Tail           | O(N)            | Slower for large lists                    |
| Insert at Tail Optimized | O(1)            | Use tail pointer for efficiency           |
| Insert at Any Position   | O(N)            | Except head, works anywhere               |
| Pointer Reference        | O(1)            | Modifies original pointer inside function |

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
