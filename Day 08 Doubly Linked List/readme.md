# 🔗 Doubly Linked List in C++

A **Doubly Linked List (DLL)** is a data structure where each node contains:

- `val` → the value of the node
- `next` → pointer to the next node
- `prev` → pointer to the previous node

DLL allows **traversal in both directions** (forward and backward), making insertion and deletion operations more flexible than singly linked lists.

---

## 📦 Node Structure

```cpp
class Node
{
public:
    int val;
    Node *prev; // Pointer to previous node
    Node *next; // Pointer to next node

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
```

---

## 1️⃣ Insert Operations

### **1.1 Insert at Head**

Adds a new node at the **beginning** of the list.

```cpp
void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL) { head = tail = newNode; return; }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
```

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

---

### **1.2 Insert at Tail**

Adds a new node at the **end** of the list.

```cpp
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL) { head = tail = newNode; return; }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
```

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

---

### **1.3 Insert at Any Position**

Inserts a node at a **specific index** (1-based index).

```cpp
void insert_at_any_position(Node *&head, int idx, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < idx; i++) temp = temp->next;

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL) temp->next->prev = newNode;
    temp->next = newNode;
}
```

- **Time Complexity:** O(n) (depends on index)
- **Space Complexity:** O(1)

---

## 2️⃣ Delete Operations

### **2.1 Delete at Head**

Removes the **first node** of the list.

```cpp
void delete_at_head(Node *&head, Node *&tail)
{
    if (head == NULL) return;
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    if (head == NULL) tail = NULL;
    else head->prev = NULL;
}
```

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

---

### **2.2 Delete at Tail**

Removes the **last node** of the list.

```cpp
void delete_at_tail(Node *&head, Node *&tail)
{
    if (tail == NULL) return;
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;

    if (tail == NULL) head = NULL;
    else tail->next = NULL;
}
```

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

---

### **2.3 Delete at Any Position**

Removes a node at a **specific index** (1-based index).

```cpp
void delete_at_any_position(Node *head, int idx)
{
    Node *temp = head;
    for (int i = 1; i < idx; i++) temp = temp->next;

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    if (temp->next != NULL) temp->next->prev = temp;

    delete deleteNode;
}
```

- **Time Complexity:** O(n) (depends on index)
- **Space Complexity:** O(1)

---

## 3️⃣ Print Operations

### **3.1 Print Forward**

Traverses from **head → tail**.

```cpp
void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
```

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

### **3.2 Print Backward**

Traverses from **tail → head**.

```cpp
void print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
```

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

---

## 4️⃣ Full Example

```cpp
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Insert nodes
    insert_at_head(head, tail, 200);
    insert_at_tail(head, tail, 300);
    insert_at_any_position(head, 1, 100);

    // Print list
    print_forward(head);   // Output: 100 200 300
    print_backward(tail);  // Output: 300 200 100

    // Delete nodes
    delete_at_head(head, tail);
    delete_at_tail(head, tail);
    delete_at_any_position(head, 1);

    // Final list
    print_forward(head);   // Output: (empty)
    print_backward(tail);  // Output: (empty)

    return 0;
}
```

---

## ✅ Summary

- Doubly Linked Lists allow **forward and backward traversal**.
- Insertion and deletion at **head/tail** are **O(1)** operations.
- Insertion and deletion at **any position** are **O(n)** operations.
- Doubly Linked Lists are more **flexible than singly linked lists**, especially for **bidirectional operations**.

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
