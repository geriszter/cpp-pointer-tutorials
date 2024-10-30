# C++ Pointer Tutorials

This repository is a step-by-step guide designed to help you understand and master pointers in C++. From the basics of pointers to advanced concepts like smart pointers and function pointers, this repository has everything you need to improve your knowledge and skills in C++ memory management.

## Folder Structure
Each topic is organized into folders for easy navigation:
```
├── basics/
│   ├── pointer_basics.cpp            # Introductory pointer concepts
│   ├── pointer_arithmetic.cpp        # Pointer arithmetic examples
├── intermediate/
│   ├── pointers_and_functions.cpp    # Using pointers with functions
│   ├── dynamic_memory.cpp            # Dynamic memory management with pointers
├── advanced/
│   ├── function_pointers.cpp         # Function pointers explained
│   ├── smart_pointers.cpp            # Overview of smart pointers (C++11+)
└── examples/
    ├── fib_generator.cpp             # Allocates memory on the heap
    ├── fib_generator2.cpp            # Same as the first but with unique_ptr
    ├── dynamic_array_resize.cpp      # Dynamic Array Resizing
    ├── dynamic_2d_array.cpp          # Creating and Managing a 2D Dynamic Array
    ├── reverse_array.cpp             # Reversing an Array Using Pointers
    ├── swap_using_pointers.cpp       # Swapping Two Variables Using Pointers
```
## How to Use This Repository
1. Clone or Download the repository:
    ```sh
    git clone https://github.com/geriszter/cpp-pointer-tutorials.git
    cd cpp-pointer-tutorials
    ```
2. Explore Topics: Each folder contains C++ files with commented examples and explanations.
3. Run Code Examples: Compile and run code files to see how pointers work in practice. For example:
    ```sh 
    g++ basics/pointer_basics.cpp -o pointer_basics
    ./pointer_basics
    ```

## Topics Covered
 * Pointer Basics: Introduction to pointers, dereferencing, and pointer types.
 * Pointer Arithmetic: Understanding pointer arithmetic and memory address manipulation.
 * Pointers and Functions: Passing pointers to functions, returning pointers, and best practices.
 * Dynamic Memory Management: Allocating and deallocating memory with new and delete.
 * Function Pointers: Using pointers to point to functions and create dynamic functionality.
 * Smart Pointers: Managing memory safely with smart pointers (unique_ptr, shared_ptr, etc.).
