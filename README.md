# 📚 Stack Data Structure

![DSA](https://img.shields.io/badge/Data%20Structure-Stack-blue)
![Language](https://img.shields.io/badge/Language-C++-orange)
![Difficulty](https://img.shields.io/badge/Level-Beginner%20to%20Intermediate-green)

---

## 📖 Table of Contents

* [Introduction](#-introduction)
* [Basic Operations](#-basic-operations-on-stack)
* [Stack Representation](#-stack-representation)
* [C++ Implementation](#-c-implementation-using-stl)
* [Time Complexity](#-time-complexity)
* [Applications of Stack](#-applications-of-stack)
* [Advantages](#-advantages-of-stack)
* [Limitations](#-limitations)
* [Example Problems](#-example-problems-using-stack)
* [Author](#-author)

---

# 📌 Introduction

A **Stack** is a **linear data structure** that follows the principle of:

## 🔁 LIFO – *Last In, First Out*

This means:

> The **last element inserted** into the stack is the **first one removed**.

### 🍽 Real-World Example

A simple example is a **stack of plates**:

```
Top
 ↓
| Plate 4 |
| Plate 3 |
| Plate 2 |
| Plate 1 |
```

You can only:

* ➕ **Add plates from the top**
* ➖ **Remove plates from the top**

---

# 🧱 Basic Operations on Stack

| Operation      | Description                              |
| -------------- | ---------------------------------------- |
| **Push**       | Insert an element into the stack         |
| **Pop**        | Remove the top element                   |
| **Peek / Top** | View the top element without removing it |
| **isEmpty**    | Check whether the stack is empty         |
| **Size**       | Returns the number of elements           |

---

# 📊 Stack Representation

Stacks can be implemented using:

### 1️⃣ Array Implementation

Uses a fixed-size array.

### 2️⃣ Linked List Implementation

Uses nodes and pointers.

### 3️⃣ STL Stack (C++ Standard Library)

The easiest and most commonly used implementation in C++.

Example visualization:

```
Top
 ↓
| 50 |
| 40 |
| 30 |
| 20 |
| 10 |
```

---

# 💻 C++ Implementation using STL

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> s;

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;

    // Remove top element
    s.pop();

    cout << "Top after pop: " << s.top() << endl;

    cout << "Stack size: " << s.size() << endl;

    if(s.empty())
        cout << "Stack is empty";
    else
        cout << "Stack is not empty";

    return 0;
}
```

---

# ⚙️ Time Complexity

| Operation  | Complexity |
| ---------- | ---------- |
| Push       | **O(1)**   |
| Pop        | **O(1)**   |
| Peek / Top | **O(1)**   |
| isEmpty    | **O(1)**   |

Stack operations are **very efficient** because they only access the **top element**.

---

# 📚 Applications of Stack

Stacks are widely used in **computer science and software development**.

## 1️⃣ Expression Evaluation

Used to convert expressions:

```
Infix → Postfix
A + B * C
```

---

## 2️⃣ Parenthesis Checking

Used by compilers to check balanced brackets.

Example:

```
((a + b) * c)
```

---

## 3️⃣ Function Calls (Call Stack)

Programming languages store **function calls in a stack**.

Example:

```
main()
 └── functionA()
       └── functionB()
```

---

## 4️⃣ Undo / Redo Operations

Used in applications such as:

* 📝 Text Editors
* 🎨 Image Editing Software
* 💻 IDEs (VS Code, IntelliJ)

---

## 5️⃣ Backtracking Algorithms

Examples include:

* Maze solving
* Depth First Search (DFS)
* Sudoku solver

---

## 6️⃣ Stock Span Problem

Used to determine the **number of consecutive days where stock price is lower than the current day**.

---

# 🚀 Advantages of Stack

✔ Simple to implement
✔ Efficient **O(1)** operations
✔ Useful in recursion and parsing
✔ Helps manage program memory (call stack)

---

# ⚠️ Limitations

❌ Only the **top element** is accessible
❌ Fixed-size stacks may cause **overflow**
❌ Removing from an empty stack causes **underflow**

---

# 📖 Example Problems Using Stack

Some common **DSA problems** solved using stacks:

1️⃣ Balanced Parentheses
2️⃣ Next Greater Element
3️⃣ Stock Span Problem
4️⃣ Infix to Postfix Conversion
5️⃣ Largest Rectangle in Histogram

---

# 👨‍💻 Author

**Prepared by:**

### Majid Tamboli

🔗 GitHub:
https://github.com/majidtamboli45

📘 Created as part of **Data Structures and Algorithms (DSA) practice using C++**.
