
# 💻 Stack Implementation and STL in C++

This repository demonstrates multiple ways to implement **Stack** data structure in C++:

1. Using **arrays**  
2. Using **dynamic arrays (vector)**  
3. Using **doubly linked lists**  
4. Using **STL list**  
5. Using **STL stack**  

Each implementation covers **basic stack operations**: `push`, `pop`, `top`, `size`, and `empty`.  
You will also find **input/output examples**, complexity analysis, and professional explanations.

---

## 📌 Table of Contents

1. [Stack Using Dynamic Array (Vector) with Input/Output](#1-stack-using-dynamic-array-vector-with-inputoutput)  
2. [Stack Using Array (Manual Example)](#2-stack-using-array-manual-example)  
3. [Stack Using Doubly Linked List (Custom Implementation)](#3-stack-using-doubly-linked-list-custom-implementation)  
4. [Stack Using STL List](#4-stack-using-stl-list)  
5. [Stack Using STL Stack](#5-stack-using-stl-stack)  
6. [Complexity Analysis](#6-complexity-analysis)  
7. [Summary](#7-summary)  

---

## 1️⃣ Stack Using Dynamic Array (Vector) with Input/Output

**File:** `Implement_stack_input_output_using_array.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

class myStack {
public:
    vector<int> v;

    void push(int val) { v.push_back(val); }
    void pop() { v.pop_back(); }
    int top() { return v.back(); }
    int size() { return v.size(); }
    bool empty() { return v.empty(); }
};

int main() {
    myStack st;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        st.push(x);
    }
    while(!st.empty()){
        cout << "top " << st.top() << endl;
        st.pop();
    }
    return 0;
}
````

✅ **Explanation:**

* Uses `vector` as internal storage.
* Supports dynamic resizing.
* Input/output handled from `main()` function.

---

## 2️⃣ Stack Using Array (Manual Example)

**File:** `Implement_stack_using_array.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

class myStack {
public:
    vector<int> v;
    void push(int val) { v.push_back(val); }
    void pop() { v.pop_back(); }
    int top() { return v.back(); }
    int size() { return v.size(); }
    bool empty() { return v.empty(); }
};

int main() {
    myStack st;
    st.push(10); st.push(20); st.push(30); st.push(40);
    cout << "Top element: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;
    st.pop();
    cout << "New Top element: " << st.top() << endl;
    return 0;
}
```

✅ **Explanation:**

* Manual example for understanding `push`, `pop`, and `top`.
* Demonstrates stack operations without user input.

---

## 3️⃣ Stack Using Doubly Linked List (Custom Implementation)

**File:** `Implement_stack_using_stl_doubly_linekd_list.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *prev, *next;
    Node(int val) { this->val=val; prev=NULL; next=NULL; }
};

class myStack {
public:
    Node *head=NULL, *tail=NULL; int sz=0;
    void push(int val) { 
        sz++; Node *newNode = new Node(val);
        if(!head){ head=tail=newNode; return; }
        tail->next=newNode; newNode->prev=tail; tail=newNode;
    }
    void pop(){ sz--; Node *del=tail; tail=tail->prev; delete del;
        if(!tail){ head=NULL; return; } tail->next=NULL;
    }
    int top(){ return tail->val; }
    int size(){ return sz; }
    bool empty(){ return head==NULL; }
};

int main() {
    myStack st;
    int n; cin>>n;
    for(int i=0;i<n;i++){ int x; cin>>x; st.push(x);}
    while(!st.empty()){ cout<<"top "<<st.top()<<endl; st.pop();}
    return 0;
}
```

✅ **Explanation:**

* Uses a doubly linked list for stack storage.
* `size()` operation is O(1) with counter `sz`.
* Allows efficient memory usage.

---

## 4️⃣ Stack Using STL List

**File:** `Implement_stack_using_stl_list.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

class myStack {
public:
    list<int> l;
    void push(int val){ l.push_back(val); }
    void pop(){ l.pop_back(); }
    int top(){ return l.back(); }
    int size(){ return l.size(); }
    bool empty(){ return l.empty(); }
};

int main() {
    myStack st;
    int n; cin>>n;
    for(int i=0;i<n;i++){ int x; cin>>x; st.push(x);}
    while(!st.empty()){ cout<<"top "<<st.top()<<endl; st.pop();}
    return 0;
}
```

✅ **Explanation:**

* STL `list` manages pointers internally.
* Push/pop/top are O(1) operations.

---

## 5️⃣ Stack Using STL Stack

**File:** `stl_stack.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    int n; cin>>n;
    for(int i=0;i<n;i++){ int x; cin>>x; st.push(x);}
    while(!st.empty()){ cout<<"top "<<st.top()<<endl; st.pop();}
    return 0;
}
```

✅ **Explanation:**

* Uses built-in `stack` from C++ STL.
* Provides all basic stack operations efficiently.

---

## 6️⃣ Complexity Analysis

| Operation | Vector/Array   | Doubly Linked List | STL List | STL Stack |
| --------- | -------------- | ------------------ | -------- | --------- |
| `push`    | O(1) amortized | O(1)               | O(1)     | O(1)      |
| `pop`     | O(1)           | O(1)               | O(1)     | O(1)      |
| `top`     | O(1)           | O(1)               | O(1)     | O(1)      |
| `size`    | O(1)           | O(1)               | O(1)     | O(1)      |
| `empty`   | O(1)           | O(1)               | O(1)     | O(1)      |

💡 **Notes:**

* Vector push is **amortized O(1)** due to occasional resizing.
* Linked lists provide constant-time insertions/deletions without resizing.
* STL stack internally uses `deque` by default, providing all O(1) operations.

---

## 7️⃣ Summary

* Stack is a **Last-In-First-Out (LIFO)** data structure.
* Multiple implementations exist: **array/vector**, **linked list**, **STL list**, **STL stack**.
* Operations include: `push`, `pop`, `top`, `size`, `empty`.
* Use STL implementations for **quick, safe, and efficient coding**.
* Custom implementations help in understanding **data structure internals**.

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