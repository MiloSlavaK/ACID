#include <iostream>

int main() {
    int val[] = {9, 3, 4, 2, 6, 4, 7};
    int size = 7;
    
    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << val[i] << " ";
    }
    std::cout << std::endl;
    
    // Сортировка пузырьком
    for (int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-1-i; j++) {
            if (val[j] > val[j+1]) {
                int temp = val[j];
                val[j] = val[j+1];
                val[j+1] = temp;
            }
        }
    }
    
    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << val[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
