# ⏱️ Time and Space Complexity in C++

Welcome to **Time and Space Complexity in C++** 🚀
This guide will help you **understand how fast your program runs** (time complexity) and **how much memory it uses** (space complexity) using **simple C++ examples**.

Even if you are new to programming, don’t worry — every code block has **step-by-step explanations**.

---

## 📌 What You Will Learn

* Constant time — **O(1)**
* Logarithmic time — **O(log N)**
* Square root time — **O(√N)**
* Linear time — **O(N)**
* Linearithmic time — **O(N log N)**
* Quadratic time — **O(N²)**
* Space complexity examples
* Best to worst complexity comparison

---

## 1️⃣ Constant Time — O(1)

**Concept:** The operation takes **the same time** regardless of input size.

📄 **Code:** `constant_time_O1.cpp`

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Input happens only once → O(1)
    cout << "You entered: " << n << endl; // Printing is also O(1)
    return 0;
}
```

**Explanation for Beginners:**

* `cin >> n` reads input **once** — time doesn’t depend on n.
* `cout` prints **once** — also constant time.
  ✅ Total complexity: **O(1)**

---

## 2️⃣ Logarithmic Time — O(log N)

**Concept:** The input size is **reduced by a factor** each step.
Common example: doubling or halving numbers.

📄 **Code:** `logarithmic_complexity_O_logN.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i < n; i *= 2) { // i doubles each time
        cout << i << " ";
    }

    return 0;
}
```

**Explanation:**

* Loop: `i = 1, 2, 4, 8, ...`
* Steps grow like **log₂(n)**
* If n = 16 → iterations = 4 (`1, 2, 4, 8`)
  ✅ Time complexity: **O(log N)**

---

## 3️⃣ Square Root Time — O(√N)

**Concept:** Loop only runs up to the **square root of n**.

📄 **Code:** `sqrt_complexity_O_sqrtN.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= sqrt(n); i++) { // Loop until sqrt(n)
        cout << i << " ";
    }

    return 0;
}
```

**Explanation:**

* If n = 36 → sqrt(36) = 6 → loop runs 6 times
* Much faster than looping n times
  ✅ Time complexity: **O(√N)**

---

## 4️⃣ Linear Time — O(N)

**Concept:** Time grows **directly with input size**.

📄 **Code:** `Linear_Complexity_O_N.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) { // Loop runs n times
        cout << i << " ";
    }

    return 0;
}
```

**Explanation:**

* If n = 5 → loop runs 5 times
* If n = 1000 → loop runs 1000 times
  ✅ Time complexity: **O(N)**

---

## 5️⃣ Linearithmic Time — O(N log N)

**Concept:** Combines **linear** and **logarithmic loops**.
Common in sorting algorithms like Merge Sort.

📄 **Code:** `Linearithmic_complexity_O_NlogN.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) { // Linear loop
        for (int j = 1; j < n; j *= 2) { // Logarithmic loop
            cout << "Hello ";
        }
    }

    return 0;
}
```

**Explanation:**

* Outer loop runs n times → O(N)
* Inner loop doubles each step → O(log N)
  ✅ Total complexity: **O(N log N)**

---

## 6️⃣ Quadratic Time — O(N²)

**Concept:** Nested loops → time grows **like the square of input**.

📄 **Code:** `Quadratic_complexity_O_NxN.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {        // Outer loop
        for (int j = 0; j < m; j++) {    // Inner loop
            cout << i << " " << j << endl;
        }
    }

    return 0;
}
```

**Explanation:**

* Outer loop runs n times
* Inner loop runs m times for each outer loop iteration
* Total operations = n * m
* If n = m → O(N²)
  ⚠️ Avoid for large N

---

## 7️⃣ Space Complexity Example

**Concept:** How much **memory** your program uses.

📄 **Code:** `space_complexity.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n]; // 2D array → uses n*n memory

    for (int i = 0; i < n; i++) {
        cin >> a[i][i]; // Fill diagonal (doesn't add new memory)
    }

    return 0;
}
```

**Explanation:**

* Single integer → O(1) space
* 2D array → O(N²) space
* Loops don’t add memory unless you create new variables inside

---

## 📊 Best to Worst Complexity (Example for N = 1000)

| Complexity   | Notation   | Operations |
| ------------ | ---------- | ---------- |
| Constant     | O(1)       | 1          |
| Logarithmic  | O(log N)   | 10         |
| Square Root  | O(√N)      | 32         |
| Linear       | O(N)       | 1,000      |
| Linearithmic | O(N log N) | 10,000     |
| Quadratic    | O(N²)      | 1,000,000  |

✅ This shows **why optimized code matters**.

---

## ⚙️ How to Run C++ Code

```bash
g++ filename.cpp -o output   # Compile
./output                     # Run
```

---



# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in CSE (Running) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!