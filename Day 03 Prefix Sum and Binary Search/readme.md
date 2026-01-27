# 🔍 Prefix Sum & Binary Search in C++

This guide covers two **fundamental algorithms** in C++:

1. **Prefix Sum** – Quickly calculate the sum of any subarray in constant time.
2. **Binary Search** – Efficiently find an element in a **sorted array**.

Every code example includes **step-by-step explanations** for beginners.

---

## 📌 What You Will Learn

- How to implement **Binary Search** in C++
- How to precompute **Prefix Sums**
- Efficiently answer **range sum queries**
- Sorting arrays for Binary Search
- Handling multiple queries

---

## 📁 Repository Structure

```text
├── Binary_Search.cpp
├── Z_Binary_Search.cpp
└── Y_Range_sum_query.cpp
```

---

## 1️⃣ Binary Search (Single Query)

**Concept:** Binary Search finds a value in a **sorted array** in **O(log N)** time.

📄 **Code:** `Binary_Search.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int val;
    cin >> val;

    int l = 0, r = n-1;
    int flag = 0; // 0 = not found, 1 = found

    while(l <= r) {
        int mid = (l + r) / 2;

        if(a[mid] == val) {
            flag = 1; // Found it!
            break;
        }
        else if(a[mid] > val) r = mid - 1; // Search left
        else l = mid + 1; // Search right
    }

    if(flag == 1) cout << "Found\n";
    else cout << "Not Found\n";

    return 0;
}
```

**Beginner-Friendly Explanation:**

- Array **must be sorted** for binary search to work.
- Start with **left = 0** and **right = n-1**.
- Find middle: `mid = (l + r)/2`.
- Compare middle element to target:
  - If equal → found
  - If bigger → search left half
  - If smaller → search right half

- Repeat until left crosses right.

✅ **Time Complexity:** O(log N)
✅ **Space Complexity:** O(1)

---

## 2️⃣ Binary Search with Multiple Queries

**Concept:** Search multiple values efficiently in a **sorted array**.

📄 **Code:** `Z_Binary_Search.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    // MUST sort the array first
    sort(a, a+n);

    for(int i = 0; i < q; i++) {
        int val;
        cin >> val;
        int l = 0, r = n-1;
        int flag = 0;

        while(l <= r) {
            int mid = (l + r) / 2;
            if(a[mid] == val) { flag = 1; break; }
            else if(a[mid] > val) r = mid - 1;
            else l = mid + 1;
        }

        if(flag) cout << "found\n";
        else cout << "not found\n";
    }

    return 0;
}
```

**Explanation:**

- Sort the array **once** → O(N log N)
- Perform **binary search for each query** → O(log N)
- Total time for q queries: **O(N log N + q log N)**

---

## 3️⃣ Prefix Sum (Range Sum Query)

**Concept:** Quickly calculate the sum of elements in a range [L, R] in **O(1)** time.

📄 **Code:** `Y_Range_sum_query.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    // 1-based indexing for simplicity
    vector<long long> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    // 2. Prefix sum pre-calculation
    vector<long long> pre(n+1);
    pre[1] = v[1];
    for(int i = 2; i <= n; i++) {
        pre[i] = pre[i-1] + v[i];
    }

    // 3. Answer queries
    while(q--) {
        int l, r;
        cin >> l >> r;
        long long sum = (l == 1) ? pre[r] : pre[r] - pre[l-1];
        cout << sum << endl;
    }

    return 0;
}
```

**Beginner-Friendly Explanation:**

- `pre[i]` stores the sum of **first i elements**
- To get sum of range `[L, R]`:
  - If L = 1 → sum = `pre[R]`
  - Otherwise → sum = `pre[R] - pre[L-1]`

- **Answer each query in O(1) time**
- Pre-computation = O(N)

✅ **Time Complexity:** O(N + Q)
✅ **Space Complexity:** O(N)

---

## ⚙️ How to Run Code

```bash
g++ Binary_Search.cpp -o binary_search
./binary_search

g++ Z_Binary_Search.cpp -o multi_binary_search
./multi_binary_search

g++ Y_Range_sum_query.cpp -o prefix_sum
./prefix_sum
```

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
