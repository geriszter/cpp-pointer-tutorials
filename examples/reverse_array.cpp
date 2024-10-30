#include <iostream>

void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;
    while (start < end) {
        std::swap(*start, *end);
        start++;
        end--;
    }
}

void printArray(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* arr = new int[size];
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Original array: ";
    printArray(arr, size);

    reverseArray(arr, size);

    std::cout << "Reversed array: ";
    printArray(arr, size);

    delete[] arr;
    arr = nullptr;

    return 0;
}