# 🌳 Binary Search Tree (BST) in C++

This repository covers **core Binary Search Tree (BST) operations in C++**, implemented using recursion and level-order traversal.

A **Binary Search Tree** is a Binary Tree with an additional rule:

- All values in the **left subtree** are **smaller than the root**
- All values in the **right subtree** are **greater than the root**
- Both subtrees must also follow the same BST rule

Because of this property, BST allows **fast searching, insertion, and structured storage of data**.

---

## 📂 Files in This Repository

1. `convert_array_to_BST.cpp`
2. `insert_in_BST.cpp`
3. `search_in_BST.cpp`

Each file focuses on one important BST operation.

---

# 📌 Node Structure (Used in All Files)

```cpp
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
```

### Explanation

- `val` → stores data
- `left` → pointer to left child
- `right` → pointer to right child

Every node can connect to **two children**, forming a tree.

---

# 1️⃣ Convert Sorted Array to BST

File: `convert_array_to_BST.cpp`

---

## 🎯 Objective

Convert a **sorted array** into a **height-balanced BST**.

Balanced trees give better performance than skewed trees.

---

## 🧠 Idea

1. Take the **middle element** → make it root
2. Recursively:
   - Left half → left subtree
   - Right half → right subtree

This guarantees minimum height.

---

## ✅ Core Function

```cpp
Node *convert(int arr[], int n, int l, int r)
{
    if (l > r) return NULL;

    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);

    root->left = convert(arr, n, l, mid - 1);
    root->right = convert(arr, n, mid + 1, r);

    return root;
}
```

---

## 🔁 How It Works (Step-by-step)

Example array:

```
[10, 20, 30, 40, 50, 60]
```

- Mid = 30 → Root
- Left subtree = [10,20]
- Right subtree = [40,50,60]
- Recursion continues until all elements become nodes

---

## 📤 Output

Printed using **Level Order Traversal (BFS)**.

---

# 2️⃣ Insert into BST

File: `insert_in_BST.cpp`

---

## 🎯 Objective

Insert a new value while preserving BST property.

---

## 🧠 Logic

1. If root is NULL → create node
2. If value < root → go LEFT
3. If value > root → go RIGHT
4. Repeat recursively

---

## ✅ Core Function

```cpp
void insert(Node *&root, int val)
{
    if (!root)
    {
        root = new Node(val);
        return;
    }

    if (root->val > val)
        insert(root->left, val);
    else
        insert(root->right, val);
}
```

---

## 🔍 Important

- Uses **reference pointer (`Node*&`)**
- Allows modifying original root
- Automatically finds correct position

---

# 3️⃣ Search in BST

File: `search_in_BST.cpp`

---

## 🎯 Objective

Check whether a value exists.

---

## 🧠 Logic

- If current node is NULL → Not Found
- If equal → Found
- If smaller → search left
- If larger → search right

---

## ✅ Core Function

```cpp
bool search(Node *root, int val)
{
    if (!root) return false;

    if (root->val == val) return true;

    if (root->val > val)
        return search(root->left, val);
    else
        return search(root->right, val);
}
```

---

# 🔄 Level Order Traversal (BFS)

Used in all programs for visualization.

---

## ✅ Function

```cpp
void level_Order(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }
}
```

---

## 📊 Complexity Analysis

Let:

- `n` = total nodes
- `h` = height of tree

| Operation           | Time | Space |
| ------------------- | ---- | ----- |
| Convert Array → BST | O(n) | O(h)  |
| Insert              | O(h) | O(h)  |
| Search              | O(h) | O(h)  |
| Level Order         | O(n) | O(n)  |

---

### 💡 Height Rules

Balanced BST:

```
h = log n
```

Worst Case (Skewed Tree):

```
h = n
```

---

# ⚠️ Edge Cases

- Empty tree
- Single node
- Skewed BST (sorted insertion)
- Duplicate values (go right in your implementation)

---

# 🎓 What You Learn From This Project

✔ BST structure  
✔ Recursive thinking  
✔ Divide & conquer  
✔ Tree traversal  
✔ Balanced tree creation  
✔ Efficient searching  
✔ Pointer manipulation  
✔ Queue-based BFS

---

# 🧾 Summary

This repository teaches **real-world Binary Search Tree implementation** in C++:

- Build balanced BST from sorted data
- Insert new values recursively
- Search efficiently using BST rules
- Traverse using level-order
- Analyze performance using Big-O

BST is a foundation for:

- Databases
- Search engines
- System design
- Competitive programming
- Interviews

Mastering this topic means mastering **tree-based problem solving**.

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in CSE (Running) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!