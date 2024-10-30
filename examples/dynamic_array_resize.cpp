#include <iostream>

int* resizeArray(int* arr, int oldSize, int newSize) {
    int* newArr = new int[newSize];
    for (int i = 0; i < oldSize && i < newSize; i++) {
        newArr[i] = arr[i];
    }
    delete[] arr;
    return newArr;
}

void printArray(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size = 5;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    std::cout << "Original array: ";
    printArray(arr, size);

    // Resize the array to a larger size
    int newSize = 10;
    arr = resizeArray(arr, size, newSize);

    for (int i = size; i < newSize; i++) {
        arr[i] = i + 1;
    }

    std::cout << "Resized array: ";
    printArray(arr, newSize);

    delete[] arr;
    arr = nullptr;

    return 0;
}