#include <iostream>

void addElement(int*& array, int& size, int element) {
    int* newArray = new int[size + 1];

    for (int i = 0; i < size; ++i) {
        newArray[i] = array[i];
    }

    newArray[size] = element;

    delete[] array;

    array = newArray;
    ++size;
}

void showTable(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int* array = nullptr;
    int size = 0;

    addElement(array, size, 1);
    addElement(array, size, 2);
    addElement(array, size, 3);
    addElement(array, size, 4);
    addElement(array, size, 5);

    showTable(array, size);

    addElement(array, size, 6);

    showTable(array, size);

    delete[] array;

    return 0;
}
