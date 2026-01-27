
# 📦 STL Vector in C++

**C++ STL Vectors** are **dynamic arrays** that can **grow or shrink automatically**.
They are widely used because they are **safe, flexible, and easy to manage** compared to traditional C-style arrays.

This guide covers **all the essentials** of vectors for beginners, with **step-by-step examples**.

---

## 📌 What You Will Learn

* Vector initialization
* Vector capacity and size
* Inputting elements into a vector
* Modifying vectors (insert, erase, push_back, pop_back)
* Working with vectors of strings
* Beginner-friendly explanations with code

---

## 📁 Repository Structure

```text
├── vector_capacity.cpp
├── vector_initialization.cpp
├── vector_input.cpp
├── vector_modifiers.cpp
└── vector_of_string.cpp
```

---

## 1️⃣ Vector Initialization

**Vectors can be created in multiple ways.**

📄 **Code:** `vector_initialization.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // TYPE 1: Empty vector
    vector<int> v1;
    cout << v1.size() << endl; // 0

    // TYPE 2: Fixed size (default 0)
    vector<int> v2(5);
    cout << v2.size() << endl; // 5

    // TYPE 3: Custom fill
    vector<int> v3(5, 9);
    for (int i : v3) cout << i << " "; // 9 9 9 9 9
    cout << endl;

    // TYPE 4: Clone another vector
    vector<int> v4(v3);
    for (int i : v4) cout << i << " "; // 9 9 9 9 9
    cout << endl;

    // TYPE 5: Array to vector
    int a[5] = {1,2,3,4,5};
    vector<int> v5(a, a+5);
    for (int i : v5) cout << i << " "; // 1 2 3 4 5
    cout << endl;

    // TYPE 6: Direct list (C++11+)
    vector<int> v6 = {1,2,3,4,6};
    for (int i : v6) cout << i << " "; // 1 2 3 4 6
    cout << endl;

    return 0;
}
```

**Explanation for Beginners:**

* Vectors can start empty or with a fixed size.
* They can **clone another vector** or **copy an array**.
* C++11 allows **direct initialization with `{}`**.

---

## 2️⃣ Vector Capacity and Size

**Vectors have three important properties:** `size()`, `capacity()`, `empty()`.

📄 **Code:** `vector_capacity.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 50, 25, 27};

    v.push_back(10); // Adds one element, capacity may increase

    cout << v.capacity() << endl; // Total memory slots reserved
    cout << v.max_size() << endl; // Max possible elements
    cout << v.empty() << endl;    // 0 = not empty
    cout << v.size() << endl;     // Current number of elements

    v.clear(); // Removes all elements
    cout << v.size() << endl;

    v.resize(12, 10); // Resizes to 12, fills new elements with 10
    cout << v.size() << endl;

    return 0;
}
```

**Explanation:**

* `.size()` → number of elements
* `.capacity()` → memory reserved (may be larger than size)
* `.empty()` → checks if vector has elements
* `.resize()` → changes vector size, can fill new slots

---

## 3️⃣ Inputting Elements

**You can fill vectors in two ways:** pre-allocated or dynamic `push_back`.

📄 **Code:** `vector_input.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // METHOD 1: Pre-allocated vector
    vector<int> v(n); 
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i : v) cout << i << " ";
    cout << endl;

    // METHOD 2: Dynamic push_back
    vector<int> v2;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    for (int i : v2) cout << i << " ";
    cout << endl;

    return 0;
}
```

**Explanation:**

* Pre-allocated: `vector<int> v(n)` creates `n` elements ready to use
* Dynamic: `push_back()` grows vector as needed

---

## 4️⃣ Vector Modifiers

**Vectors can be modified easily.**

📄 **Code:** `vector_modifiers.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 4, 3, 5};
    vector<int> v2;

    // Assignment
    v2 = v1;

    // push_back / pop_back
    v2.push_back(6);
    v2.pop_back();

    // insert elements
    v2.insert(v2.begin()+2, 100);
    v2.insert(v2.begin()+1, v1.begin(), v1.end());

    // erase elements
    v2.erase(v2.begin()+1);
    v2.erase(v2.begin()+1, v2.begin()+5);

    // replace
    replace(v2.begin(), v2.end(), 100, 0);

    // find
    auto it = find(v2.begin(), v2.end(), 200);
    if (it == v2.end()) cout << "Not Found"; else cout << "Found";
    cout << endl;

    // Access
    cout << v1[2] << endl;     // Index
    cout << v1.front() << endl; // First element
    cout << v1.back() << endl;  // Last element

    return 0;
}
```

**Explanation:**

* `push_back` → add element at the end
* `pop_back` → remove last element
* `insert` → add element(s) at a position
* `erase` → remove element(s)
* `replace` and `find` → use `<algorithm>` for search/replace
* Access via `[i]`, `front()`, `back()`

---

## 5️⃣ Vectors of Strings

**Vectors aren’t limited to integers.**

📄 **Code:** `vector_of_string.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Clear newline after number

    vector<string> v(n);

    for (int i = 0; i < n; i++) {
        getline(cin, v[i]); // Read whole line including spaces
    }

    for (string s : v) cout << s << endl;

    return 0;
}
```

**Explanation:**

* Use `getline()` to read full strings
* `cin.ignore()` prevents reading leftover newline from previous input
* Range-based for loops make iterating over elements simple

---

## ⚙️ How to Run Vector Code

```bash
g++ filename.cpp -o output   # Compile
./output                     # Run
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
