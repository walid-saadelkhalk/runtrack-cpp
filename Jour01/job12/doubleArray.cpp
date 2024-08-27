#include <iostream>

int doubleArray(int *array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        *(array + i) = *(array + i) * 2;  
        sum += *(array + i);              
    }
    return sum;
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << *(array + i) << std::endl;  
    }
}

int main() {
    int hero[5] = {3, 2, 1, 4, 5};

    int sum = doubleArray(hero, 5);

    std::cout << "Elements of the array after doubling:" << std::endl;
    printArray(hero, 5);

    std::cout << "Sum of doubled elements: " << sum << std::endl;

    return 0;
}