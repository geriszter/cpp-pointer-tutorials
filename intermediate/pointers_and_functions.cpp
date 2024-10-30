#include <iostream>

// Function that takes a pointer to an integer and modifies the value
void increment(int* ptr) {
    if (ptr != nullptr) {
        *ptr += 1;
        std::cout << "Value inside increment function (after increment): " << *ptr << std::endl;
    }
}

// Function that returns a pointer to the largest element in an array
int* findMax(int* arr, int size) {
    if (size <= 0 || arr == nullptr) {
        return nullptr; // Return nullptr if array is empty or invalid
    }

    int* maxPtr = arr; // Initialize maxPtr to the first element
    for (int i = 1; i < size; ++i) {
        if (*(arr + i) > *maxPtr) {
            maxPtr = arr + i; // Update maxPtr to the new maximum
        }
    }
    return maxPtr;
}

// Function that takes a const pointer, demonstrating read-only access
void printArray(const int* arr, int size) {
    std::cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Passing Pointers to Functions
    int number = 5;
    std::cout << "Original value of number: " << number << std::endl;
    increment(&number); // Pass address of number to increment function
    std::cout << "Value of number after increment function: " << number << std::endl;

    // Returning Pointers from Functions
    int arr[] = {10, 25, 3, 42, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int* maxPtr = findMax(arr, size); // Find the maximum element's pointer
    if (maxPtr != nullptr) {
        std::cout << "Maximum value in the array: " << *maxPtr << std::endl;
    }

    // Using const Pointer Parameters
    printArray(arr, size); // Print array elements without modifying

    return 0;
}
