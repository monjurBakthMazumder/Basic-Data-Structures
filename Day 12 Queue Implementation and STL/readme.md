# 💻 Queue Implementation and STL in C++

This repository demonstrates various ways to implement the **Queue** data structure in C++:

1. Using **Singly Linked List**
2. Using **Doubly Linked List**
3. Using **STL List**
4. Using **STL Queue**

Each implementation covers **basic queue operations**: `push`, `pop`, `front`, `back`, `size`, and `empty`.  
You will also find **input/output examples**, complexity analysis, and professional explanations.

---

## 📌 Table of Contents

1. [Queue Using Doubly Linked List (Custom Implementation)](#1-queue-using-doubly-linked-list-custom-implementation)
2. [Queue Using Singly Linked List (Custom Implementation)](#2-queue-using-singly-linked-list-custom-implementation)
3. [Queue Using STL List](#3-queue-using-stl-list)
4. [Queue Using STL Queue](#4-queue-using-stl-queue)
5. [Complexity Analysis](#5-complexity-analysis)
6. [Summary](#6-summary)

---

## 1️⃣ Queue Using Doubly Linked List (Custom Implementation)

**File:** `Implement_queue_using_doubly_linekd_list.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *prev, *next;
    Node(int val){ this->val=val; prev=NULL; next=NULL; }
};

class MyQueue {
public:
    Node *head=NULL, *tail=NULL; int sz=0;

    void push(int val){
        sz++; Node *newNode = new Node(val);
        if(!head){ head=tail=newNode; return; }
        tail->next=newNode; newNode->prev=tail; tail=newNode;
    }

    void pop(){
        sz--; Node *del=head; head=head->next; delete del;
        if(!head){ tail=NULL; return; }
        head->prev=NULL;
    }

    int front(){ return head->val; }
    int back(){ return tail->val; }
    int size(){ return sz; }
    int empty(){ return head==NULL; }
};

int main() {
    MyQueue q;
    int n; cin>>n;
    for(int i=0;i<n;i++){ int val; cin>>val; q.push(val);}
    cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<endl;
    while(!q.empty()){ cout<<q.front()<<" "; q.pop();}
    return 0;
}
```

✅ **Explanation:**

- Doubly linked list allows efficient insertion at tail and deletion at head.
- `size()` is O(1) using counter `sz`.
- Supports `front()`, `back()`, `push()`, and `pop()` in O(1).

---

## 2️⃣ Queue Using Singly Linked List (Custom Implementation)

**File:** `Implement_queue_using_singly_linekd_list.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val; Node *next;
    Node(int val){ this->val=val; next=NULL; }
};

class MyQueue {
public:
    Node *head=NULL, *tail=NULL; int sz=0;

    void push(int val){
        sz++; Node *newNode=new Node(val);
        if(!head){ head=tail=newNode; return; }
        tail->next=newNode; tail=newNode;
    }

    void pop(){
        sz--; Node *del=head; head=head->next; delete del;
        if(!head) tail=NULL;
    }

    int front(){ return head->val; }
    int back(){ return tail->val; }
    int size(){ return sz; }
    bool empty(){ return head==NULL; }
};

int main(){
    MyQueue q;
    int n; cin>>n;
    for(int i=0;i<n;i++){ int val; cin>>val; q.push(val);}
    cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<endl;
    while(!q.empty()){ cout<<q.front()<<" "; q.pop();}
    return 0;
}
```

✅ **Explanation:**

- Singly linked list with head and tail pointers.
- Efficient `push` at tail, `pop` at head.
- Simpler than doubly linked list but no `prev` pointer.

---

## 3️⃣ Queue Using STL List

**File:** `Implement_queue_using_stl_list.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    list<int> l;

    void push(int val){ l.push_back(val); }  // O(1)
    void pop(){ l.pop_front(); }             // O(1)
    int front(){ return l.front(); }         // O(1)
    int back(){ return l.back(); }           // O(1)
    int size(){ return l.size(); }
    int empty(){ return l.empty(); }
};

int main(){
    MyQueue q;
    int n; cin>>n;
    for(int i=0;i<n;i++){ int val; cin>>val; q.push(val);}
    cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<endl;
    while(!q.empty()){ cout<<q.front()<<" "; q.pop();}
    return 0;
}
```

✅ **Explanation:**

- STL `list` manages memory automatically.
- Push and pop operations at respective ends are O(1).
- Easy to implement, safe, and efficient.

---

## 4️⃣ Queue Using STL Queue

**File:** `stl_queue.cpp`

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    int n; cin>>n;
    for(int i=0;i<n;i++){ int val; cin>>val; q.push(val);}

    cout<<q.front()<<" "<<q.back()<<" "<<q.size()<<endl;

    while(!q.empty()){ cout<<q.front()<<" "; q.pop(); }
    return 0;
}
```

✅ **Explanation:**

- STL `queue` provides all standard queue operations.
- Internally uses `deque` by default, providing O(1) push/pop at ends.
- Simplest and safest way to implement queue in C++.

---

## 5️⃣ Complexity Analysis

| Operation | Singly LL | Doubly LL | STL List | STL Queue |
| --------- | --------- | --------- | -------- | --------- |
| `push`    | O(1)      | O(1)      | O(1)     | O(1)      |
| `pop`     | O(1)      | O(1)      | O(1)     | O(1)      |
| `front`   | O(1)      | O(1)      | O(1)     | O(1)      |
| `back`    | O(1)      | O(1)      | O(1)     | O(1)      |
| `size`    | O(1)      | O(1)      | O(1)     | O(1)      |
| `empty`   | O(1)      | O(1)      | O(1)     | O(1)      |

💡 **Notes:**

- Linked list implementations allow dynamic memory usage.
- STL queue is highly optimized and preferred for production code.

---

## 6️⃣ Summary

- Queue is a **First-In-First-Out (FIFO)** data structure.
- Multiple implementations exist: **singly linked list**, **doubly linked list**, **STL list**, **STL queue**.
- Operations include: `push`, `pop`, `front`, `back`, `size`, `empty`.
- Custom implementations help understand **internal mechanics**.
- STL implementations provide **safe, efficient, and easy-to-use solutions**.

---


# Author

**Engr. Md Monjur Bakth Mazumder**

🎓 Diploma in Computer Technology — [Moulvibazar Polytechnic Institute](https://mpi.moulvibazar.gov.bd/)  
🎓 BSc in CSE (Running) — [Sylhet International University](https://siu.edu.bd/)

📧 Email: monjurmbm404@gmail.com

### ⭐ If you find this helpful, don’t forget to **star** the repository!