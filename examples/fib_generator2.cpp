#include <iostream>
#include <memory>
#include <vector>

std::unique_ptr<int[]> generateFibonacci(int size) {
    auto fibonacci = std::make_unique<int[]>(size);

    for (int i = 0; i < size; i++) {
        if (i <= 1) {
            fibonacci[i] = 1;
        } else {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }
    }

    return fibonacci;
}

void printArray(const std::unique_ptr<int[]>& arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }
}

int main() {
    std::cout << "Input number: ";
    int n;
    std::cin >> n;

    if (n > 0) {
        auto fibonacciSequence = generateFibonacci(n);
        printArray(fibonacciSequence, n);
    } else {
        std::cout << "Please enter a positive number." << std::endl;
    }

    return 0;
}