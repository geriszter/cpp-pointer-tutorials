#include <iostream>

int* fibArray(int& size){
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        if (i <= 1) {
            arr[i] = 1;
        }
        else {
            arr[i] = arr[i-1] + arr[i-2];
        }
    }

    return arr;
}

void printArray(int* arr, int& size){
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

int main(){
    std::cout << "Input number:";
    int n;
    std::cin >> n;
    
    int* arr = fibArray(n);

    printArray(arr, n);

    delete[] arr;
    arr = nullptr;

    return 0;
}