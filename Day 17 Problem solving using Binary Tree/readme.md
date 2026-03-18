# 💻 Problem Solving Using Binary Tree in C++

This repository demonstrates **advanced problem-solving techniques** using Binary Trees in C++ with the help of **STL pairs, vectors, and recursive logic**.

The focus is on combining **tree structures with STL utilities** for common coding challenges, such as storing node data as pairs, level-wise information, or 2D values.

---

## 📌 Table of Contents

1. [Using STL Pair](#1-using-stl-pair)
2. [Vector of Pairs](#2-vector-of-pairs)
3. [Problem Solving Approach with Binary Trees](#3-problem-solving-approach-with-binary-trees)
4. [Complexity Analysis](#4-complexity-analysis)
5. [Summary](#5-summary)

---

## 1️⃣ Using STL Pair

**File:** `stl_pair.cpp`

```cpp
pair<int, int> p1, p2;

// Using make_pair
p1 = make_pair(2, 3);
cout << p1.first << " " << p1.second << endl;

// Using initializer list (C++11+)
p2 = {10, 20};
cout << p2.first << " " << p2.second << endl;
```

✅ **Explanation:**

- `pair` stores **two values together** of any type.
- Access values using `.first` and `.second`.
- Useful in Binary Tree problems where nodes or levels store **value + metadata** (like depth, index, or parent info).

---

## 2️⃣ Vector of Pairs

```cpp
int n;
cin >> n; // number of elements

vector<pair<int, int>> v(n);

// Input into vector of pairs
for(int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
}

// Output
for(int i = 0; i < n; i++) {
    cout << v[i].first << " " << v[i].second << endl;
}
```

✅ **Explanation:**

- `vector<pair<int,int>>` is commonly used to **store 2D data** or **level-wise tree info**.
- Example use case: **storing node value and level** during level-order traversal.

---

## 3️⃣ Problem Solving Approach with Binary Trees

1. **Store node information using STL pairs**
   - `(node_value, depth)`
   - `(node_value, parent)`

2. **Use vectors or queues of pairs** for processing:
   - Level-order traversal with `(node, level)`
   - BFS algorithms for shortest paths or tree-related problems

3. **Recursive problems** can combine **pairs and return values** for:
   - Counting nodes or leaves with extra information
   - Storing min/max values along a path
   - Aggregating sums, depths, or distances

4. **Sample Tree Problem Idea:**

   ```text
   Given a binary tree, print all nodes at each level
   Output format: [(node_value, level), ...]
   ```

   - Use a queue of `pair<Node*, int>`
   - Traverse level by level and store `(value, depth)`

---

## 4️⃣ Complexity Analysis

| Operation                   | Time Complexity | Space Complexity |
| --------------------------- | --------------- | ---------------- |
| Pair Declaration & Access   | O(1)            | O(1)             |
| Vector of Pairs             | O(n)            | O(n)             |
| Queue/Vector BFS with pairs | O(n)            | O(n)             |
| Recursive Traversals        | O(n)            | O(h) (stack)     |

💡 **Notes:**

- `n` = number of nodes, `h` = height of the tree.
- Pairs **add constant space overhead** for storing extra metadata.

---

## 5️⃣ Summary

- **STL Pairs** are powerful tools for **linking two related values**.
- Vectors of pairs are ideal for storing **level-order or coordinate data** in tree problems.
- Combining **Binary Trees + STL utilities** allows for **clean, concise, and efficient solutions** in competitive programming.
- Problem-solving strategy:
  - Use **pairs for extra info**,
  - Use **queues or vectors** for traversal,
  - Use **recursive DFS** with return values for aggregations.

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in CSE (Running) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!