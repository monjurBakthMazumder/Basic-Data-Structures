# 💻 Operations on Binary Tree in C++

This repository demonstrates common **operations on Binary Trees** in C++ including:

- Building a tree from input
- Level-order traversal
- Counting nodes and leaf nodes
- Calculating maximum height

All implementations use a **Node class** with pointers to left and right children and emphasize **queue-based input** for level-wise construction.

---

## 📌 Table of Contents

1. [Binary Tree Input](#1-binary-tree-input)
2. [Level-order Traversal](#2-level-order-traversal)
3. [Count Leaf Nodes](#3-count-leaf-nodes)
4. [Count Total Nodes](#4-count-total-nodes)
5. [Maximum Height of Binary Tree](#5-maximum-height-of-binary-tree)
6. [Complexity Analysis](#6-complexity-analysis)
7. [Summary](#7-summary)

---

## 1️⃣ Binary Tree Input

**File:** `binary_tree_input.cpp`

```cpp
Node* input_tree() {
    int val; cin >> val;
    Node *root = (val == -1) ? NULL : new Node(val);
    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()) {
        Node *p = q.front(); q.pop();
        int l, r; cin >> l >> r;
        Node *myLeft = (l==-1) ? NULL : new Node(l);
        Node *myRight = (r==-1) ? NULL : new Node(r);
        p->left = myLeft; p->right = myRight;
        if(myLeft) q.push(myLeft);
        if(myRight) q.push(myRight);
    }
    return root;
}
```

✅ **Explanation:**

- Input format uses `-1` to denote **no node**.
- Tree is constructed **level-wise** using a queue.

---

## 2️⃣ Level-order Traversal

**File:** `level_order_traversal.cpp`

```cpp
void level_Order(Node *root) {
    if(!root) return;
    queue<Node*> q; q.push(root);
    while(!q.empty()) {
        Node *f = q.front(); q.pop();
        cout << f->val << " ";
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
```

✅ **Explanation:**

- Prints nodes **level by level** (top to bottom, left to right).
- Uses a queue to maintain **order of processing**.

---

## 3️⃣ Count Leaf Nodes

**File:** `count_leaf_node_in_a_binary_tree.cpp`

```cpp
int count_leaf_nodes(Node *root) {
    if(!root) return 0;
    if(!root->left && !root->right) return 1;
    return count_leaf_nodes(root->left) + count_leaf_nodes(root->right);
}
```

✅ **Explanation:**

- Leaf node = node with **no children**.
- Recursively sums leaf nodes of left and right subtrees.

---

## 4️⃣ Count Total Nodes

**File:** `count_node_in_a_binary_tree.cpp`

```cpp
int count_nodes(Node *root) {
    if(!root) return 0;
    return 1 + count_nodes(root->left) + count_nodes(root->right);
}
```

✅ **Explanation:**

- Counts **all nodes** in the tree recursively.
- Each node contributes **1 + left + right**.

---

## 5️⃣ Maximum Height of Binary Tree

**File:** `get_max_height.cpp`

```cpp
int max_height(Node *root) {
    if(!root) return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}
```

✅ **Explanation:**

- Height = number of **edges on the longest path from root to leaf**.
- Recursively finds height of left and right subtrees and adds 1.

---

## 6️⃣ Complexity Analysis

| Operation             | Time Complexity | Space Complexity       |
| --------------------- | --------------- | ---------------------- |
| Input Tree            | O(n)            | O(n) (queue)           |
| Level-order Traversal | O(n)            | O(n) (queue)           |
| Count Leaf Nodes      | O(n)            | O(h) (recursive stack) |
| Count Total Nodes     | O(n)            | O(h)                   |
| Maximum Height        | O(n)            | O(h)                   |

💡 **Notes:**

- `n` = number of nodes, `h` = height of the tree.
- Recursive operations have **stack space O(h)**.

---

## 7️⃣ Summary

- Operations on Binary Trees are **fundamental** for tree-based algorithms.
- Level-order input ensures trees are **constructed correctly** from user input.
- Recursive functions allow easy calculation of:
  - Leaf nodes
  - Total nodes
  - Maximum height

- Level-order traversal provides a clear **visual of tree structure**.

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
