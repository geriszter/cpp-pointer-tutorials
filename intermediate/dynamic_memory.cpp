#include <iostream>

int main() {
    // Dynamic Memory Allocation for a Single Variable
    int* ptr = new int;  // Allocating memory for a single integer
    *ptr = 42;           // Assigning a value to the allocated memory
    std::cout << "Value of dynamically allocated int: " << *ptr << std::endl;

    // Deallocating Memory for the Single Variable
    delete ptr;     // Freeing the memory
    ptr = nullptr;  // Setting pointer to nullptr to avoid dangling pointer

    // Dynamic Memory Allocation for an Array
    int size = 5;
    int* arr = new int[size];  // Allocating memory for an array of integers

    // Initializing and Displaying Array Elements
    std::cout << "\nDynamically allocated array elements:\n";
    for (int i = 0; i < size; ++i) {
        arr[i] = i * 10;  // Initializing array elements
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    // Deallocating Memory for the Array
    delete[] arr;   // Freeing the memory allocated for the array
    arr = nullptr;  // Setting pointer to nullptr to avoid dangling pointer

    // Checking for nullptr before Deleting (Best Practice)
    if (ptr != nullptr) {
        delete ptr;
        ptr = nullptr;
    }

    // Demonstrating Potential Issue with Dangling Pointers
    int* danglingPtr = new int(100);  // Dynamically allocate memory
    delete danglingPtr;               // Free the memory
    // Accessing danglingPtr after deletion (dangerous)
    // std::cout << "Accessing deleted memory: " << *danglingPtr << std::endl; // Uncommenting this will cause undefined behavior

    return 0;
}
