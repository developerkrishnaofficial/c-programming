# 🚀 C Programming Mastery

Welcome to my C Programming repository! This repository contains a comprehensive collection of C programs, exercises, and fundamental concepts that I have written and practiced, ranging from basic syntax to advanced topics like Dynamic Memory Allocation and File I/O.

---

## 📂 Repository Structure & Topics Covered

### 1. Basics & Fundamentals
* **Hello World:** Basic output statements using `printf`.
* **Variables & Data Types:** `int`, `float`, `char`, naming rules, and format specifiers (`%d`, `%f`, `%c`).
* **Input/Output:** Taking user input via `scanf` and performing basic arithmetic.
* **Basic Formulas:** Programs for area/perimeter of squares, circles, rectangles, and cubes.

### 2. Instructions & Operators
* **Type Declaration:** Variable initialization and scope.
* **Arithmetic Instructions:** Operator precedence, associativity, type conversion/casting, and the `math.h` library (`pow`).
* **Control/Relational Operators:** Comparison operators returning true (`1`) or false (`0`).
* **Logical & Assignment Operators:** `&&`, `||`, `!`, and shorthand operators (`+=`, `-=`, etc.).

### 3. Conditional Statements
* **If-Else & Else-If:** Decision-making and nested conditions.
* **Ternary Operator:** Short-hand conditional execution (`condition ? true : false`).
* **Switch-Case:** Menu-driven and day/character matching selectors.

### 4. Loops & Control Statements
* **For Loop:** Standard loops, countdowns, and pre/post increment/decrement operators (`++i`, `i++`).
* **While & Do-While Loops:** Entry-controlled and exit-controlled loops.
* **Break & Continue:** Terminating loops early or skipping iterations.
* **Applications:** Factorials, sums of natural numbers, prime/even/odd checks, and multiplication tables.

### 5. Functions & Recursion
* **User-Defined Functions:** Prototypes, definitions, parameters, arguments, and pass-by-value.
* **Recursion:** Self-referencing functions for factorials, natural number sums, and Fibonacci sequences.

### 6. Pointers
* **Pointer Basics:** Storing memory addresses, dereferencing (`*` operator), and pointer arithmetic.
* **Double Pointers:** Pointers to pointers (`**pptr`).
* **Call by Reference:** Modifying variables across function scopes using addresses.

### 7. Arrays
* **1D Arrays:** Contiguous memory storage, traversing via pointers, reversing arrays, and finding elements (e.g., counting odd numbers).
* **2D Arrays:** Matrix representations, multi-row tables, and nested loops.

### 8. Strings
* **Character Arrays:** Null-termination (`'\0'`) and loop traversal.
* **Input Methods:** `fgets()` and `puts()` for multi-word strings.
* **String Library (`<string.h>`):** `strlen`, `strcpy`, `strcat`, and `strcmp`.
* **Custom Operations:** Salting passwords, slicing strings, counting vowels, and checking characters.

### 9. Structures & Typedef
* **User-Defined Data Types:** Grouping different variables (`struct`).
* **Array of Structures & Pointers:** Accessing structure members using the dot (`.`) and arrow (`->`) operators.
* **Typedef:** Creating clean aliases for structures.

### 10. File I/O
* **File Modes:** Opening, closing, reading (`r`), writing (`w`), and appending (`a`) text and binary files.
* **Standard I/O Functions:** `fscanf`, `fprintf`, `fgetc`, and `fputc`.
* **End of File (EOF):** Handling file streams safely.

### 11. Dynamic Memory Allocation (DMA)
* **`malloc()` & `calloc()`:** Allocating memory at runtime.
* **`free()`:** Preventing memory leaks.
* **`realloc()`:** Resizing previously allocated memory blocks dynamically.

---

## 🛠️ How to Compile and Run
You can compile and run any `.c` file using a standard C compiler like `gcc`:

```bash
gcc filename.c -o output
./output
