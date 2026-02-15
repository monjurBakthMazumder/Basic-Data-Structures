# 📚 Heap (Min Heap & Max Heap) Implementation in C++

This repository demonstrates **manual implementation of Heap data structure in C++** using vectors (array-based binary heap).

Both **Max Heap** and **Min Heap** are covered with:

- Insertion
- Deletion (root removal)
- Heapify up (bubble up)
- Heapify down (bubble down)

Heaps are **complete binary trees** commonly used in:

- Priority Queues
- Scheduling systems
- Dijkstra / Prim algorithms
- Top-K problems
- Sorting (Heap Sort)

---

## 🌳 What is a Heap?

A Heap is a **complete binary tree** that satisfies:

### 🔵 Max Heap

Parent is **greater than or equal** to children.

```

Parent ≥ Left Child
Parent ≥ Right Child

```

Root always contains the **maximum value**.

---

### 🟢 Min Heap

Parent is **smaller than or equal** to children.

```

Parent ≤ Left Child
Parent ≤ Right Child

```

Root always contains the **minimum value**.

---

## 📂 Files in This Repository

### Max Heap

1. `insert_in_max_heap.cpp`
2. `delete_in_max_heap.cpp`

### Min Heap

3. `insert_in_min_heap.cpp`
4. `delete_in_min_heap.cpp`

Each file focuses on **one core heap operation**.

---

# 🧱 Heap Representation

We use `vector<int>`.

Index formulas:

```

Parent  = (i - 1) / 2
Left    = 2*i + 1
Right   = 2*i + 2

```

This allows tree behavior using a simple array.

---

# 1️⃣ Insert into Max Heap

File: `insert_in_max_heap.cpp`

---

## 🎯 Goal

Insert a value while preserving Max Heap property.

---

## 🧠 Logic (Heapify Up)

1. Push value at the end
2. Compare with parent
3. Swap if child > parent
4. Repeat until root or valid position

---

## Core Concept

```cpp
while (cur_idx != 0)
{
    int par_idx = (cur_idx - 1) / 2;
    if (v[par_idx] < v[cur_idx])
        swap(v[par_idx], v[cur_idx]);
    else
        break;
    cur_idx = par_idx;
}
```

---

# 2️⃣ Insert into Min Heap

File: `insert_in_min_heap.cpp`

Same as Max Heap but condition is reversed:

```
Parent must be smaller
```

---

```cpp
if (v[par_idx] > v[cur_idx])
    swap(v[par_idx], v[cur_idx]);
```

---

# 3️⃣ Delete from Max Heap

File: `delete_in_max_heap.cpp`

---

## 🎯 Goal

Delete root (maximum element).

---

## 🧠 Logic (Heapify Down)

### Steps:

1. Replace root with last element
2. Remove last element
3. Compare root with children
4. Swap with larger child
5. Repeat until heap property restored

---

### Core Delete Logic

```cpp
v[0] = v.back();
v.pop_back();

while(true)
{
    int left = 2*i+1;
    int right = 2*i+2;

    if(left child larger)
        swap;
    else if(right child larger)
        swap;
    else break;
}
```

---

# 4️⃣ Delete from Min Heap

File: `delete_in_min_heap.cpp`

Same as Max Heap but swaps with **smaller child**.

---

# 🔄 Heapify Summary

| Operation | Direction   |
| --------- | ----------- |
| Insert    | Bottom → Up |
| Delete    | Top → Down  |

---

# 📊 Complexity Analysis

Let `n` be number of elements.

| Operation              | Time       | Space |
| ---------------------- | ---------- | ----- |
| Insert                 | O(log n)   | O(1)  |
| Delete                 | O(log n)   | O(1)  |
| Build Heap (n inserts) | O(n log n) | O(n)  |
| Access Min/Max         | O(1)       | O(1)  |

---

## Why O(log n)?

Heap height = log₂(n)

Every insert/delete travels only one path.

---

# ⚠️ Edge Cases

- Empty heap
- Single element
- Duplicate values
- Skewed insert order
- Delete when only one node exists

---

# 🎓 What You Learn From This Project

✔ Binary heap structure
✔ Vector-based tree simulation
✔ Heapify up & down
✔ Priority Queue foundation
✔ Index math
✔ Efficient insertion & deletion
✔ Real-world algorithm design

---

# 🧾 Summary

This project builds **Heap from scratch in C++** without STL priority_queue.

You implemented:

- Max Heap insertion
- Min Heap insertion
- Max Heap deletion
- Min Heap deletion

Key concepts learned:

✅ Complete Binary Tree  
✅ Heap property  
✅ Heapify Up  
✅ Heapify Down  
✅ O(log n) performance

Heap is one of the most important data structures used in:

- Operating Systems
- Graph algorithms
- Competitive programming
- Scheduling systems
- Large-scale applications

Mastering Heap means mastering **priority-based problem solving**.

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
