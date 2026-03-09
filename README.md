# Stack Data Structure

## 📌 Introduction

A **Stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle.
This means the **last element inserted into the stack is the first one to be removed**.

A simple real-world example of a stack is a **stack of plates**, where you can only add or remove plates from the **top**.

---

# 🧱 Basic Operations on Stack

| Operation  | Description                                 |
| ---------- | ------------------------------------------- |
| Push       | Insert an element into the stack            |
| Pop        | Remove the top element from the stack       |
| Peek / Top | View the top element without removing it    |
| isEmpty    | Check if the stack is empty                 |
| Size       | Returns the number of elements in the stack |

---

# 📊 Stack Representation

A stack can be implemented using:

1. **Array**
2. **Linked List**
3. **STL Stack (C++ Standard Library)**

Example:

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

    // Pop element
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

| Operation | Time Complexity |
| --------- | --------------- |
| Push      | O(1)            |
| Pop       | O(1)            |
| Peek      | O(1)            |
| isEmpty   | O(1)            |

---

# 📚 Applications of Stack

Stacks are used in many computer science problems:

### 1️⃣ Expression Evaluation

Used for converting and evaluating mathematical expressions.

Example:

```
Infix → Postfix
A + B * C
```

### 2️⃣ Parenthesis Checking

Used to check balanced parentheses in compilers.

Example:

```
((a+b) * c)
```

### 3️⃣ Function Calls (Call Stack)

Programming languages use stacks to manage **function calls and recursion**.

### 4️⃣ Undo / Redo Operations

Used in applications like:

* Text editors
* Image editing software
* IDEs

### 5️⃣ Backtracking Algorithms

Examples:

* Maze solving
* Depth First Search (DFS)

### 6️⃣ Stock Span Problem

Finding consecutive days where stock price is less than or equal to the current day.

---

# 🚀 Advantages of Stack

* Simple and easy to implement
* Constant time insertion and deletion
* Efficient for recursive and backtracking problems
* Used in memory management

---

# ⚠️ Limitations

* Only the top element can be accessed
* Fixed-size stacks may cause **overflow**
* Removing from empty stack causes **underflow**

---

# 📖 Example Problems Using Stack

1. Balanced Parentheses
2. Next Greater Element
3. Stock Span Problem
4. Infix to Postfix Conversion
5. Largest Rectangle in Histogram

---

# 👨‍💻 Author

**Prepared by:**
Majid Tamboli
https://github.com/majidtamboli45

As part of **Data Structures and Algorithms (DSA) practice using C++**.
