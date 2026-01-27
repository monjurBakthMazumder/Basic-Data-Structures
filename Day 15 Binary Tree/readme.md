# 💻 Binary Tree Implementation in C++

This repository demonstrates the creation and traversal of **Binary Trees** in C++.  
It includes examples of creating nodes, connecting them, and performing the three primary depth-first traversals:

1. **In-order Traversal** (Left → Root → Right)
2. **Pre-order Traversal** (Root → Left → Right)
3. **Post-order Traversal** (Left → Right → Root)

Each implementation includes clear explanations, code, and complexity analysis.

---

## 📌 Table of Contents

1. [Creating Nodes and Constructing Binary Tree](#1-creating-nodes-and-constructing-binary-tree)
2. [In-order Traversal](#2-in-order-traversal)
3. [Pre-order Traversal](#3-pre-order-traversal)
4. [Post-order Traversal](#4-post-order-traversal)
5. [Complexity Analysis](#5-complexity-analysis)
6. [Summary](#6-summary)

---

## 1️⃣ Creating Nodes and Constructing Binary Tree

**File:** `creating_nodes.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int main(){
    // Creating nodes
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    // Connecting nodes
    root->left = a; root->right = b;
    a->left = c;
    b->left = d; b->right = e;

    return 0;
}
```

✅ **Explanation:**

- Nodes have `val`, `left`, and `right` pointers.
- Connections form the binary tree structure.
- Root: `10`; Left subtree: `20 → 40`; Right subtree: `30 → 50, 60`.

---

## 2️⃣ In-order Traversal

**File:** `inorder_traversal.cpp`

```cpp
void inOrder(Node *root){
    if(root == NULL) return;
    inOrder(root->left);   // Visit left subtree
    cout << root->val << " "; // Visit root
    inOrder(root->right);  // Visit right subtree
}

int main(){
    // Tree construction (same as creating_nodes.cpp)
    Node *root = new Node(10);
    Node *a = new Node(20); Node *b = new Node(30);
    Node *c = new Node(40); Node *d = new Node(50); Node *e = new Node(60);

    root->left = a; root->right = b;
    a->left = c;
    b->left = d; b->right = e;

    inOrder(root); // Output: 40 20 10 50 30 60
    return 0;
}
```

✅ **Explanation:**

- Traverses left subtree, root, then right subtree.
- Useful for **BST** to print values in sorted order.

---

## 3️⃣ Pre-order Traversal

**File:** `preorder_traversal.cpp`

```cpp
void preOrder(Node *root){
    if(root == NULL) return;
    cout << root->val << " "; // Visit root first
    preOrder(root->left);     // Then left subtree
    preOrder(root->right);    // Finally right subtree
}

int main(){
    Node *root = new Node(10);
    Node *a = new Node(20); Node *b = new Node(30);
    Node *c = new Node(40); Node *d = new Node(50); Node *e = new Node(60);

    root->left = a; root->right = b;
    a->left = c;
    b->left = d; b->right = e;

    preOrder(root); // Output: 10 20 40 30 50 60
    return 0;
}
```

✅ **Explanation:**

- Visits root first, then left subtree, then right.
- Useful for **copying the tree** or **expression evaluation**.

---

## 4️⃣ Post-order Traversal

**File:** `postorder_traversal.cpp`

```cpp
void postOrder(Node *root){
    if(root == NULL) return;
    postOrder(root->left);   // Visit left subtree
    postOrder(root->right);  // Visit right subtree
    cout << root->val << " "; // Visit root last
}

int main(){
    Node *root = new Node(10);
    Node *a = new Node(20); Node *b = new Node(30);
    Node *c = new Node(40); Node *d = new Node(50); Node *e = new Node(60);

    root->left = a; root->right = b;
    a->left = c;
    b->left = d; b->right = e;

    postOrder(root); // Output: 40 20 50 60 30 10
    return 0;
}
```

✅ **Explanation:**

- Visits left subtree, right subtree, then root.
- Useful for **deleting a tree** or **expression evaluation**.

---

## 5️⃣ Complexity Analysis

| Operation                | Time Complexity | Space Complexity     |
| ------------------------ | --------------- | -------------------- |
| Creating Nodes & Linking | O(1) per node   | O(1) per node        |
| Pre-order Traversal      | O(n)            | O(h) recursive stack |
| In-order Traversal       | O(n)            | O(h) recursive stack |
| Post-order Traversal     | O(n)            | O(h) recursive stack |

💡 **Notes:**

- `n` = number of nodes, `h` = height of tree.
- Recursive stack space is **O(h)**, can be O(n) in skewed trees.
- All traversals visit **each node exactly once** → O(n) time.

---

## 6️⃣ Summary

- Binary Tree is a **hierarchical data structure** with a root and at most two children per node.
- Traversals provide **different ways to process nodes**:
  - **In-order**: Sorted order for BSTs.
  - **Pre-order**: Root first → useful for copying tree.
  - **Post-order**: Root last → useful for deletion/evaluation.

- Custom `Node` class with pointers allows building **any tree structure**.
- Understanding tree traversals is fundamental for **binary search trees, heaps, and expression trees**.

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
