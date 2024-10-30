#include <iostream>

int main() {
    // Introduction to Pointers
    int number = 10;      // A simple integer variable
    int* ptr = &number;   // Declaring a pointer and assigning it the address of 'number'

    // Display the value and address of 'number'
    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Address of number (&number): " << &number << std::endl;

    // Display the value of pointer 'ptr' and the value it points to
    std::cout << "Value of ptr (address of number): " << ptr << std::endl;
    std::cout << "Value pointed to by ptr (*ptr): " << *ptr << std::endl;

    // Dereferencing the Pointer
    std::cout << "\n--- Pointer Dereferencing ---\n";
    std::cout << "Accessing the value of 'number' through pointer dereferencing (*ptr): " << *ptr << std::endl;

    // Changing the value of 'number' using the pointer
    *ptr = 20;
    std::cout << "New value of number (modified through ptr): " << number << std::endl;

    // Using Dereferencing for Operations
    std::cout << "\n--- Pointer Dereferencing in Operations ---\n";
    *ptr += 5; // This adds 5 to the value pointed to by ptr
    std::cout << "Value of number after *ptr += 5: " << number << std::endl;
    std::cout << "Value of *ptr after increment: " << *ptr << std::endl;

    // Null Pointer
    int* nullPtr = nullptr;
    std::cout << "\n--- Null Pointer ---\n";
    std::cout << "Value of nullPtr: " << nullPtr << " (points to nothing)" << std::endl;

    // Pointer Size
    std::cout << "\n--- Pointer Size ---\n";
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of pointer (int*): " << sizeof(ptr) << " bytes" << std::endl;

    // Pointer Reassignment
    std::cout << "\n--- Pointer Reassignment ---\n";
    int anotherNumber = 50;
    ptr = &anotherNumber;   // Reassigning ptr to point to another variable
    std::cout << "Value of ptr (address of anotherNumber): " << ptr << std::endl;
    std::cout << "Value pointed to by ptr (*ptr): " << *ptr << std::endl;

    return 0;
}
