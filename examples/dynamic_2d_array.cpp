#include <iostream>

int** create2DArray(int rows, int cols) {
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    return arr;
}

void initialize2DArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j;
        }
    }
}

void print2DArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void delete2DArray(int** arr, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}

int main() {
    int rows = 3, cols = 4;
    int** arr = create2DArray(rows, cols);

    initialize2DArray(arr, rows, cols);
    std::cout << "2D Array:" << std::endl;
    print2DArray(arr, rows, cols);

    delete2DArray(arr, rows);
    arr = nullptr;

    return 0;
}