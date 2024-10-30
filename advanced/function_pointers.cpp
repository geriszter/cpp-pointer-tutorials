#include <iostream>

// Simple functions to demonstrate function pointers
void add(int a, int b) {
    std::cout << "Addition: " << a + b << std::endl;
}

void subtract(int a, int b) {
    std::cout << "Subtraction: " << a - b << std::endl;
}

void multiply(int a, int b) {
    std::cout << "Multiplication: " << a * b << std::endl;
}

// Function that takes a function pointer as a parameter
void operate(int a, int b, void (*operation)(int, int)) {
    operation(a, b);  // Calls the function passed as a pointer
}

int main() {
    // Declaring and assigning function pointers
    void (*funcPtr)(int, int);   // Declare a function pointer

    funcPtr = &add;              // Assign address of 'add' function
    std::cout << "Using funcPtr to call add:" << std::endl;
    funcPtr(5, 3);               // Calling 'add' through the pointer

    funcPtr = &subtract;         // Reassign to 'subtract' function
    std::cout << "Using funcPtr to call subtract:" << std::endl;
    funcPtr(5, 3);               // Calling 'subtract' through the pointer

    funcPtr = &multiply;         // Reassign to 'multiply' function
    std::cout << "Using funcPtr to call multiply:" << std::endl;
    funcPtr(5, 3);               // Calling 'multiply' through the pointer

    // Passing function pointers to another function
    std::cout << "\nUsing operate function with function pointers:" << std::endl;
    operate(10, 5, add);         // Pass 'add' function to operate
    operate(10, 5, subtract);    // Pass 'subtract' function to operate
    operate(10, 5, multiply);    // Pass 'multiply' function to operate

    return 0;
}