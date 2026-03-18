# 📘 STL Priority Queue, Map & Set in C++

This repository demonstrates practical usage of three powerful C++ STL containers:

✅ priority_queue  
✅ map  
✅ set

These structures are heavily used in:

- Competitive Programming
- Data Processing
- Graph Algorithms
- Frequency Counting
- Scheduling Systems
- Interview Problems

Each program here focuses on **real problem-solving scenarios**, not just theory.

---

# 🧠 Why STL Containers?

STL containers give:

✔ Automatic sorting  
✔ Fast searching  
✔ Efficient insertion & deletion  
✔ Clean syntax  
✔ Production-ready performance

Instead of manually building trees or heaps, STL provides optimized implementations.

---

# 📂 Files in This Repository

### 🔹 Priority Queue

1. `priority_queue.cpp` (Max Heap – default)
2. `min_priority_queue.cpp` (Min Heap)
3. `custom_compare_class.cpp` (Custom Object Priority Queue)

---

### 🔹 Map

4. `map.cpp` (Basic map operations)
5. `count_word.cpp` (Word frequency counting)

---

### 🔹 Set

6. `stl_set.cpp` (Unique sorted elements)

---

# =====================================================

# 🥇 STL Priority Queue

# =====================================================

A **priority_queue** always keeps the **highest (or lowest)** priority element at the top.

Internally it uses a **Heap**.

---

## 1️⃣ Max Priority Queue (Default)

File: `priority_queue.cpp`

### Behavior

- Largest value stays on top

### Example

```cpp
priority_queue<int> pq;
```

---

### Operations

| Function | Purpose              |
| -------- | -------------------- |
| push()   | Insert element       |
| top()    | Get highest priority |
| pop()    | Remove highest       |
| size()   | Total elements       |
| empty()  | Check empty          |

---

### Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| push      | O(log N)   |
| pop       | O(log N)   |
| top       | O(1)       |

---

## 2️⃣ Min Priority Queue

File: `min_priority_queue.cpp`

Used when **smallest element** should come first.

### Syntax

```cpp
priority_queue<int, vector<int>, greater<int>> pq;
```

---

Same complexities as Max Heap.

---

## 3️⃣ Custom Class Priority Queue

File: `custom_compare_class.cpp`

Used when storing **objects instead of numbers**.

Your example uses:

- name
- roll
- marks

Priority is based on:

1. Higher marks first
2. If marks equal → smaller roll first

---

### Custom Comparator

```cpp
class cmp
{
public:
    bool operator()(Student l, Student r)
```

This controls heap ordering.

---

### Learning Outcome

✔ Object comparison
✔ Custom priority logic
✔ Real interview pattern

---

# =====================================================

# 🗂️ STL Map

# =====================================================

A `map` stores **key → value** pairs.

Important rules:

- Keys are UNIQUE
- Automatically SORTED
- Implemented using Red-Black Tree

---

## 4️⃣ Basic Map Usage

File: `map.cpp`

---

### Insert

```cpp
mp["Masum"] = 100;
```

Time: O(log N)

---

### Search

```cpp
mp.count("nahid");
```

Returns:

- 1 → found
- 0 → not found

---

### Important Caveat

```cpp
mp["marzan"];
```

Creates key automatically if not exists!

---

## 5️⃣ Word Count Using Map

File: `count_word.cpp`

---

### Problem

Count frequency of each word in a sentence.

---

### Technique Used

- stringstream
- map<string,int>

---

### Logic

```cpp
mp[word]++;
```

Automatically increases count.

---

### Result

Words print in **alphabetical order**.

---

### Complexity

| Operation | Complexity |
| --------- | ---------- |
| Insert    | O(log N)   |
| Traversal | O(N)       |

---

# =====================================================

# 🧺 STL Set

# =====================================================

A `set` stores only **unique values** in **sorted order**.

---

## 6️⃣ Set Example

File: `stl_set.cpp`

---

### Features

- No duplicates
- Automatically sorted
- Fast lookup

---

### Insert

```cpp
s.insert(val);
```

---

### Search

```cpp
s.count(4);
```

Returns 0 or 1.

---

### Complexity

| Operation | Complexity |
| --------- | ---------- |
| Insert    | O(log N)   |
| Search    | O(log N)   |
| Traversal | O(N)       |

---

# 📊 Overall Complexity Summary

| Container      | Insert   | Search   | Delete   | Access |
| -------------- | -------- | -------- | -------- | ------ |
| Priority Queue | O(log N) | —        | O(log N) | O(1)   |
| Map            | O(log N) | O(log N) | O(log N) | —      |
| Set            | O(log N) | O(log N) | O(log N) | —      |

---

# 🎓 What You Learn From This Project

✔ Heap behavior via priority_queue
✔ Custom comparator logic
✔ Word frequency problems
✔ Sorted unique data using set
✔ Key-value storage with map
✔ STL iterator usage
✔ Real interview patterns

---

# 🧾 Summary

This project covers **three critical STL containers**:

### Priority Queue

Used for:

- Scheduling
- Top-K problems
- Greedy algorithms

### Map

Used for:

- Frequency counting
- Dictionary storage
- Key-value relationships

### Set

Used for:

- Removing duplicates
- Sorted data storage
- Fast membership checking

You practiced:

✅ Max Heap  
✅ Min Heap  
✅ Custom object heap  
✅ Word counting  
✅ Sorted unique values  
✅ Logarithmic performance structures

These concepts are essential for:

- Competitive programming
- Backend development
- Algorithm interviews
- Real-world systems

Mastering STL means writing **shorter, faster, cleaner C++ code**.

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in CSE (Running) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!