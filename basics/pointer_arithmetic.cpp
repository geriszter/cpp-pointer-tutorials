#include <iostream>

int main() {
    // Pointer Arithmetic with an Array
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr; // Pointer to the first element of the array

    std::cout << "Array elements accessed through pointer arithmetic:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << " (ptr + " << i << "): " << *(ptr + i) << std::endl;
    }

    // Pointer Increment and Decrement
    std::cout << "\n--- Pointer Increment and Decrement ---\n";
    std::cout << "Initial pointer points to value: " << *ptr << std::endl;

    ptr++; // Move the pointer to the next integer in memory
    std::cout << "After ptr++ (points to next element): " << *ptr << std::endl;

    ptr--; // Move the pointer back to the first element
    std::cout << "After ptr-- (back to first element): " << *ptr << std::endl;

    // Using Pointer Arithmetic with a Loop
    std::cout << "\n--- Looping with Pointer Arithmetic ---\n";
    ptr = arr; // Reset pointer to the start of the array
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i << " using ptr++: " << *ptr << std::endl;
        ptr++; // Move to the next element in the array
    }

    // Difference Between Pointers
    std::cout << "\n--- Difference Between Pointers ---\n";
    ptr = &arr[0];  // Reset pointer to start of array
    int* endPtr = &arr[4];  // Pointer to the last element
    std::cout << "Start pointer address: " << ptr << std::endl;
    std::cout << "End pointer address: " << endPtr << std::endl;
    std::cout << "Difference (endPtr - ptr): " << endPtr - ptr << " (number of elements between them)\n";

    // Out of Bounds - Warning
    std::cout << "\n--- Out of Bounds Warning ---\n";
    ptr = arr + 5; // Points to memory just past the end of the array
    std::cout << "Value at out-of-bounds location (ptr = arr + 5): " << *ptr << " (undefined behavior)\n";

    return 0;
}